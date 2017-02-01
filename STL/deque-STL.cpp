//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    // for each sub-array of k-elements from arr:
    // push the lesser element into the front of the deque
    // and the greater element into the back of the deque
    // then perform a comparison on the elements at the back of the deque
    // return the greatest element found for each sub-array of k-elements
    deque<int> mydeque;
    int start_index = 0;
    int end_index = k-1;
    while (end_index < n) {
        while (start_index <= end_index) {
            cout << arr[start_index] << " ";
            start_index++;
        }
        cout << endl;
        start_index = end_index;
        end_index++;
    }


//    2
//    5 2
//    3 4 6 3 4
//    7 4
//    3 4 5 8 1 4 10
//
//    4 6 6 4
//    8 8 8 10
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