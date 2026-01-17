#include <stdio.h>

int main() {
    int i;

   // FOR LOOP 
    printf("For Loop Output:\n");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // WHILE LOOP
    printf("\n\nWhile Loop Output:\n");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    // DO-WHILE LOOP 
    printf("\n\nDo-While Loop Output:\n");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
