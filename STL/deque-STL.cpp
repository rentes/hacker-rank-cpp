//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    for (int i = 0; i < n; i++) {
        // clean the deque at the back if the array element is greater
        // than the ones currently on the deque
        for (; !mydeque.empty() && arr[i] > mydeque.back();)
            mydeque.pop_back();
        mydeque.push_back(arr[i]);
        // at another set of k-elements
        // pop out the elements if they are the same as the ones
        // previously read
        if (i >= k && mydeque.front() == arr[i-k])
            mydeque.pop_front();
        // at the end of the k-elements
        if (i >= k-1)
            printf (i < n-1 ? "%d " : "%d\n", mydeque.front());
    }
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