#include <QCoreApplication>
#include <QThread>
#include <QDebug>

#include "Worker.h"

int main(int argc, char *argv[]) {
  QCoreApplication a(argc, argv);

  QThread::currentThread()->setObjectName("Main Thread");

  qInfo() << "Starting" << QThread::currentThread();
  qInfo() << "Doing Stuff" << QThread::currentThread();

//  Worker worker; // no issues
//  worker.run();

  Worker *worker = new Worker(); // No Parent!!!
  QThread thread;
  thread.setObjectName("Worker Thread");
  worker->moveToThread(&thread);
  QObject::connect(&thread, &QThread::started, worker, &Worker::run);
  // QObject::connect(&thread, &QThread::finished, worker, &Worker::deleteLater);

  thread.start();

  qInfo() << "Finished" << QThread::currentThread();


  return QCoreApplication::exec();
}
