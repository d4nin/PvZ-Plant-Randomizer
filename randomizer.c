#include "randomizer.h"
#include "includes.h"

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void randomizePlants(char *plantArray[], int plantSize) {
    srand((unsigned int)time(NULL));

    for (int i = plantSize - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        swap(&plantArray[i], &plantArray[j]);
    }
}
