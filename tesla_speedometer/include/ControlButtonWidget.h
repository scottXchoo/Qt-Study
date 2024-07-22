#ifndef TESLA_SPEEDOMETER_UI_CONTROLBUTTONWIDGET_H_
#define TESLA_SPEEDOMETER_UI_CONTROLBUTTONWIDGET_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ControlButtonWidget; }
QT_END_NAMESPACE

class ControlButtonWidget : public QWidget {
 Q_OBJECT

 public:
  explicit ControlButtonWidget(QWidget *parent = nullptr);
  ~ControlButtonWidget() override;

 private:
  Ui::ControlButtonWidget *ui;
};

#endif //TESLA_SPEEDOMETER_UI_CONTROLBUTTONWIDGET_H_
