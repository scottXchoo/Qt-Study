#ifndef SPEEDOMETER__SPEEDOMETER_H_
#define SPEEDOMETER__SPEEDOMETER_H_

#include <QWidget>
#include "SpeedometerWidget.h"
#include "IndicatorWidget.h"
#include "ControlButtonsWidget.h"

class Speedometer : public QWidget {
  Q_OBJECT

 public:
  explicit Speedometer(QWidget *parent = nullptr);
  ~Speedometer();

 private:
  Ui::SpeedometerWidget *speedometerWidget_;
  Ui::IndicatorWidget *indicatorWidget_;
  Ui::ControlButtonsWidget *controlButtonsWidget_;
};

#endif //SPEEDOMETER__SPEEDOMETER_H_
