#ifndef __FILE
#define __FILE
#define MAX 20
typedef int objet_t;
typedef struct file
{
  int queue;
  int tete;
  int taille;
  objet_t file[MAX];
} file_t;

void enfiler(file_t *, objet_t);
int fileVide(file_t *);
objet_t defiler(file_t *);

#endif