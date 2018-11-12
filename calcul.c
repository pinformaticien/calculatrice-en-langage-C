#include"calcul.h"


void menu(void)
{
    printf("1.Addition\n2.Soustraction\n3.Multiplication\n4.Division\n5.Quitter le programme\n");
    printf("***********************");
}

int addition(int a, int b)
{
    return a + b;
}

int soustraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return (a / b);
}

int saisie_a(void)
{
    int a = 0;
    printf("Entrer un nombre: ");
    scanf("%d", &a);

    return a;
}

int saisie_b(void)
{
    int b = 1;
    printf("Entrer un nombre: ");
    scanf("%d", &b);

    return b;
}

void saut(void)
{
    printf("\n\n\n");
}