#include "include/IndicatorWidget.h"
#include "ui_IndicatorWidget.h"

IndicatorWidget::IndicatorWidget(QWidget *parent) :
	QWidget(parent), ui(new Ui::IndicatorWidget) {
  ui->setupUi(this);
}

IndicatorWidget::~IndicatorWidget() {
  delete ui;
}
