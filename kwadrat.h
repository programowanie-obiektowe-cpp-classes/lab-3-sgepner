#ifndef KWADRAT_H
#define KWADRAT_H

#include "figura.h"

class kwadrat : public figure{
    public:
    kwadrat() : kwadrat(0) {}
    kwadrat(double x) : dlugosc_boku(x) { pole = dlugosc_boku * dlugosc_boku ;}
    ~kwadrat() { cout << " Destruktor Kwadrat " << endl;}

    virtual void id()
    {
        cout << " Kwadrat o polu " << pole << endl;
    }

    private:
    double dlugosc_boku;
};

#endif