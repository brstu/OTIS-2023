/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addVertexButton;
    QPushButton *addEdgeButton;
    QGraphicsView *graphicsView;
    QPushButton *removeEdgeButton;
    QPushButton *removeVertexButton;
    QPushButton *changeVertexButton;
    QPushButton *addInformationButton;
    QPushButton *addClearsceneButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(906, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addVertexButton = new QPushButton(centralwidget);
        addVertexButton->setObjectName("addVertexButton");
        addVertexButton->setGeometry(QRect(20, 20, 191, 31));
        addEdgeButton = new QPushButton(centralwidget);
        addEdgeButton->setObjectName("addEdgeButton");
        addEdgeButton->setGeometry(QRect(19, 73, 191, 31));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(220, 10, 671, 461));
        removeEdgeButton = new QPushButton(centralwidget);
        removeEdgeButton->setObjectName("removeEdgeButton");
        removeEdgeButton->setGeometry(QRect(20, 120, 191, 31));
        removeVertexButton = new QPushButton(centralwidget);
        removeVertexButton->setObjectName("removeVertexButton");
        removeVertexButton->setGeometry(QRect(19, 163, 191, 31));
        changeVertexButton = new QPushButton(centralwidget);
        changeVertexButton->setObjectName("changeVertexButton");
        changeVertexButton->setGeometry(QRect(20, 200, 191, 31));
        addInformationButton = new QPushButton(centralwidget);
        addInformationButton->setObjectName("addInformationButton");
        addInformationButton->setGeometry(QRect(19, 243, 191, 31));
        addClearsceneButton = new QPushButton(centralwidget);
        addClearsceneButton->setObjectName("addClearsceneButton");
        addClearsceneButton->setGeometry(QRect(19, 283, 191, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 906, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addVertexButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        addEdgeButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\261\321\200\320\276", nullptr));
        removeEdgeButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\265\320\261\321\200\320\276", nullptr));
        removeVertexButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        changeVertexButton->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\270\320\274\320\265\320\275\320\276\320\262\320\260\321\202\321\214/\320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\206\320\262\320\265\321\202 \n"
" \320\262\320\265\321\200\321\210\320\270\320\275\321\213", nullptr));
        addInformationButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\263\321\200\320\260\321\204\320\265", nullptr));
        addClearsceneButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\215\320\272\321\200\320\260\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
