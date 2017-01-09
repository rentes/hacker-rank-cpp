//
// Created by Miguel Rentes on 09/01/2017.
//

#include "introduction.h"

int main(void) {
    int i;
    long l;
    long long ll;
    char c;
    float f;
    double d;
    scanf("%d %ld %lld %c %f %lf", &i, &l, &ll, &c, &f, &d);
    printf("%d\n%ld\n%lld\n%c\n%.3f\n%.9lf", i, l, ll, c, f, d);
    return EXIT_SUCCESS;
}
