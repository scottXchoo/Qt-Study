#include <QWidget>
#include <QAbstractButton>

#include "ControlButtonWidget.h"
#include "ui_ControlButtonWidget.h"

ControlButtonWidget::ControlButtonWidget(QWidget *parent) : QWidget(parent), ui(new Ui::ControlButtonWidget) {
  ui->setupUi(this);

  connect(ui->accelerateButton, &QPushButton::clicked, this, &ControlButtonWidget::accelerate);
  connect(ui->decelerateButton, &QPushButton::clicked, this, &ControlButtonWidget::decelerate);
  connect(ui->leftTurnButton, &QPushButton::clicked, this, &ControlButtonWidget::turnLeft);
  connect(ui->rightTurnButton, &QPushButton::clicked, this, &ControlButtonWidget::turnRight);
}

ControlButtonWidget::~ControlButtonWidget() {
  delete ui;
}