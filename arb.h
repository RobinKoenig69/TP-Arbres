#ifndef ARB_H

#define MAX 51
#include <malloc.h>
#include<string.h>

typedef struct N {
    int nb;
    char nom[MAX];
    struct N* sag, *sad;
}NOEUD;


void creerNoeud(NOEUD**a, int n, char* s){
    *a = malloc(sizeof (NOEUD));
    (*a)->nb = n;
    strcpy((*a)->nom, s);
    (*a)->sag=(*a)->sad=NULL;
}

void ajouterNoeud(NOEUD**a, int n, char* s){
    if (*a == NULL){
        creerNoeud(a, n, s);
    }
    else if (n>(*a)->nb){
        ajouterNoeud(&(*a)->sad, n, s);
    }
    else if (n<(*a)->nb){
        ajouterNoeud(&(*a)->sag, n, s);
    }
    else{
        printf("valeur déjà présente \n");
    }
}

void afficherInfixe(NOEUD* a){
    if(a != NULL){
        afficherInfixe(a->sag);
        printf("%d \n", a->nb);
        afficherInfixe(a->sad);
    }
}

void freearbre(NOEUD* a){
    if (a != NULL){
        freearbre(a->sag);
        free(a);
        freearbre(a->sad);
    }
}
#endif ARB_H