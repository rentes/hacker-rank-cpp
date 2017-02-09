//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int greatest = 0;
    int value = 0;
    int index = 0;
    int iteration = 0;
    // pushing all values to the deque
    for (int i = 0; i < n; i++) {
        mydeque.push_front(arr[i]);
    }
    // pushing all the greatest values
    // on each k-elements
    // to the back of the deque
    for (int i = 0; i < n; ) {
        if (index < k) {
            value = mydeque[i];
            if (value > greatest)
                greatest = value;
            if (index == k - 1) {
                mydeque.push_back(greatest);
                greatest = 0;
                index = 0;
                iteration++;
                i = iteration;
            } else {
                index++;
                i++;
            }
        }
    }

    for (int i = 0; i < n-k+1; i++) {
        cout << mydeque.back() << " ";
        mydeque.pop_back();
    }
    cout << endl;

    // cleaning the deque
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