//
// Created by Luis on 05/07/2019.
//

#include <QtWidgets/QPushButton>
#include <iostream>
#include "MainLayout.h"
#include "NewGameLayout.h"


MainLayout::MainLayout():
newGame(new QPushButton()),
loadGame(new QPushButton()) {
    newGame->setText("New Game");
    this->addWidget(newGame, 0, 1);
    loadGame->setText("Load Game");
    this->setColumnStretch(0,1);
    this->addWidget(loadGame, 1, 1);
    this->setColumnStretch(1,1);
    createActions();

}
void MainLayout::newGameM(){
    std::cout<<"aver";
    NewGameLayout *layout=new NewGameLayout();
    MainWindow::changeState(layout);
    update();
}
void MainLayout::createActions() {
    connect(newGame, SIGNAL(clicked()), this, SLOT(newGameM()));
}

