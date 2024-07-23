#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QThread>
#include <QDebug>

class Worker : public QObject {
  Q_OBJECT

 public:
  explicit Worker(QObject *parent = nullptr);
  ~Worker() override;

  signals:

 public slots:
  void run();
  void deleteLater();


};

#endif //WORKER_H
