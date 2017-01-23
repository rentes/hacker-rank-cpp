//
// Created by Miguel Rentes on 23/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_queries;
    unsigned int operation_type;
    unsigned int value;
    set<unsigned int> st;
    cin >> number_queries;
    for (int i = 0; i < number_queries; i++) {
        cin >> operation_type >> value;
        switch (operation_type) {
            case 1: {
                st.insert(value);
                break;
            }
            case 2: {
                st.erase(value);
                break;
            }
            case 3: {
                set<unsigned int>::iterator itr = st.find(value);
                if (itr != st.end()) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
            default: break;
        }
    }
    return EXIT_SUCCESS;
}
