#ifndef PLANTE_H
#define PLANTE_H

#include <string>

class Plante{

    protected:
    bool fertilized;
    int hydratation;
    int health;
    
    
    std::string nameSpecies;
    

    public:
    int growing;
    int grown;
    
    Plante(std::string _nameSpecies, int _grown);
    void grow();
    void fertilize();
    void cut();
    void water();
    void look();
    void virtual need() {};
    int virtual getValue() {return 0;};
    
};

#endif