#include "Speedometer.h"
#include <QVBoxLayout>

Speedometer::Speedometer(QWidget *parent)
	: QWidget(parent), carThread(new CarThread(this))
{
  speedometerWidget = new SpeedometerWidget(this);
  indicatorWidget = new IndicatorWidget(this);
  controlButtonsWidget = new ControlButtonWidget(this);

  QVBoxLayout *layout = new QVBoxLayout(this);
  layout->addWidget(speedometerWidget);
  layout->addWidget(indicatorWidget);
  layout->addWidget(controlButtonsWidget);

  setLayout(layout);

  connect(carThread->car(), &Car::speedChanged, speedometerWidget, &SpeedometerWidget::setSpeed);
  connect(carThread->car(), &Car::leftIndicatorChanged, indicatorWidget, &IndicatorWidget::setLeftIndicator);
  connect(carThread->car(), &Car::rightIndicatorChanged, indicatorWidget, &IndicatorWidget::setRightIndicator);

  connect(controlButtonsWidget, &ControlButtonWidget::accelerate, carThread->car(), &Car::accelerate);
  connect(controlButtonsWidget, &ControlButtonWidget::decelerate, carThread->car(), &Car::decelerate);
  connect(controlButtonsWidget, &ControlButtonWidget::turnLeft, carThread->car(), &Car::turnLeft);
  connect(controlButtonsWidget, &ControlButtonWidget::turnRight, carThread->car(), &Car::turnRight);

  carThread->start();
}

Speedometer::~Speedometer()
{
  carThread->quit();
  carThread->wait();
}