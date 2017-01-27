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
        printf("0x%x\n", (int) A);
        // pretty printing B
        cout << fixed << setfill('_') << right << showpos << setprecision(2) <<  B << endl;
        // pretty printing C
        cout << scientific << noshowpos << setprecision(9) << C << endl;
    }

    return EXIT_SUCCESS;
}

