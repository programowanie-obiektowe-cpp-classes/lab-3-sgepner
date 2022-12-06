#ifndef KOLO_H
#define KOLO_H

#include "figura.h"
#include <math.h>

class kolo : public figure{
    public:
    kolo() : kolo(0) {}
    kolo(double r) : promien(r) {pole = M_PI * promien * promien; }
    ~kolo() {cout << " delstruktor Kolo " << endl;}

    virtual void id()
    {
        cout << " Kolo o polu " << pole << endl;
    }

    private:
    double promien;
};

#endif