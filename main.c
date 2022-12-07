#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Menu principale\n");
    printf("1. Afficher un produit\n");
    printf("2. Ajouter un produit\n");
    printf("3. Supprimer un produit\n");
    printf("4. Quitter\n");
    printf("Votre choix : ");
    int choix;
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("Afficher un produit\n");
        break;
    case 2:
        printf("Ajouter un produit\n");
        break;
    case 3:
        printf("Supprimer un produit\n");
        break;
    case 4:
        printf("Quitter\n");
        break;
    default:
        printf("Choix invalide\n");
        break;
    }

    return 0;
}