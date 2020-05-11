#ifndef BOTANISTE_H
#define BOTANISTE_H

#include <string>
#include <vector>

#include "Plante.h"

class Botaniste{

    protected:
    std::vector <Plante*> plants;
    int fertilize;
    

    public:
    int money;
    Botaniste();
    void sleep();
    void buy();
    void sell();
    void takeCare();
    
};

#endif