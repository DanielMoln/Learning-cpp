#ifndef PANDA_H
#define PANDA_H

using namespace std;

class Panda {
private:
    std::string nev;
    int eletkor;
    std::string orszag;
public:
    Panda();
    Panda(std::string nev, std::string orszag);
    Panda(int eletkor, std::string orszag);
    void happyBirthday(int limitYear);
};

#endif // PANDA_H
