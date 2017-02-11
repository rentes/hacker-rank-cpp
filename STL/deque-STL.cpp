//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int greatest = 0;
    int value = 0;
    int index = 0;
    std::deque<int>::iterator it;
    for (int i = 0; i < n; i++) {
        mydeque.push_front(arr[i]);
    }
    for (int i = 0; i <= n-k; i++) {
        it = mydeque.begin();
        while (index < k) {
            value = *it;
            if (value > greatest)
                greatest = value;
            it++;
            index++;
        }
        mydeque.pop_front();
        mydeque.push_back(greatest);
        greatest = 0;
        index = 0;
    }
    for (int i = 0; i <= n-k; i++) {
        cout << mydeque.back() << " ";
        mydeque.pop_back();
    }
    cout << endl;
}

int main(void) {
    int t;
    cin >> t;
    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return EXIT_SUCCESS;
}