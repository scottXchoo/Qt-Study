#include <QApplication>
#include "CarInfo.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  CarInfo w;
  w.show();

  return QApplication::exec();
}