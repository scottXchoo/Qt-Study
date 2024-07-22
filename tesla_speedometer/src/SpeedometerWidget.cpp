#include "include/SpeedometerWidget.h"
#include "ui_SpeedometerWidget.h"

SpeedometerWidget::SpeedometerWidget(QWidget *parent) :
	QWidget(parent), ui(new Ui::SpeedometerWidget) {
  ui->setupUi(this);
}

SpeedometerWidget::~SpeedometerWidget() {
  delete ui;
}
