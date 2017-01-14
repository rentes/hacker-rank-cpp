//
// Created by Miguel Rentes on 11/01/2017.
//

#include "introduction.h"

int main(void) {
    unsigned int n, q;
    cin >> n >> q;
    string line;

    unsigned int* array[n]; // array with n pointers to the array indexes
    vector<string> array_indexes; // vector to hold the array indexes
    vector<string> queries; // vector to hold the queries

    if (cin.peek() == '\n')
        cin.ignore();

    for (int i = 0; i < n; i++) {
        std::getline(cin, line);
        istringstream iss(line);
        copy(istream_iterator<string>(iss),
             istream_iterator<string>(),
             back_inserter(array_indexes));
    }

    for (int i = 0; i < q; i++) {
        std::getline(cin, line);
        istringstream iss(line);
        copy(istream_iterator<string>(iss),
             istream_iterator<string>(),
             back_inserter(queries));
    }

    cout << "indexes: " << endl;
    for (std::vector<string>::const_iterator i = array_indexes.begin(); i != array_indexes.end(); ++i) {
        cout << *i << endl;
    }
    cout << "queries: " << endl;
    for (std::vector<string>::const_iterator i = queries.begin(); i != queries.end(); ++i) {
        cout << *i << endl;
    }

    return EXIT_SUCCESS;
}
