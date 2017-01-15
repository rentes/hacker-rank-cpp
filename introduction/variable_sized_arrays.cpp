//
// Created by Miguel Rentes on 11/01/2017.
//

#include "introduction.h"

using namespace std;

int main(void) {
    unsigned int n, q;
    string line;

    getline(cin, line);
    n = (unsigned int) stoi(line.substr(0, 1));
    q = (unsigned int) stoi(line.substr(2, 1));

    unsigned int* array[n]; // array with n pointers to the array indexes
    unsigned int queries[n*q]; // array with all queries
    unsigned int* array_indexes = nullptr;

    for (int i = 0; i < n; i++) {
        std::getline(cin, line);

        unsigned int index_size = (unsigned int) stoi(line.substr(0, 1));
        array_indexes = (unsigned int*) calloc(1, index_size);

        for (int j = 0; j < index_size; j++) {
            array_indexes[j] = (unsigned int) stoi(line.substr(2*(j+1), 1));
        }
        array[i] = array_indexes;
    }

    for (int i = 0; i < q; i++) {
        std::getline(cin, line);
        queries[2*i] = (unsigned int) stoi(line.substr(0, 1));
        queries[2*i+1] = (unsigned int) stoi(line.substr(2, 1));
    }

    for (int i = 0; i < q; i++) {
        cout << array[queries[2*i]][queries[2*i+1]] << endl;
    }

    return EXIT_SUCCESS;
}
