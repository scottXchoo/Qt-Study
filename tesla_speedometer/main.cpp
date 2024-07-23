#include <QApplication>
#include "Speedometer.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  Speedometer tesla;
  tesla.show();

  return QApplication::exec();
}
