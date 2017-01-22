//
// Created by Miguel Rentes on 19/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_elements;
    unsigned int number_queries;
    unsigned int element;
    cin >> number_elements;
    vector <unsigned int> elements;
    for (int i = 0; i < number_elements; i++) {
        if (cin >> element) {
            elements.push_back(element);
        }
    }
    cin >> number_queries;
    std::vector<unsigned int>::iterator it;
    for (int i = 0; i < number_queries; i++) {
        cin >> element;
        it = find(elements.begin(), elements.end(), element);
        if (it != elements.end() || *it == element) {
            cout << "Yes " << it - elements.begin() + 1 << endl;
        }
        else {
            it = lower_bound(elements.begin(), elements.end(), element);
            cout << "No " << it - elements.begin() + 1 << endl;
        }
    }

    return EXIT_SUCCESS;
}