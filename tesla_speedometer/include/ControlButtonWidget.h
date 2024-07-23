#ifndef CONTROLBUTTONWIDGET_H
#define CONTROLBUTTONWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ControlButtonWidget; }
QT_END_NAMESPACE

class ControlButtonWidget : public QWidget {
 Q_OBJECT

 public:
  explicit ControlButtonWidget(QWidget *parent = nullptr);
  ~ControlButtonWidget() override;

 signals:
  void accelerate();
  void decelerate();
  void turnLeft();
  void turnRight();

 private:
  Ui::ControlButtonWidget *ui;

};

#endif // CONTROLBUTTONWIDGET_H
