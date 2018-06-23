#include "Liste_Exercices.h"
#include <iostream>
using namespace std;

const int Liste_Exercices::NOMBRE_EXO = 3;

Liste_Exercices::Liste_Exercices()
{
    //ctor
}

Liste_Exercices::~Liste_Exercices()
{
    //dtor
}

void Liste_Exercices::executer_Exo(int n_exo)
{
    cout << endl;
    switch (n_exo)
    {
    case 1 :
        exercice_1();
        cout << endl;
        cout << "C'est fini pour l'exercice 1" << endl;
        break;

    case 2 :
        exercice_2();
        cout << endl;
        cout << "C'est fini pour l'exercice 2" << endl;
        break;

    case 3 :
        exercice_3();
        cout << endl;
        cout << "C'est fini pour l'exercice 3" << endl;
        break;

    default :
        cout << "Le numero n'est pas valide" << endl;
    }
}

void Liste_Exercices::exercice_1() //utilisation de base de cout et endl
{
    cout << "Hello word" << endl;
    cout << "Et saut de ligne" << endl;
}

void Liste_Exercices::exercice_2()//Calcule l'aire et le perimetre d'un rectangle
{
    cout << "Programme de calcul d'aire et de perimetre d'un rectangle" << endl;
    int longueur;
    int largeur;
    cout << endl;
    cout << "Donnez une valeur pour la longueur : " << endl;
    cin >> longueur;
    cout << "Donnez une valeur pour la largeur : " << endl;
    cin >> largeur;
    cout << endl;
    cout << "Perimetre : " << 2*(longueur+largeur) << endl;
    cout << "Aire : " << longueur*largeur << endl;
}

void Liste_Exercices::exercice_3()//Calcule la moyenne de n entiers
{
    cout << "Programme qui calcule la moyenne des valeurs que vous entrez." << endl;

    double moyenne = 0;
    double entier_courant;
    int compteur = 0;
    int mode_de_calcul;

    cout << endl;
    cout << "Connaissez vous le nombre de valeurs a moyenner ?" << endl;
    cout << "0 : Non" << endl;
    cout << "1 : Oui" << endl;
    cin >> mode_de_calcul;
    cout << endl;

    bool continuer = true;

    switch (mode_de_calcul)
    {
    case 0 :

        while (continuer)
        {
            cout << "Souhaitez-vous continuer ?" << endl;
            cout << "0 : Non" << endl;
            cout << "1 : Oui" << endl;
            cin >> continuer;
            if (continuer == true)
            {
                cout << endl;
                cout << "Rajoutez une valeur a la liste : " << endl;
                cin >> entier_courant;
                moyenne *= compteur;
                moyenne += entier_courant;
                compteur +=1;
                moyenne /= compteur;
                cout << endl;
                cout << "La moyenne vaut : " << moyenne << endl;
            }
            else
            {
                break;
            }
        }


        break;

    case 1 :

        cout << "Combien de valeurs avez-vous a moyenner ?" << endl;
        cin >> compteur;

        if (compteur)
        {
            for (int i=0; i<compteur; i++)
            {
                cout << "Valeur " << i+1 << ":" << endl;
                cin >> entier_courant;
                moyenne += entier_courant;
            }
            cout << endl;
            cout << "La moyenne vaut : " << moyenne/compteur;
        }

        else
        {
            cout << endl;
            cout << "Vous n'avez pas de valeurs a moyenner. Comme c'est triste." << endl;
        }

        break;

    default :

        cout << "Il y a un probleme quelque part. Fin du programme" << endl;
        break;


    }
}
