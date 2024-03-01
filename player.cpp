#include "player.h"
#include <string>
#include <iostream>

using namespace std;

Player::Player() {
    name = "Andrasi Gabor";
    ipaddr = "127.0.0.1";
    healthStatus = 10;
    vehicle = new Vehicle();
}

void Player::print() {
    cout << "Nev: " << name << endl;
    cout << "Ip: " << ipaddr << endl;
    cout << "HP: " << healthStatus << endl;
    cout << "Vehicle: " << vehicle->getModelId() << endl;
}
