//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    std::deque<int>::iterator it;
    int greatest = 0;
    int value = 0;
    // pushing all values to the deque
    for (int i = 0; i < n; i++) {
        mydeque.push_front(arr[i]);
    }
    // pushing all the greatest values
    // on each k-elements
    // to the back of the deque

    while (mydeque.size() > 0)
        mydeque.pop_front();
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