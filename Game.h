//
// Created by Luis on 05/07/2019.
//

#ifndef UNTITLED2_GAME_H
#define UNTITLED2_GAME_H


#include "Team.h"
#include "Competition.h"
#include <vector>

class Game {
public:
    static std::vector<Team> getAllTeams();
private:
    Competition comp;
    Team team1;
    Team team2;
    int result;
    int GId;
};


#endif //UNTITLED2_GAME_H
