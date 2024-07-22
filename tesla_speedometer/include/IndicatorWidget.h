#ifndef TESLA_SPEEDOMETER_UI_INDICATORWIDGET_H_
#define TESLA_SPEEDOMETER_UI_INDICATORWIDGET_H_

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IndicatorWidget; }
QT_END_NAMESPACE

class IndicatorWidget : public QWidget {
 Q_OBJECT

 public:
  explicit IndicatorWidget(QWidget *parent = nullptr);
  ~IndicatorWidget() override;

 private:
  Ui::IndicatorWidget *ui;
};

#endif //TESLA_SPEEDOMETER_UI_INDICATORWIDGET_H_
