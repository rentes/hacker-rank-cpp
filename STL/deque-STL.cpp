//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    std::deque<int>::iterator it;
    int greatest = 0;
    int value = 0;
    int index = k;
    // for each group of k-elements:
    // push it to the deque
    // iterate over it and find the greatest value
    for (int i = 0; i < k; i++) {
        mydeque.push_front(arr[i]);
        value = mydeque.front();
        if (value > greatest)
            greatest = value;
    }
    cout << greatest << " ";
    // on the next iterations, push only one more value
    // and iterate again over the first k-elements on the deque
    while (index < n) {
        mydeque.push_front(arr[index++]);
        it = mydeque.begin();
        for (int i = 0; i < k; i++) {
            value = *it++;
            if (value > greatest)
                greatest = value;
        }
        cout << greatest << " ";
        greatest = 0;
    }

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