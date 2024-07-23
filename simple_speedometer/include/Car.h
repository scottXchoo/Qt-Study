#ifndef CAR_H
#define CAR_H

#include <QObject>

class Car : public QObject
{
 Q_OBJECT

 public:
  explicit Car(QObject *parent = nullptr);

  int speed() const { return m_speed; }
  void setSpeed(int speed) { m_speed = speed; }

 signals:
  void speedChanged(int speed);

 private:
  int m_speed;
};

#endif // CAR_H
