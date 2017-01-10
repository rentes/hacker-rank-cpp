//
// Created by Miguel Rentes on 10/01/2017.
//

#include "introduction.h"

int main(void) {
    unsigned int array_size;
    cin >> array_size;
    int array[array_size];
    for(int a = 0; a < array_size; a++) {
        cin >> array[a];
    }
    for(int a = array_size-1; a >= 0; a--) {
        cout << array[a] << " ";
    }

    return EXIT_SUCCESS;
}
