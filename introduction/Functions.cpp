//
// Created by Miguel Rentes on 10/01/2017.
//

#include "introduction.h"

int max_of_four(int a, int b, int c, int d) {
    if (a > b) {
        if (a > c) {
            if (a > d) {
                return a;
            }
            else { // a <= d
                return d;
            }
        }
        else { // a <= c
            if (c > d) {
                return c;
            }
            else { // c <= d
                return d;
            }
        }
    }
    else { // a <= b
        if (b > c) {
            if (b > d) {
                return b;
            }
            else { // b <= d
                return d;
            }
        }
        else { // b <= c
            if (c > d) {
                return c;
            }
            else { // c <= d
                return d;
            }
        }
    }
}

int main(void) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return EXIT_SUCCESS;
}
