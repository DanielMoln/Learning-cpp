#include <iostream>
#include "panda.h"

using namespace std;

Panda::Panda() {}

Panda::Panda(std::string nnev, std::string norszag) {
    nev = nnev;
    orszag = norszag;
    eletkor = 0;
}

Panda::Panda(int neletkor, std::string norszag) {
    eletkor = neletkor;
    orszag = norszag;
    nev = (eletkor + " years old foundling from " + orszag);
}

void Panda::happyBirthday(int limitYear) {
    std::cout << "Panda neve: " << nev << std::endl;
    std::cout << "Panda eletkora: " << (eletkor+1) << std::endl;

    if (eletkor > limitYear) {
        std::cout << "Visszamegy Kinaba!" << std::endl;
    }
}
