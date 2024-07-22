#ifndef QT6_EP15__KITTEN_H_
#define QT6_EP15__KITTEN_H_

#include <QObject>
#include <QDebug>

class Kitten : public QObject {
Q_OBJECT
 public:
  explicit Kitten(QObject *parent = nullptr);

	void meow();

	signals:

};

#endif //QT6_EP15__KITTEN_H_
