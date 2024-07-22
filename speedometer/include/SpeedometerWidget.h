#ifndef SPEEDOMETER_UI_SPEEDOMETER_WIDGET_H_
#define SPEEDOMETER_UI_SPEEDOMETER_WIDGET_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SpeedometerWidget; }
QT_END_NAMESPACE

class SpeedometerWidget : public QWidget {
 Q_OBJECT

 public:
  explicit SpeedometerWidget(QWidget *parent = nullptr);
  ~SpeedometerWidget() override;

 private:
  Ui::SpeedometerWidget *ui;
};

#endif //SPEEDOMETER_UI_SPEEDOMETER_WIDGET_H_
