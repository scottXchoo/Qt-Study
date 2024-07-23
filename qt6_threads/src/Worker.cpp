#include "Worker.h"

Worker::Worker(QObject *parent) : QObject(parent) {
  qInfo() << this << "Constructed" << QThread::currentThread();
}

Worker::~Worker() {
  qInfo() << this << "Deconstructed" << QThread::currentThread();
}

void Worker::run() {
  for(int i = 0; i < 5; i++) {
	qInfo() << this << "Running" << QString::number(i) << QThread::currentThread();
  	QThread::currentThread()->msleep(500); // 특정 시간 동안 일시정지 후, 자동으로 스레드 깨움
  }

  // this->deleteLater(); // This is a safe way to delete the object => Deconstructed Worker
}

void Worker::deleteLater() {
  qInfo() << this << "Deleted" << QThread::currentThread();
  QObject::deleteLater();
}