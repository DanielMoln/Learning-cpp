#include <iostream>
#include "pont.h"
#include "public-circle.h"
#include "circle.h"
#include "panda.h"
#include "player.h"

using namespace std;

int main()
{
    Pont p;
    p.mozgat(3, 4);
    p.tukroz(1, 2);
    Pont p2;
    p2.mozgatFellulir(5, 5, true);
    p.tukor(p2);
    p.tavolsag(p2);

    cout << "Public circle " << endl;

    PublicCircle pc;
    cout << "Kor terulete: " << pc.getArea() << endl;

    cout << "Circle: " << endl;
    Circle c;
    c.setR(4.5);
    c.setX(3);
    c.setY(2);
    cout << "Terulet: " << c.getArea() << endl;

    cout << "Panda: " << endl;

    Panda *panda = new Panda(13, "Magyarorszag");
    panda->happyBirthday(10);

    cout << "Player: " << endl;

    Player *player = new Player();
    player->print();

    return 0;
}
