#include "listeTriTabl.h"
using namespace std;

/*void triRapide(int tableau[], int longueur)
{
    ;
}
*/

void triParInsertion(int tableau[], int longueur)
{
    for (int i=1; i<longueur; i++) //On suppose tableau[0]<=tableau[1]<=...<=tableau[i-1]
    {
        int aux_elementAplacer = tableau[i];
        int k;
        for(k=i; k>0 && tableau[k-1]>aux_elementAplacer; k--)
        {
            tableau[k]=tableau[k-1];
        }
        tableau[k]=aux_elementAplacer;
    }
}


/*
int[] triAbulles(int[]& tableau, int longueur)
{
    return [0];
}
*/
void triParSelection(int tableau[], int longueur)
{
    for (int i=0; i<longueur-1; i++)
    {
        int index_Minimum = i;
        for (int j = i; j < longueur; j++)
        {
            if (tableau[index_Minimum] > tableau[j])
            {
                index_Minimum = j;
            }
        }
        if (index_Minimum != i)
        {
            int aux = tableau[index_Minimum];
            tableau[index_Minimum] = tableau[i];
            tableau[i]=aux;
        }
    }
}
/*
int[] triFusion(int[]& tableau, int longueur)
{
    return [0];
}
*/
