#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define WIDTH 40
#define HEIGHT 20

printf("Merry Christmas from Ayane Senpai!\n");
void printStars() {
    int i, j;
    for(i = 0; i < HEIGHT; i++) {
        for(j = 0; j < WIDTH; j++) {
            if(rand() % 100 < 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void printTree(int n) {
    int i, j;
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            if(rand() % 100 < 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        for(j = 1; j <= (2*i-1); j++) {
            printf("❄");
        }
        for(j = i; j < n; j++) {
            if(rand() % 100 < 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 1; i <= n/2; i++) {
        for(j = 1; j < n; j++) {
            if(rand() % 100 < 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("|");
        for(j = 1; j < n; j++) {
            if(rand() % 100 < 5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    srand(time(NULL));
    while(1) {
        printTree(10);
        usleep(200000);
        printf("\033[H\033[J");
    }
    return 0;
}