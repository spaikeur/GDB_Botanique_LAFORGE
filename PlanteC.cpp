#include "PlanteC.h"
#include <iostream>
#include <string>

using namespace std; 

PlanteC::PlanteC() : Plante("Plante Carnivore", 30){}

int PlanteC::getValue(){
    int value = 10;
    if(growing >= 50 && growing <= 60){
        return value*2;
    }else if(growing > 60){
        return value/10;
    }else{
        cout << " A ce stade, elle ne vaut rien ! " << endl;
        return 0;
    }
}

void PlanteC::need(){
    satisfed = 7;
}