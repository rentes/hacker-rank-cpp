//
// Created by Miguel Rentes on 09/03/17.
//

#include "strings.h"


vector<int> parseInts(string str) {
    // Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}