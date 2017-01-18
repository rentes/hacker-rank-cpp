//
// Created by Miguel Rentes on 18/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_elements;
    unsigned int element;
    cin >> number_elements;
    vector<unsigned int> elements;
    for(int i = 0; i < number_elements; i++) {
        if (cin >> element)
        elements.push_back(element);
    }
    sort(elements.begin(), elements.end());
    for(int i = 0; i < number_elements; i++) {
        cout << elements.at(i) << " ";
    }

    return EXIT_SUCCESS;
}
