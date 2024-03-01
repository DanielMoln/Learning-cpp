#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    int modelId;
    std::string chasisNumber;
    int color1;
    int color2;
public:
    Vehicle();
    std::string getChasisNumber();
    int getModelId();
    int getColor1();
    int getColor2();
    void setChasisNumber(std::string cn);
};

#endif // VEHICLE_H
