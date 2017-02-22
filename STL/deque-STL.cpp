//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int index = 0, iteration = 0, value = 0, greatest = 0;
    // pushing all the values on each k-elements to the front of the deque
    for (int i = 0; i < n; i++) {
        if (iteration == n-k+1)
            break;
        if (index < k) {
            mydeque.push_front(arr[i]);
            if (index == k - 1) {
                index = 0;
                iteration++;
                i = iteration-1;
            } else index++;
        }
    }
    index = 0;
    iteration = 0;
    // calculating the max value on each group of k-elements
    // and placing the max value on the back of the deque
    // and then print these values as they are the greatest found
    // ... to be continued
    for (int i= 0; i < n; i++) {
        if (iteration == n-k+1)
            break;
        if (index < k) {
            value = mydeque.front();
            mydeque.pop_front();
            if (value > greatest) {
                greatest = value;
            }
            if (index == k - 1) {
                mydeque.push_back(greatest);
                index = 0;
                greatest = 0;
                iteration++;
                i = iteration-1;
            } else index++;
        }
    }
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