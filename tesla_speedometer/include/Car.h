#ifndef CAR_H
#define CAR_H

#include <QObject>
#include <QThread>

class Car : public QObject
{
 Q_OBJECT

 public:
  explicit Car(QObject *parent = nullptr);
  ~Car();

  int speed() const;
  bool leftIndicator() const;
  bool rightIndicator() const;

 public slots:
  void accelerate();
  void decelerate();
  void turnLeft();
  void turnRight();

 signals:
  void speedChanged(int speed);
  void leftIndicatorChanged(bool on);
  void rightIndicatorChanged(bool on);

 private:
  int m_speed;
  bool m_leftIndicator;
  bool m_rightIndicator;
};

class CarThread : public QThread
{
 Q_OBJECT

 public:
  explicit CarThread(QObject *parent = nullptr);
  ~CarThread();

  Car* car() const;

 protected:
  void run() override;

 private:
  Car *m_car;
};

#endif // CAR_H