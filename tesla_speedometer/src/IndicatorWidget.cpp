#include "IndicatorWidget.h"
#include "ui_IndicatorWidget.h"

IndicatorWidget::IndicatorWidget(QWidget *parent) :
	QWidget(parent), ui(new Ui::IndicatorWidget) {
  ui->setupUi(this);
}

IndicatorWidget::~IndicatorWidget() {
  delete ui;
}

void IndicatorWidget::setLeftIndicator(bool on) {
  ui->leftIndicator->setStyleSheet(on ? "background-color: green" : "");
}

void IndicatorWidget::setRightIndicator(bool on) {
  ui->rightIndicator->setStyleSheet(on ? "background-color: green" : "");
}