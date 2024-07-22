// You may need to build the project (run Qt uic code generator) to get "ui_indicator_widget.h" resolved

#include "include/IndicatorWidget.h"

IndicatorWidget::IndicatorWidget(QWidget *parent) :
	QWidget(parent), ui(new IndicatorWidget) {
  ui->setupUi(this);
}

IndicatorWidget::~IndicatorWidget() {
  delete ui;
}
