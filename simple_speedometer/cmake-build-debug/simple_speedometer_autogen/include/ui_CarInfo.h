/********************************************************************************
** Form generated from reading UI file 'CarInfo.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARINFO_H
#define UI_CARINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CarInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *speedLabel;

    void setupUi(QWidget *CarInfo)
    {
        if (CarInfo->objectName().isEmpty())
            CarInfo->setObjectName("CarInfo");
        CarInfo->resize(400, 300);
        verticalLayout = new QVBoxLayout(CarInfo);
        verticalLayout->setObjectName("verticalLayout");
        speedLabel = new QLabel(CarInfo);
        speedLabel->setObjectName("speedLabel");

        verticalLayout->addWidget(speedLabel);


        retranslateUi(CarInfo);

        QMetaObject::connectSlotsByName(CarInfo);
    } // setupUi

    void retranslateUi(QWidget *CarInfo)
    {
        CarInfo->setWindowTitle(QCoreApplication::translate("CarInfo", "CarInfo", nullptr));
        speedLabel->setText(QCoreApplication::translate("CarInfo", "Speed: 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CarInfo: public Ui_CarInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARINFO_H
