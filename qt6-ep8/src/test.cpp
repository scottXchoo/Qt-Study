#include "include/test.h"
#include <QDebug>

Test::Test(QObject *parent)
	: QObject{parent} {
  qInfo() << this << "Constructed" << parent;
}

Test::~Test() {
  qInfo() << this << "Deconstructed" << parent();
}

void Test::message(const QString &value) {
  qInfo() << this << value;
}