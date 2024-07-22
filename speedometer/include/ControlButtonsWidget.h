#ifndef SPEEDOMETER_UI_CONTROL_BUTTONS_WIDGET_H_
#define SPEEDOMETER_UI_CONTROL_BUTTONS_WIDGET_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ControlButtonsWidget; }
QT_END_NAMESPACE

class ControlButtonsWidget : public QWidget {
  Q_OBJECT

 public:
  explicit ControlButtonsWidget(QWidget *parent = nullptr);
  ~ControlButtonsWidget() override;

 private:
  Ui::ControlButtonsWidget *ui;
};

#endif //SPEEDOMETER_UI_CONTROL_BUTTONS_WIDGET_H_
