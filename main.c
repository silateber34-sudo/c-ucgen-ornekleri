#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");


    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");


    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        for(k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");


    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}


