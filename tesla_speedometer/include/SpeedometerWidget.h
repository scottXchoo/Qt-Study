#ifndef TESLA_SPEEDOMETER_UI_SPEEDOMETERWIDGET_H_
#define TESLA_SPEEDOMETER_UI_SPEEDOMETERWIDGET_H_

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

#endif //TESLA_SPEEDOMETER_UI_SPEEDOMETERWIDGET_H_
