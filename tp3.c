#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
 * Tire un nombre au hasard entre 0 et max inclus.
 *
 * Exemple : draw_secret_number(10) peut renvoyer 0, 3, 10, ...
 */
int draw_secret_number(int max)
{
    // TODO
    // Indice : rand() renvoie un grand nombre au hasard.
    //          Comment le ramener entre 0 et max ?

    return rand() % (max + 1);
}

/*
 * Vérifie qu'une proposition est bien entre 0 et max inclus.
 * Renvoie 1 si elle est valide, 0 sinon.
 *
 * Exemple : is_valid_guess(5, 10)  -> 1
 *           is_valid_guess(-1, 10) -> 0
 *           is_valid_guess(11, 10) -> 0
 */
bool is_valid_guess(int guess, int max)
{
    // TODO

    if (guess >= 0 && guess <= max)
    {
        return 1;
    }
    return 0;
}

/*
 * Joue une partie complète avec un nombre secret entre 0 et max.
 * Affiche les réponses et, à la fin, le nombre de coups.
 */
void play_one_game(int max)
{
    // TODO :
    //   - tirer le nombre secret
    //   - boucler jusqu'à ce qu'il soit trouvé
    //   - ignorer les propositions hors bornes, sans les compter
    //   - afficher le nombre de coups à la fin
    int guess;
    int compteur = 0;
    int nombre_secret = draw_secret_number(max);

    while (guess != nombre_secret)
    {
        printf("0 ile %d arasında bir sayı girin :", max);
        scanf("%d", &guess);

        if (is_valid_guess(guess, max))
        {
            compteur++;
            if(guess < nombre_secret)
            {
                printf("trop petit : \n");
            }
            else if(guess > nombre_secret)
            {
                printf("trop grand : ");
            }
        }
        else if(guess < 0)
        {
            printf("Le nombre doit être supérieur ou égal à 0.\n ");
        }
        else
        {
            printf("Le nombre doit être inférieur ou égal à 0.\n ");
        }
    }
    printf("trouvé en % d coups !\n", compteur);
}

#ifndef TP3_TEST
int main(void)
{
    srand(time(0));
    int max;
    // TODO :
    // - demander le nombre maximum
    printf("veuillez entrer un nombre maximum : ");
    scanf("%d", &max);
    while (max < 0)     
    {
        printf("Le maximum doit être supérieur ou égal à 0.\n");
        printf("Nombre maximum ? ");
        scanf("%d", &max);
    }
    play_one_game(max);

    return EXIT_SUCCESS;
}
#endif
