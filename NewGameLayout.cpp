//
// Created by Luis on 07/07/2019.
//

#include "NewGameLayout.h"
#include "Team.h"
#include "Game.h"

NewGameLayout::NewGameLayout(){
    create=new QPushButton();
    create->setText("New Game");
    this->addWidget(create, 0, 1);
    std::vector<Team> teams = Game::getAllTeams();

}