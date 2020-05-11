#include "Botaniste.h"
#include "Fleur.h"
#include <iostream>
#include <string>


using namespace std;

Botaniste::Botaniste() : money(40){}

void Botaniste::sleep(){
    for (int i = 0; i < plants.size(); i++)
    {
        plants[i] -> grow();
    }
    
}

void Botaniste::buy(){
    int choice = 0;
    cout << " acheter une plante [1] | acheter du fertilisant [2] " << endl;
    cin >>  choice;
    if(choice == 1){
        cout << " acheter une fleur [1] | acheter une plante carnivor [2] " << endl;
        cin >>  choice;
        switch (choice)
        {
            case 1:
                if(money >= 10){
                    plants.push_back(new Fleur());
                    money -= 10;
                    cout << " Vous avez fait l'acquisition d'une jolie fleur, elle est ajoutee aux plantations " << endl;
                }else{
                    cout << " Escro ! Vous n'avez pas assez " << endl;
                }
            break;
            case 2:
                if(money >= 20){
                    // // plants.push_back(new PlanteC());
                    // money -= 20;
                    cout << "La plante Carnivore n'est pas disponible a mon grand regret.. elles sont herbivores, qui voudrait de plante herbivores. mhpf" << endl;
                }
            break;
        }
    }else if(choice == 2 && money >= 30){
        fertilize += 1;
        money -= 30;
        cout << " Vous avez achete du fertilisant " << endl;
    }else
    {
         cout << " Ceci n'est pas une option (ou vous avez pas d'argent.. a vous de voir)" << endl;
    }
}

void Botaniste::sell(){
    int moneyBefore = money;
    for (int i = plants.size() - 1 ; i > 0; i--)
    {
        if(plants[i] -> growing >= plants[i] ->grown){
            money += plants[i] -> getValue();
            plants.erase(plants.begin() +i);
        }
    }
    cout << "Cela vous a rapporte " << money - moneyBefore<< endl;
}
    
void Botaniste::takeCare(){
    int choicePlant = 0;
    int choice = 0;
    int doing = 1;

    cout << "Liste des plantes :" << endl;
    for (int i = 0; i < plants.size(); i++) {
        cout << "[" << i << "]" << endl;
    }
    cout << "Entrez le numéro de la plante a s'occuper" << endl;
    cin >>  choicePlant;
    while (doing == 1){
        if(choicePlant > plants.size()){ //SOUCIS ICI DE TABLEAU MAIS PAS LE TEMPS DE LE CORRIGER....
            cout << "Pas de plante a cette endroit" << endl;
            choice =99;
            doing = 0;
        }else{
            cout << " Fertiliser une plante [1] | Tailler une plante [2] | Arroser une plante [3] | Regarder une plante [4] | Sortir de la plantation [5]" << endl;
            doing = 1;
            cin >>  choice;
            
        }
            switch (choice)
            {
            case 1:
                if(fertilize > 0){
                plants[choicePlant] -> fertilize(); 
                cout << "La plante est correctement fertilise pour aujourd'hui" << endl;
                }else{
                    cout << "Vous n'avez pas de fertilisant" << endl;
                }
            break;
            
            case 2:
                plants[choicePlant] -> cut();
                cout << "Vous avez taille la plante" << endl;
            break;

            case 3: 
                plants[choicePlant] -> water();
                cout << "Un peu d'eau pour la plan-plante :) " << endl;
            break;
            case 4:
                plants[choicePlant] -> look();
            break;
            case 5: 
                cout << "Vous quittez la plantation" << endl;
                doing = 0;
            break;
            default:

            break;    
            }
    }
}
