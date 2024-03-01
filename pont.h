#ifndef PONT_H
#define PONT_H

class Pont {
private:
    double _x, _y;

public:
    Pont();

    void mozgat(int dx, int dy);
    void tukroz(int cx, int cy);
    void tukor(Pont pont);
    void tavolsag(Pont pont);
    void mozgatFellulir(int dx, int dy, bool fellulir);
};

#endif PONT_H
