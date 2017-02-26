//
// Created by Miguel Rentes on 30/01/2017.
//

#include "STL.h"

void printKMax(int arr[], int n, int k) {
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