//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int greatest = 0, value = 0, index = 0, iteration = 0;
    // pushing all the greatest values on each k-elements to the front of the deque
    for (int i = 0; i < n; i++) {
        if (index < k) {
            value = arr[i];
            if (value > greatest)
                greatest = value;
            if (index == k - 1) {
                mydeque.push_front(greatest);
                greatest = 0;
                index = 0;
                iteration++;
                i = iteration-1;
            } else {
                index++;
            }
        }
    }
    // pop-ing the greatest values from the back of the deque
    while(mydeque.size() > 0) {
        printf("%d ", mydeque.back());
        mydeque.pop_back();
    }
    printf("\n");
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