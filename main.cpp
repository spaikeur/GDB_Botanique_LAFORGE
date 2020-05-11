#include <iostream>
#include <vector>
#include <string>

#include "Plante.cpp"
#include "Botaniste.cpp"
#include "Fleur.cpp"

using namespace std;

int main()
{
    Botaniste* botaniste = new Botaniste();
    int choice = 0;
    int choiceB = 0;
    
    while(true){
        cout << "Argent : " << botaniste -> money << endl;
        cout << " Boutique [1] | Plantation [2] | Dormir [3]" << endl;
        cin >>  choice;
        switch (choice)
        {
        case 1:
            cout << " Acheter [1] | Vendre [2] | Partir [3]" << endl;
            cin >>  choiceB;
            if(choiceB == 1){
                botaniste -> buy();
            }else if(choiceB == 2){
                botaniste -> sell();
            }else if(choiceB == 3){
                cout << "Vous quittez le magasin" << endl;
            }else {
                cout << "Choix inacceptable" << endl;
                cin >>  choiceB;
            }
        break;
        case 2:
            botaniste -> takeCare();
        break;
        case 3:
            botaniste -> sleep();
        break;
        default:
        choice = 0;
        break;
        }; 
        
    }
}