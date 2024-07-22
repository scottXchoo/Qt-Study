// You may need to build the project (run Qt uic code generator) to get "ui_control_buttons_widget.h" resolved

#include "include/ControlButtonsWidget.h"

ControlButtonsWidget::ControlButtonsWidget(QWidget *parent) :
  QWidget(parent), ui(new Ui::ControlButtonsWidget) {
  ui->setupUi(this);
}

ControlButtonsWidget::~ControlButtonsWidget() {
  delete ui;
}
