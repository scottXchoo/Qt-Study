#include "test.h"
#include <QDebug>

Test::Test(QObject *parent)
	: QObject{parent}
{}

void Test::message(QString value)
{
  qInfo() << this << value;
}
