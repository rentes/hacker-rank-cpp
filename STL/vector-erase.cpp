//
// Created by Miguel Rentes on 18/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_elements;
    unsigned int element, element_to_erase, element_to_erase_range_a, element_to_erase_range_b;
    cin >> number_elements;
    vector<unsigned int> elements;
    for(int i = 0; i < number_elements; i++) {
        if (cin >> element)
            elements.push_back(element);
    }

    cin >> element_to_erase;
    cin >> element_to_erase_range_a >> element_to_erase_range_b;
    elements.erase(elements.begin() + element_to_erase-1);
    elements.erase(elements.begin() + element_to_erase_range_a-1, elements.begin() + element_to_erase_range_b-1);

    cout << elements.size() << endl;
    for(int i = 0; i < elements.size(); i++) {
        cout << elements.at(i) << " ";
    }

    return EXIT_SUCCESS;
}