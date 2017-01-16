//
// Created by Miguel Rentes on 11/01/2017.
//

#include "introduction.h"

using namespace std;

int main(void) {
    unsigned int n, q, index_size, a, b;

    cin >> n >> q;

    unsigned int* array[n]; // array with n pointers to the array indexes
    unsigned int* array_indexes = nullptr;

    for (int i = 0; i < n; i++) {
        cin >> index_size;

        array_indexes = new unsigned int[(const int) index_size];

        for (int j = 0; j < index_size; j++) {
            cin >> array_indexes[j];
        }
        array[i] = array_indexes;
    }

    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << array[a][b] << endl;
    }

    return EXIT_SUCCESS;
}
