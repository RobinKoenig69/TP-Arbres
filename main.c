#include <stdio.h>
#include "arb.h"


int main() {
    NOEUD * abr = NULL;

    ajouterNoeud(&abr, 50, "tutu");                 //Noeud 1
    ajouterNoeud(&abr, 60, "titi");
    ajouterNoeud(&abr, 70, "tata");
    ajouterNoeud(&abr, 55, "toto");                 //Noeud 4
    afficherInfixe(abr);

    free(abr);


    return 0;
}
