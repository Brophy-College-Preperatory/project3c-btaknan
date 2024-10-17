#include <stdio.h>

//Build project 3 here:
// Branson Taknan, my partner was Quincy

int main(void){
    double cookiemonster = 0;
    double raspberry = 0;
    double matcha = 0;
    double mango = 0;
    double total = 0;

    char flavor;
    char flavor2;

    do {
        printf("\nwhat is the best flavor: \na. cookiemonster \nb. raspberry \nc. matcha \nd. mango");
        printf("\nvote as a. b. c. or d.");
        scanf(" %c", &flavor);
        total += 1;

        if (flavor == 'a') {
            cookiemonster += 1;
            printf("\n you voted for cookiemonster");
        } else if (flavor == 'b') {
            raspberry += 1;
            printf("\n you voted for raspberry");
        } else if (flavor == 'c') {
            matcha += 1;
            printf("\n you voted for matcha");
        } else if (flavor == 'd') {
            mango += 1;
            printf("\n you voted for mango");
        } else {
            printf("you have to vote using a valid letter.");
            total -= 1;
        }

        printf("\nWould you like to vote again? y/n: ");
        scanf(" %c", &flavor2);
    } while (flavor2 == 'y');

    double cookiemonsterpercent = (cookiemonster / total) * 100;
    double raspberrypercent = (raspberry / total) * 100;
    double matchapercent = (matcha / total) * 100;
    double mangopercent = (mango / total) * 100;

    printf("cookiemonster has %.0f percent of votes\n", cookiemonsterpercent);
    printf("raspberry has %.0f percent of votes\n", raspberrypercent);
    printf("matcha has %.0f percent of votes\n", matchapercent);
    printf("mango has %.0f percent of votes\n", mangopercent);

    return 0;
}
