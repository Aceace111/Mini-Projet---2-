#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char secret[] = "youcode";          // lkalima sirya
    char hidden[8] = "_______";         // noskha mkhfya
    int attempts = 5;                   // 3dad lmohawalat
    int length = strlen(secret);        // tol lkalima
    char guess;

    while (attempts > 0) {
        // kat3rad lkalimat lmakhfiya
        printf("\nMot: ");
        for (int i = 0; i < length; i++) {
            printf("%c ", hidden[i]);
        }

        // idkhal lharf
        printf("\nEntrez une lettre: ");
        scanf(" %c", &guess);

        // kath9a9 mn lharf
        bool found = false;
        for (int i = 0; i < length; i++) {
            if (secret[i] == guess && hidden[i] == '_') {
                hidden[i] = guess;
                found = true;
            }
        }

        // ta3amol m3a lkhatae wnajah
        if (!found) { // 0
            attempts--;
            printf(" Mauvais choix! Tentatives restantes: %d\n", attempts);
        } else {
            printf(" Bien joue!\n");
        }

        // chart lfazwz
        if (strcmp(secret, hidden) == 0) {
            printf("\n Felicitations! Vous avez trouve le mot: %s d\n", secret);
            return 0;
        }
    }

    // Game Over ba3d intihae lmohawalat
    printf("\n Game Over! Le mot etait: %s\n", secret);

    return 0;
}
