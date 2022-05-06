#ifndef __PILE
#define __PILE
#define MAX 20
typedef int objet_t;
typedef struct pile
{
  int sommet;
  int taille;
  objet_t pile[MAX];
} pile_t;

void empiler(pile_t *, objet_t);
int pileVide(pile_t *);
objet_t depiler(pile_t *);

#endif