#include <stdio.h>
#include <string.h>

#define NUM_ANIMALS 3
#define MAX_LENGTH 100
int main() {
    char wild_animals[NUM_ANIMALS][MAX_LENGTH];
    char domestic_animals[NUM_ANIMALS][MAX_LENGTH];
    char result[NUM_ANIMALS * MAX_LENGTH ] = "";


    printf("Enter %d wild animals:\n", NUM_ANIMALS);
    for (int i = 0; i < NUM_ANIMALS; i++) {
        printf("Wild animal %d: ", i + 1);
        scanf("%s", wild_animals[i]);
    }


    printf("Enter %d domestic animals:\n", NUM_ANIMALS);
    for (int i = 0; i < NUM_ANIMALS; i++) {
        printf("Domestic animal %d: ", i + 1);
        scanf("%s", domestic_animals[i]);
    }


    for (int i = 0; i < NUM_ANIMALS; i++) {
        strcat(result, wild_animals[i]);
        strcat(result, " ");
        strcat(result, domestic_animals[i]);
        strcat(result, " ");
    }


    printf("Merged result: %s\n", result);

    return 0;
}
