//
// Created by Miguel Rentes on 09/01/2017.
//

#include "introduction.h"

int main(void) {
    unsigned int number1;
    scanf("%d", &number1);
    if (number1 >= 1 && number1 <= 9) {
        switch (number1) {
            case 1: printf("one"); break;
            case 2: printf("two"); break;
            case 3: printf("three"); break;
            case 4: printf("four"); break;
            case 5: printf("five"); break;
            case 6: printf("six"); break;
            case 7: printf("seven"); break;
            case 8: printf("eight"); break;
            case 9: printf("nine"); break;
            default: break;
        }
    }
    else if (number1 > 9) {
        printf("Greater than 9");
    }
    return EXIT_SUCCESS;
}