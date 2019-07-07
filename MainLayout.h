//
// Created by Luis on 05/07/2019.
//

#ifndef UNTITLED2_MAINLAYOUT_H
#define UNTITLED2_MAINLAYOUT_H


#include <QtWidgets/QGridLayout>

class MainLayout : public QGridLayout{
public:
    MainLayout();
    void createActions();
private:
    QPushButton *newGame;
    QPushButton *loadGame;

private slots:
    void newGameM();
};


#endif //UNTITLED2_MAINLAYOUT_H
