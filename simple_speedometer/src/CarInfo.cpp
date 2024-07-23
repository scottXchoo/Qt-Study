#include "CarInfo.h"
#include "ui_CarInfo.h"

CarInfo::CarInfo(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CarInfo),
	car(new Car(this))
{
  ui->setupUi(this);

  car->setSpeed(50);
  ui->speedLabel->setText(QString::number(car->speed()));
}

CarInfo::~CarInfo()
{
  delete ui;
}
