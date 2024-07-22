#include <QApplication>
#include "include/Speedometer.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Speedometer speedometer;
  speedometer.show();

  return QApplication::exec();
}
