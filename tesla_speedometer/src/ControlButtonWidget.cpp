#include "include/ControlButtonWidget.h"
#include "ui_ControlButtonWidget.h"

ControlButtonWidget::ControlButtonWidget(QWidget *parent) :
	QWidget(parent), ui(new Ui::ControlButtonWidget) {
  ui->setupUi(this);
}

ControlButtonWidget::~ControlButtonWidget() {
  delete ui;
}
