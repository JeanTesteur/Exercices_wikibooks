#include <iostream>
#include "Liste_Exercices.h"
using namespace std;

int main()
{   /*
    Un programme pour se familiariser avec la syntaxe.
    Les exos proviennent de ce site :
    https://fr.wikibooks.org/wiki/Exercices_en_langage_C%2B%2B/Notions_de_base
    */

    cout << "Un petit programme de manipulation pour debuter." << endl;
    cout << endl;
    cout << "Il y a actuellement " << Liste_Exercices::NOMBRE_EXO << " exercices." << endl;
    int num_exo;

    do
    {
        cout << endl;
        cout << "Donnez un numero d'exercice valide pour executer le programme correspondant." << endl << "Donnez un numero invalide pour quitter le programme." << endl;
        cin >> num_exo;
        Liste_Exercices::executer_Exo(num_exo);
        cout << endl;
    } while (num_exo<=Liste_Exercices::NOMBRE_EXO && num_exo>0);
    return 0;
}
