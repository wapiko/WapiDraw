/********************************************************************************
** Form generated from reading UI file 'wapidraw.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAPIDRAW_H
#define UI_WAPIDRAW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WapiDraw
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WapiDraw)
    {
        if (WapiDraw->objectName().isEmpty())
            WapiDraw->setObjectName(QStringLiteral("WapiDraw"));
        WapiDraw->resize(400, 300);
        menuBar = new QMenuBar(WapiDraw);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        WapiDraw->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WapiDraw);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WapiDraw->addToolBar(mainToolBar);
        centralWidget = new QWidget(WapiDraw);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        WapiDraw->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(WapiDraw);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WapiDraw->setStatusBar(statusBar);

        retranslateUi(WapiDraw);

        QMetaObject::connectSlotsByName(WapiDraw);
    } // setupUi

    void retranslateUi(QMainWindow *WapiDraw)
    {
        WapiDraw->setWindowTitle(QApplication::translate("WapiDraw", "WapiDraw", 0));
    } // retranslateUi

};

namespace Ui {
    class WapiDraw: public Ui_WapiDraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAPIDRAW_H
