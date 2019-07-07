//
// Created by Luis on 05/07/2019.
//

#ifndef UNTITLED2_MAINWINDOW_H
#define UNTITLED2_MAINWINDOW_H
#include <QMainWindow>
#include <QtGui>

#include <QtCore/QArgument>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QStackedWidget>


class MainWindow : public QMainWindow{
    Q_OBJECT
private:
    QPushButton *newGame;




public:

    MainWindow();
    static void changeState(QLayout *layout);
    void createActionsML();
    static QStackedWidget *stack;
};


#endif //UNTITLED2_MAINWINDOW_H
