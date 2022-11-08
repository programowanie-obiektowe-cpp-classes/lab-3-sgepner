#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
using namespace std;

class figure{
    public:
    figure() : pole(0) {}
    figure(double p) : pole(p) {}
    virtual ~figure() {cout << " destruktor figure " << endl;}

    double get_pole(){return pole;}
    void set_pole(double p){pole = p;}

    void print()
    {
        cout << "Pole = " << pole << '\n';
    }

    virtual void id() = 0;
    // {
    //     cout << " Figura bazowa o polu " << pole << endl;
    // }

    protected:
    double pole;
};

#endif