#include "include/kitten.h"

Kitten::Kitten(QObject *parent) : QObject(parent) {

}

void Kitten::meow() {
  qDebug() << "Meow!";
}