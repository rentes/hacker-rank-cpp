//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
    deque<int> mydeque;
    int greatest = 0;
    int pop = 0;

    for (int i = 0; i < n;) {
        mydeque.push_back(arr[i]);
        int value_back = mydeque.back();
        if (value_back > greatest)
            greatest = value_back;
        mydeque.pop_back();
        pop++;
        if (pop % k == 0) {
            cout << greatest << " ";
            greatest = 0;
            i=i-k+2;
            pop = 0;
        }
        else i++;
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