#ifndef _COADAH_
#define _COADAH_
#include "displayer.h"
#define true (1)
#define false (0)

typedef unsigned char boolean;

/*definire tip referin�� la un nod al cozii*/
typedef struct tip_nod * tip_referinta_nod;

/*definire tip nod al cozii*/
typedef struct tip_nod {
  ref element;
  tip_referinta_nod urm;
}
tip_nod;

/* Definirea structurii de date tip_coada*/
typedef struct tip_coada {
  tip_referinta_nod inceput, spate;
}
tip_coada;

void initializeaza(tip_coada * c);
/*creaza coada vida c*/
boolean vid(tip_coada c);
/*returneaz� true dac� coada este vid�, false altfel*/
ref cap(tip_coada c);
/*returneaz� elementul din capul cozii, sau null dac� coada este vid�*/
void adauga(ref x, tip_coada * c);
/*adaug� un element la spatele cozii*/
void scoate(tip_coada * c);
/*suprim� primul element al cozii daca exist�*/

#endif // coada
