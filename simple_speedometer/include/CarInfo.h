#ifndef CARINFO_H
#define CARINFO_H

#include <QWidget>
#include "Car.h"

namespace Ui { class CarInfo; }

class CarInfo : public QWidget {
 Q_OBJECT

 public:
  explicit CarInfo(QWidget *parent = nullptr);
  ~CarInfo() override;

 private:
  Ui::CarInfo *ui;
  Car *car;
};

#endif // CARINFO_H
