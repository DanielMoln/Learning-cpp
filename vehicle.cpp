#include "vehicle.h"
#include <string>

Vehicle::Vehicle() {
    color1 = 1;
    color2 = 2;
    chasisNumber = "BEA-012";
    modelId = 12;
}

std::string Vehicle::getChasisNumber() {
    return chasisNumber;
}

void Vehicle::setChasisNumber(std::string cn) {
    chasisNumber = cn;
}

int Vehicle::getColor1() {
    return color1;
}

int Vehicle::getColor2() {
    return color2;
}

int Vehicle::getModelId() {
    return modelId;
}
