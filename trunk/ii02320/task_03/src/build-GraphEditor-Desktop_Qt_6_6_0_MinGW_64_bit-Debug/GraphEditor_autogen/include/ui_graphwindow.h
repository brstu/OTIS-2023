/********************************************************************************
** Form generated from reading UI file 'graphwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHWINDOW_H
#define UI_GRAPHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GraphWindow
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QGraphicsView *graphicsView;
    QVBoxLayout *verticalLayout;
    QPushButton *addVertPushButton;
    QPushButton *addEdgePushButton;
    QPushButton *colorPushButton;
    QPushButton *renamePushButton;
    QComboBox *comboBox_2;
    QPushButton *savePushButton;
    QPushButton *loadPushButton;
    QPushButton *deletePushButton;

    void setupUi(QWidget *GraphWindow)
    {
        if (GraphWindow->objectName().isEmpty())
            GraphWindow->setObjectName("GraphWindow");
        GraphWindow->resize(503, 387);
        gridLayout = new QGridLayout(GraphWindow);
        gridLayout->setObjectName("gridLayout");
        comboBox = new QComboBox(GraphWindow);
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(GraphWindow);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        addVertPushButton = new QPushButton(GraphWindow);
        addVertPushButton->setObjectName("addVertPushButton");

        verticalLayout->addWidget(addVertPushButton);

        addEdgePushButton = new QPushButton(GraphWindow);
        addEdgePushButton->setObjectName("addEdgePushButton");

        verticalLayout->addWidget(addEdgePushButton);

        colorPushButton = new QPushButton(GraphWindow);
        colorPushButton->setObjectName("colorPushButton");

        verticalLayout->addWidget(colorPushButton);

        renamePushButton = new QPushButton(GraphWindow);
        renamePushButton->setObjectName("renamePushButton");

        verticalLayout->addWidget(renamePushButton);

        comboBox_2 = new QComboBox(GraphWindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setEnabled(true);
        comboBox_2->setEditable(false);

        verticalLayout->addWidget(comboBox_2);

        savePushButton = new QPushButton(GraphWindow);
        savePushButton->setObjectName("savePushButton");

        verticalLayout->addWidget(savePushButton);

        loadPushButton = new QPushButton(GraphWindow);
        loadPushButton->setObjectName("loadPushButton");

        verticalLayout->addWidget(loadPushButton);

        deletePushButton = new QPushButton(GraphWindow);
        deletePushButton->setObjectName("deletePushButton");

        verticalLayout->addWidget(deletePushButton);


        gridLayout->addLayout(verticalLayout, 1, 1, 1, 1);


        retranslateUi(GraphWindow);

        QMetaObject::connectSlotsByName(GraphWindow);
    } // setupUi

    void retranslateUi(QWidget *GraphWindow)
    {
        GraphWindow->setWindowTitle(QCoreApplication::translate("GraphWindow", "Form", nullptr));
        addVertPushButton->setText(QCoreApplication::translate("GraphWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        addEdgePushButton->setText(QCoreApplication::translate("GraphWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\265\320\261\321\200\320\276", nullptr));
        colorPushButton->setText(QCoreApplication::translate("GraphWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\206\320\262\320\265\321\202", nullptr));
        renamePushButton->setText(QCoreApplication::translate("GraphWindow", "\320\237\320\265\321\200\320\265\320\270\320\274\320\265\320\275\320\276\320\262\320\260\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("GraphWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("GraphWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\263\321\200\320\260\321\204\320\265", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("GraphWindow", "\320\255\320\271\320\273\320\265\321\200\320\276\320\262 \321\206\320\270\320\272\320\273", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("GraphWindow", "\320\223\320\260\320\274\320\270\320\273\321\214\321\202\320\276\320\275\320\276\320\262 \321\206\320\270\320\272\320\273", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("GraphWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\263\321\200\320\260\321\204\320\260", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("GraphWindow", "\320\235\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265 \320\272\321\200\320\260\321\202\321\207\320\260\320\271\321\210\320\270\321\205 \320\277\321\203\321\202\320\265\320\271", nullptr));

        comboBox_2->setPlaceholderText(QCoreApplication::translate("GraphWindow", " \320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274\321\213", nullptr));
        savePushButton->setText(QCoreApplication::translate("GraphWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\263\321\200\320\260\321\204", nullptr));
        loadPushButton->setText(QCoreApplication::translate("GraphWindow", "\320\222\320\276\321\201\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214 \320\263\321\200\320\260\321\204", nullptr));
        deletePushButton->setText(QCoreApplication::translate("GraphWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphWindow: public Ui_GraphWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHWINDOW_H
