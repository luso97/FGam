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

class MainWindow : public QMainWindow{
    Q_OBJECT
private:
    QPushButton *newGame;
    static QWidget *widget;


public:
    MainWindow();
    static void changeState(QLayout *layout);
    void createActionsML();
};


#endif //UNTITLED2_MAINWINDOW_H
