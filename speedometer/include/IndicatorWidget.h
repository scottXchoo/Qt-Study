#ifndef SPEEDOMETER_UI_INDICATOR_WIDGET_H_
#define SPEEDOMETER_UI_INDICATOR_WIDGET_H_

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

#endif //SPEEDOMETER_UI_INDICATOR_WIDGET_H_
