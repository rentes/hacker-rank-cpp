//
// Created by Miguel Rentes on 08/03/17.
//

#include "strings.h"

int main() {
    string a, b;
    char swap;
    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    swap = a[0];
    a[0] = b[0];
    b[0] = swap;
    cout << a << " " << b << endl;

    return EXIT_SUCCESS;
}