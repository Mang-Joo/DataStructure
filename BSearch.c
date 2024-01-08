#include "stdio.h"
//
// Created by 완주 on 1/8/24.
//

int BSearch(const int ar[], int len, int target) {

    int first = 0;
    int last = len - 1;
    int mid;

    while (first <= last) {
        mid = (first + last) / 2;
        if (target == ar[mid]) {
            return mid;
        } else {
            if (target < ar[mid]) {
                last = mid - 1;
            } else {
                first = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};

    int index = BSearch(arr, 6, 4);

    printf("index = %d\n", index);
    printf("value = %d", arr[index]);
}
