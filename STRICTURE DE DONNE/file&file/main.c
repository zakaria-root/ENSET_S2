#include <stdio.h>
#include <stdlib.h>
#include "filePileManipilation.h"
#include <unistd.h>
int main(int argc, char const *argv[])
{
  int nbr;
  int valeur;
  int choix;
  int element;
  file_t f;
  pile_t p;

  // ---------------- DECLARATION --------------------------

  do
  {

    printf("\n1) faire l'implementation avec les piles .\n");
    printf("2) faire l'implementation avec les files .\n");
    printf("3) quiter .\n");
    printf("entrez votre choix ? ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
      system("clear");
      p.sommet = 0;
      do
      {
        printf("le nbr des elements a entrer : ");
        scanf("%d", &nbr);
      } while (nbr <= 0);
      p.taille = nbr;

      for (int i = 0; i < p.taille; i++)
        p.pile[i] = 0;

      for (int i = 0; i < nbr; i++)
      {
        printf("entez la valeur Numero %d: ", i + 1);
        scanf("%d", &valeur);
        empiler(&p, valeur);
      }

      for (int i = 0; i < p.taille; i++)
        printf("-->%d", depiler(&p));
      break;
    case 2:
      system("clear");
      f.queue = 0;
      f.tete = 0;
      do
      {
        printf("le nbr des elements a entrer : ");
        scanf("%d", &nbr);
      } while (nbr <= 0);
      f.taille = nbr;

      for (int i = 0; i < f.taille; i++)
        f.file[i] = 0;

      for (int i = 0; i < nbr; i++)
      {
        printf("entez la valeur Numero %d: ", i + 1);
        scanf("%d", &valeur);
        enfiler(&f, valeur);
      }

      for (int i = 0; i < f.taille; i++)
        printf("-->%d", defiler(&f));
      break;
    case 3:
      printf("merci....");
      return 0;
      break;
    default:
      printf("vore saisie est erronee ...\n");
      break;
    }
  } while (1);

  // ---------------- TRAITEMENT --------------------------

  return 0;
}
