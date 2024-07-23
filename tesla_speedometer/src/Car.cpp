#include "Car.h"

Car::Car(QObject *parent)
	: QObject(parent), m_speed(0), m_leftIndicator(false), m_rightIndicator(false) {}

Car::~Car() {}

int Car::speed() const {
  return m_speed;
}

bool Car::leftIndicator() const {
  return m_leftIndicator;
}

bool Car::rightIndicator() const {
  return m_rightIndicator;
}

void Car::accelerate() {
  m_speed += 10;
  emit speedChanged(m_speed);
}

void Car::decelerate() {
  m_speed = std::max(0, m_speed - 10);
  emit speedChanged(m_speed);
}

void Car::turnLeft() {
  m_leftIndicator = !m_leftIndicator;
  emit leftIndicatorChanged(m_leftIndicator);
}

void Car::turnRight() {
  m_rightIndicator = !m_rightIndicator;
  emit rightIndicatorChanged(m_rightIndicator);
}

CarThread::CarThread(QObject *parent)
	: QThread(parent), m_car(new Car) {
}

CarThread::~CarThread() {
  m_car->deleteLater();
}

Car *CarThread::car() const {
  return m_car;
}

void CarThread::run() {
  // Car 객체를 별도의 스레드에서 실행
  m_car->moveToThread(this);
  exec();
}