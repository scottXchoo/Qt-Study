// You may need to build the project (run Qt uic code generator) to get "ui_speedometer_widget.h" resolved

#include "include/SpeedometerWidget.h"

SpeedometerWidget::SpeedometerWidget(QWidget *parent) :
	QWidget(parent), ui(new Ui::speedometer_widget) {
  ui->setupUi(this);
}

SpeedometerWidget::~SpeedometerWidget() {
  delete ui;
}
