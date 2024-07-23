#ifndef SPEEDOMETERWIDGET_H
#define SPEEDOMETERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SpeedometerWidget; }
QT_END_NAMESPACE

class SpeedometerWidget : public QWidget {
 Q_OBJECT

 public:
  explicit SpeedometerWidget(QWidget *parent = nullptr);
  ~SpeedometerWidget() override;

 public slots:
  void setSpeed(int speed);

 private:
  Ui::SpeedometerWidget *ui;

};

#endif // SPEEDOMETERWIDGET_H
