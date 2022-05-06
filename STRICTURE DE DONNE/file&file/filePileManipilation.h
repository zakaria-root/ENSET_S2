#include <stdio.h>
#include <stdlib.h>
#include "file.h"
#include "pile.h"

void empiler(pile_t *p, objet_t valeur)
{
  if (p->sommet == p->taille)
    printf("la pile est plain ...\n");
  else
    p->pile[p->sommet++] = valeur;
}

// -------------------- EMPILER UN ELEMENT -------------------------------------

int pileVide(pile_t *p)
{
  return p->sommet == 0;
}

// -------------------- LA PILE EST VIDE -------------------------------------

objet_t depiler(pile_t *p)
{
  if (!pileVide(p))
  {
    return p->pile[--p->sommet];
  }
}

// -------------------- DEPILER UN ELEMENT ------------------------------------
void enfiler(file_t *f, objet_t valeur)
{
  if (f->queue == f->taille)
    printf("la file est plen ...\n");
  else
    f->file[f->queue++] = valeur;
}

// -------------------- ENFILER UN ELEMENT -------------------------------------

int fileVide(file_t *f)
{
  return f->tete == f->queue;
}

// -------------------- LA FILE EST VIDE -------------------------------------

objet_t defiler(file_t *f)
{
  if (!fileVide(f))
    return f->file[f->tete++];
}

// -------------------- DEFILER UN ELEMENT ------------------------------------
