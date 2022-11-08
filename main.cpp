#include "figura.h"
#include "kolo.h"
#include "kwadrat.h"

#include <iostream>

using namespace std;

void id(figure& f)
{
    f.id();
}

int main()
{
    figure *ptab[3];

    ptab[0] = new kolo(5);
    ptab[1] = new kwadrat(6);
    ptab[2] = new kolo();

    for(int i=0; i<3; ++i)
    {
        id(*ptab[i]);
        ptab[i]->id();
    }

    delete ptab[0];
    delete ptab[1];
    delete ptab[2];
}