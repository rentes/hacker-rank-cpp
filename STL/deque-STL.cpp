//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    /**
     * Sample input
     * 2
     * 5 2
     * 3 4 6 3 4
     * 7 4
     * 3 4 5 8 1 4 10
     * Sample output
     * 4 6 6 4
     * 8 8 8 10
     */
    std::deque<int> mydeque;
    int greatest = 0;
    int initial_index = 0;
    int index = 0;
    int iteration = 0;
    while (index + k <= n + 1 && iteration < k) {
        if (arr[index] > greatest)
            greatest = arr[index];
        if (iteration != k-1) {
            index++;
            iteration++;
        }
        else {
            mydeque.push_back(greatest);
            index = initial_index+1;
            initial_index++;
            greatest = 0;
            iteration = 0;
        }
    }
    while (mydeque.size() > 0) {
        cout << mydeque.front() << " ";
        mydeque.pop_front();
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