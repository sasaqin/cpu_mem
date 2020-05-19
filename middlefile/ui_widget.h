/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber;
    QLabel *labCPUMemory;
    QComboBox *cboxColor;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labLive;
    QLabel *labDateTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(614, 506);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(0, 60));
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(19);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        gridLayout->addWidget(lcdNumber, 0, 0, 1, 1);

        labCPUMemory = new QLabel(Widget);
        labCPUMemory->setObjectName(QString::fromUtf8("labCPUMemory"));
        labCPUMemory->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(labCPUMemory, 1, 0, 1, 1);

        cboxColor = new QComboBox(Widget);
        cboxColor->setObjectName(QString::fromUtf8("cboxColor"));
        cboxColor->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(cboxColor, 2, 0, 1, 1);

        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labLive = new QLabel(Widget);
        labLive->setObjectName(QString::fromUtf8("labLive"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labLive->sizePolicy().hasHeightForWidth());
        labLive->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labLive);

        labDateTime = new QLabel(Widget);
        labDateTime->setObjectName(QString::fromUtf8("labDateTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labDateTime->sizePolicy().hasHeightForWidth());
        labDateTime->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(labDateTime);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        labCPUMemory->setText(QApplication::translate("Widget", "CPU : 0%  \345\206\205\345\255\230 : 0% ( \345\267\262\347\224\250 0 MB / \345\205\261 0 MB )", 0, QApplication::UnicodeUTF8));
        labLive->setText(QApplication::translate("Widget", "\345\267\262\350\277\220\350\241\214 : 0\345\244\2510\346\227\2660\345\210\2060\347\247\222  |  ", 0, QApplication::UnicodeUTF8));
        labDateTime->setText(QApplication::translate("Widget", "\345\275\223\345\211\215\346\227\266\351\227\264 : 2015\345\271\2641\346\234\2101\346\227\245 12:33:33", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
