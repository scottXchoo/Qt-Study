#ifndef TEST_H
#define TEST_H

#include <QObject>

class Test : public QObject {
 Q_OBJECT
 public:
  explicit Test(QObject *parent = nullptr);
  ~Test() override;

  void message(const QString &value = "");

 signals:
};

#endif // TEST_H
