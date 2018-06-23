#ifndef LISTE_EXERCICES_H
#define LISTE_EXERCICES_H


class Liste_Exercices
{
    public:
        static const int NOMBRE_EXO;
        Liste_Exercices();
        virtual ~Liste_Exercices();
        static void executer_Exo(int n_exo);
        static void exercice_1(); // cout et endl basique
        static void exercice_2();//calcul de l'aire et du perimetre d'un rectangle
        static void exercice_3();//calcul de moyenne
    protected:

    private:
};

#endif // LISTE_EXERCICES_H
