//
// Created by Luis on 07/07/2019.
//

#ifndef UNTITLED2_NEWGAMELAYOUT_H
#define UNTITLED2_NEWGAMELAYOUT_H


#include <QtWidgets/QPushButton>
#include <QtWidgets/QGridLayout>

class NewGameLayout : public QGridLayout {

public:
    NewGameLayout();
    void createActions();
private:
    QPushButton *create;


private slots:
    void newGameM();
};


#endif //UNTITLED2_NEWGAMELAYOUT_H
