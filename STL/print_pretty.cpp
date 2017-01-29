//
// Created by Miguel Rentes on 23/01/2017.
//

#include "STL.h"

int main(void) {
    int T; cin >> T;
    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;
    while(T--) {
        double A;
        cin >> A;
        double B;
        cin >> B;
        double C;
        cin >> C;
        // pretty printing A
        cout.unsetf(ios::uppercase);
        cout << left << hex << showbase << (long) A << endl;
        cout << setiosflags(ios::uppercase);
        // pretty printing B
        cout << fixed << setfill('_') << setw(0xf) << right << showpos << noshowbase << setprecision(2) << B << endl;
        // pretty printing C
        cout << scientific << noshowpos << noshowbase << setprecision(9) << C << endl;
    }

    return EXIT_SUCCESS;
}

