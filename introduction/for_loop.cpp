//
// Created by Miguel Rentes on 10/01/2017.
//

#include "introduction.h"

int main(void) {
    unsigned int number1, number2;
    scanf("%d\n", &number1);
    scanf("%d", &number2);
    for (int i = number1; i <= number2; i++) {
        if (i >= 1 && i <= 9) {
            switch (i) {
                case 1: printf("one\n"); break;
                case 2: printf("two\n"); break;
                case 3: printf("three\n"); break;
                case 4: printf("four\n"); break;
                case 5: printf("five\n"); break;
                case 6: printf("six\n"); break;
                case 7: printf("seven\n"); break;
                case 8: printf("eight\n"); break;
                case 9: printf("nine\n"); break;
                default: break;
            }
        }
        else if (i > 9 && i % 2 == 0) {
            printf("even\n");
        }
        else if (i > 9 && i % 2 == 1) {
            printf("odd\n");
        }
    }
    return EXIT_SUCCESS;
}