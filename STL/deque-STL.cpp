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