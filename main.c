#include"calcul.h"
#include<stdio.h>

void tache(void)
{
    int a, b;
    int choice = 0;
    do
    {
        menu();
        printf("\nFaites votre choix: ");
        scanf("%d", &choice);
   

        switch(choice)
        {
            case 1:
                a = saisie_a();
                b = saisie_b();
                printf("Le resultat est %d ", addition(a,b)); saut();
                break;

            case 2:
                a = saisie_a();
                b = saisie_b();
                printf("Le resultat est %d ",soustraction(a,b)); saut();
                break;

            case 3:
                a = saisie_a();
                b = saisie_b();
                printf("Le resultat est %d ",multiplication(a,b)); saut();
                break;

            case 4:
                a = saisie_a();
                b = saisie_b();
                printf("Le resultat est %d ", division(a,b)); saut();
                break;
            
            case 5:
                break;

            default:
                printf("Ooops Choix incorrect");
                break;
        }
    }while(choice != 5);
}

int main(void)
{
    tache();
    return 0;
}