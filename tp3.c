#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Tire un nombre au hasard entre 0 et max inclus.
 *
 * Exemple : draw_secret_number(10) peut renvoyer 0, 3, 10, ...
 */
int draw_secret_number(int max) {
    // TODO
    // Indice : rand() renvoie un grand nombre au hasard.
    //          Comment le ramener entre 0 et max ?
    return 0;
}

/*
 * Vérifie qu'une proposition est bien entre 0 et max inclus.
 * Renvoie 1 si elle est valide, 0 sinon.
 *
 * Exemple : is_valid_guess(5, 10)  -> 1
 *           is_valid_guess(-1, 10) -> 0
 *           is_valid_guess(11, 10) -> 0
 */
bool is_valid_guess(int guess, int max) {
    // TODO
    return false;
}

/*
 * Joue une partie complète avec un nombre secret entre 0 et max.
 * Affiche les réponses et, à la fin, le nombre de coups.
 */
void play_one_game(int max) {
    // TODO :
    //   - tirer le nombre secret
    //   - boucler jusqu'à ce qu'il soit trouvé
    //   - ignorer les propositions hors bornes, sans les compter
    //   - afficher le nombre de coups à la fin
}

#ifndef TP3_TEST
int main(void) {

    int max;
	// TODO :
	// - demander le nombre maximum 

    play_one_game(max);

    return EXIT_SUCCESS;
}
#endif
