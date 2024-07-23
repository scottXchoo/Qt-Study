#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H

#include <QWidget>

#include "Car.h"
#include "SpeedometerWidget.h"
#include "IndicatorWidget.h"
#include "ControlButtonWidget.h"

class Speedometer : public QWidget
{
 Q_OBJECT

 public:
  explicit Speedometer(QWidget *parent = nullptr);
  ~Speedometer();

 private:
  CarThread *carThread;
  SpeedometerWidget *speedometerWidget;
  IndicatorWidget *indicatorWidget;
  ControlButtonWidget *controlButtonsWidget;
};

#endif // SPEEDOMETER_H