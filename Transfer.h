//
// Created by Luis on 05/07/2019.
//

#ifndef UNTITLED2_TRANSFER_H
#define UNTITLED2_TRANSFER_H


#include "Team.h"
#include "Players.h"

class Transfer {
private:
    int value;
    int valuePerYear;
    int years;
    int trId;
    Players player;
    Team team1;
    Team team2;
    bool bidFinished;
};


#endif //UNTITLED2_TRANSFER_H
