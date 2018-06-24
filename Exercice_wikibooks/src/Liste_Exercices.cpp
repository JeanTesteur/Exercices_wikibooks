#include "Liste_Exercices.h"
#include <iostream>
#include "math.h"
#include "listeTriTabl.h"
#include <cstring>

using namespace std;

const int Liste_Exercices::NOMBRE_EXO = 7;

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

    case 4 :
        exercice_4();
        cout << endl;
        cout << "C'est fini pour l'exercice 4" << endl;
        break;

    case 5 :
        exercice_5();
        cout << endl;
        cout << "C'est fini pour l'exercice 5" << endl;
        break;

    case 6 :
        exercice_6();
        cout << endl;
        cout << "C'est fini pour l'exercice 6" << endl;
        break;

    case 7 :
        exercice_7();
        cout << endl;
        cout << "C'est fini pour l'exercice 7" << endl;
        break;

    default :
        cout << "Le numero n'est pas valide" << endl;
        break;
    }
}
/*
Le code des exos ci-dessous
*/
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

void Liste_Exercices::exercice_4()//echange de contenu entre deux variables
{
    cout << "Programme qui echange la valeur de deux variables. Le type double a ete choisi arbitrairement." << endl;
    cout << endl;

    double A;
    cout << "Nombre A : " << endl;
    cin >> A;
    cout << endl;

    double B;
    cout << "Nombre B : " << endl;
    cin >> B;
    cout << endl;

    cout << "A vaut " << A << " et B vaut " << B << "." << endl;
    cout << endl;
    cout << "Abracadabra." << endl;
    cout << endl;

    double aux = A;
    A=B;
    B=aux;
    cout << "A vaut " << A << " et B vaut " << B << "." << endl;
}

double Liste_Exercices::calcul_suite_RLO1_AnnexeExo5_FOR(double a,double b,double u_0, int n)//calcul iteratif
{
    double u_courrant = u_0;

    for (int i = 0; i<n; i++)
    {
        double aux = u_courrant;
        u_courrant *= a;
        u_courrant += b;
    }
    return u_courrant;
}

double Liste_Exercices::calcul_suite_RLO1_AnnexeExo5_FormuleDirecte(double a,double b,double u_0, int n)//calcul direct
{
    if (a==1)
    {
        return u_0 + n*b;
    }
    else
    {
        return pow(a,n)*(u_0 - b/(1-a)) + b/(1-a);
    }

}

void Liste_Exercices::exercice_5()//calcul du n_ème terme d'une suite arithmetico-geometrique
{
    cout << "Programme qui calcul le n_eme terme d'une suite arithmetico-geometrique reelle u." << endl;
    cout << "C'est a dire que u est est definie par u_0 sa valeur initiale, et la relation u_(n+1) = a.u_n + b" << endl;
    cout << endl;

    double u_0;
    double a;
    double b;
    int n;

    cout << "Donnez une valeur pour u_0 : " << endl;
    cin >> u_0;
    cout << endl;
    cout << "Donnez une valeur pour a : " << endl;
    cin >> a;
    cout << endl;
    cout << "Donnez une valeur pour b : " << endl;
    cin >> b;
    cout << endl;
    cout << "Indiquez la valeur de n pour laquelle vous souhaitez calculer u_n :" << endl;
    cin >> n;


    cout << "Nous calculons u_n par 3 methodes differentes, pour s'entrainer." << endl;
    cout << endl;
    cout << "Methode 1 : Calcul iteratif a partir de la relation de recurrence :" << endl;
    cout << "u_n vaut : " << Liste_Exercices::calcul_suite_RLO1_AnnexeExo5_FOR(a,b,u_0,n) << endl;
    cout << endl;
    cout << "Methode 2 : Calcul direct :" << endl;
    cout << "u_n vaut : " << Liste_Exercices::calcul_suite_RLO1_AnnexeExo5_FormuleDirecte(a,b,u_0,n) << endl;
    cout << endl;
}

void Liste_Exercices::exercice_6()//tri d'un tableau
{
    cout << "Programme qui trie votre tableau" << endl;
    cout << endl;
    cout << "Indiquez le nombre d'elements de votre tableau ?" << endl;

    int taille;
    cin >> taille;
    int tableau [taille];
    cout << endl;
    for (int i=0; i<taille; i++) //demande les valeurs du tableau
    {
        cout << "Valeur " << i+1 << " :" << endl;
        cin >> tableau[i];
        cout << endl;
    }

    cout << "Votre tableau est :" << endl;
    for (int i=0; i<taille; i++)
    {
        cout << tableau[i] << " ";
    }
    cout << endl;

    cout << "Choisissez votre mode de tri :" << endl;
    cout << "0 : Insertion" << endl;
    cout << "1 : Selection" << endl;
    int mode;
    cin >> mode;
    cout << endl;

    switch (mode) //choix du mode de tri
    {
    case 0 :
        triParInsertion(tableau,taille);
        cout << "Le tri par insertion donne :" << endl;
        break;

    case 1 :
        triParSelection(tableau,taille);
        cout << "Le tri par insertion donne :" << endl;
        break;

    default :
        cout << "Erreur de touche. Mais je vous trie quand meme votre tableau :" << endl;
        break;
    }
    for (int i=0; i<taille; i++)
    {
        cout << tableau[i] << " ";
    }
    cout << endl;
}

void Liste_Exercices::exercice_7()//teste si un mot est un palyndrome
{
    cout << "Programme qui teste si votre mot est un palyndrome." << endl;
    cout << endl;
    cout << "Donnez votre mot :" << endl;
    char t[100];
    cin >> t;
    cout << endl;

    int i = 0;
    int j = strlen(t)-1;
    bool palyndrome = true;
    while (palyndrome && i<j)
    {
        if(t[i]!=t[j])
        {
            palyndrome = false;
        }
        i++;
        j--;
    }

    if (palyndrome)
    {
        cout << "Le mot " << t << " est un palyndrome." << endl;
    }
    else
    {
        cout << "Le mot " << t << " n'est pas un palyndrome." << endl;
    }
}
