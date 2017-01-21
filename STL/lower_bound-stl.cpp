//
// Created by Miguel Rentes on 19/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_elements;
    unsigned int number_queries;
    unsigned int element;
    bool present = false;
    unsigned int index;
    cin >> number_elements;
    vector <unsigned int> elements;
    for (int i = 0; i < number_elements; i++) {
        if (cin >> element) {
            elements.push_back(element);
        }
    }
    cin >> number_queries;
    std::vector<unsigned int>::iterator low;
    for (int i = 0; i < number_queries; i++) {
        cin >> element;
        for (int j = 0; j < number_elements && !present; j++) {
            if (elements.at(j) == element) {
                present = true;
                index = j;
            } else {
                low = lower_bound(elements.begin(), elements.end(), element);
            }
        }
        if (present) {
            cout << "Yes " << index+1 << endl;
        } else {
            cout << "No " << low - elements.begin()+1 << endl;
        }
        present = false;
    }

    return EXIT_SUCCESS;
}