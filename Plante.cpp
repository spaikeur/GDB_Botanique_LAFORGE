#include "Plante.h"
#include <iostream>
#include <string>

using namespace std; 


// int hydratation; int health; int growing; string nameSpecies;

Plante::Plante(string _nameSpecies, int _grown) : nameSpecies(_nameSpecies), fertilized(false), hydratation(0), health(0), growing(0), grown(_grown) {}

void Plante::grow(){
    if(fertilized == 1){
        growing += 1;
    }

    if(health >=6){
        growing -=1;
    }else if(health >= 3){
        growing +=1;
    }else if (health >= 0 && health <3){
        growing +=2;
    }else{
        growing -=2;
    }

    if(hydratation >= 4){
        growing -= 1;
    }else if(hydratation >= 2){
        growing +=1;
    }else if (hydratation >= 0 && hydratation < 2){
        growing +=2;
    }else{
        growing -=2;
    }

    hydratation +=1;
    health +=1;
    fertilized = false;
}

void Plante::fertilize(){
    if(fertilized == true){
        cout << " Deja fertilisee " << endl;
    }else{
        fertilized = true;
    }
}

void Plante::cut(){
    health -= 3;
}

void Plante::water(){
    hydratation -= 2;
}

void Plante::look(){
    if(fertilized == true){
        cout << " La plante est fertilisee " << endl;
    }

    if(health >= 3){
        cout << " La plante à besoin d'être taillee " << endl;
    }else if (health >= 0 && health <3){
        cout << " La plante est correctement taillee " << endl;
    }else{
        cout << " La plante est trop taillee " << endl;
    }

    if(hydratation >= 2){
        cout << " La plante à besoin d'être arrosee " << endl;
    }else if (hydratation >= 0 && hydratation < 2){
        cout << " La plante est correctement arrosee " << endl;
    }else{
        cout << " La plante est trop arrosee " << endl;
       
    };

    cout << "L'etat actuelle de la plante est de :  " << growing << "/" << grown << endl;

}
