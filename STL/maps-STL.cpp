//
// Created by Miguel Rentes on 23/01/2017.
//

#include "STL.h"

int main(void) {
    unsigned int number_queries;
    unsigned int operation_type;
    string key;
    unsigned int value = 0;
    map<string, unsigned int> m;
    cin >> number_queries;
    for (int i = 0; i < number_queries; i++) {
        cin >> operation_type;
        if (operation_type == 1) {
            cin >> key >> value;
        }
        else if (operation_type == 2 || operation_type == 3) {
            cin >> key;
        }
        switch (operation_type) {
            case 1: {
                map<string, unsigned int>::iterator itr = m.find(key);
                if (itr != m.end()) { // found value
                    itr->second += value;
                } else { // value not found
                    m.insert(make_pair(key, value));
                }
                break;
            }
            case 2: {
                m.erase(key);
                break;
            }
            case 3: {
                map<string, unsigned int>::iterator itr = m.find(key);
                if (itr != m.end()) { // found value
                    cout << itr->second << endl;
                } else { // value not found
                    cout << 0 << endl;
                }
                break;
            }
            default: break;
        }
    }
    return EXIT_SUCCESS;
}
