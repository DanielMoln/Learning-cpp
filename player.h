#ifndef PLAYER_H
#define PLAYER_H

#include "vehicle.h"
#include <string>

class Player {
private:
    std::string name;
    std::string ipaddr;
    int healthStatus;
    Vehicle *vehicle;
public:
    Player();

    void print();
};

#endif // PLAYER_H
