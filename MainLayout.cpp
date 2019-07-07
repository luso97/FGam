//
// Created by Luis on 05/07/2019.
//

#include <QtWidgets/QPushButton>
#include "MainLayout.h"
MainLayout::MainLayout():
newGame(new QPushButton()),
loadGame(new QPushButton()) {
    newGame->setText("New Game");
    this->addWidget(newGame, 0, 1);
    loadGame->setText("Load Game");
    this->setColumnStretch(0,1);
    this->addWidget(loadGame, 1, 1);
    this->setColumnStretch(1,1);

}
void MainLayout::createActions() {
    connect(newGame, SIGNAL(triggered()), this, SLOT(newGameM()));
}

void MainLayout::newGameM(){

}