#ifndef INDICATORWIDGET_H
#define INDICATORWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class IndicatorWidget; }
QT_END_NAMESPACE

class IndicatorWidget : public QWidget {
 Q_OBJECT

 public:
  explicit IndicatorWidget(QWidget *parent = nullptr);
  ~IndicatorWidget() override;

 public slots:
  void setLeftIndicator(bool on);
  void setRightIndicator(bool on);

 private:
  Ui::IndicatorWidget *ui;
};

#endif // INDICATORWIDGET_H
