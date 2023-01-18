#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secret = rand() % 1000 + 1; printf("%d", secret);
    int guess;
    int win = 0;
    int tries = 0;

    printf("I generated a random number between 1 and 1000 for no reason.\nNow I can waste your time because you have to guess it.\n");
    while (win == 0) {
        tries++;
        printf(">");
        scanf("%d", &guess);
        if (guess == secret) {
            if (tries == 1) {
                printf("Lucky asshole got it at once :skull:\n");
            } else if (tries < 10) {
                printf("Just %d tries, that's pretty good.\n", tries);
            } else if (tries < 50) {
                printf("You win!\nYou got it in %d tries.\n", tries);
            } else if (tries > 50) {
                printf("Took bro %d tries to get it done :skull:\n", tries);
            } else {
                printf("dinhgoisgioriabgirae0gbreiogbweogbigbir08r438r89hg9erg8bgbreoiggb");
            }
            win = 1;
        } else if (guess < secret) {
            printf("Too low\n");
        } else if (guess > secret) {
            printf("Too high\n");
        }
    }
    return 0;
}