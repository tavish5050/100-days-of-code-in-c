/*Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1. */

#include <stdio.h>

int main() {
    int n, arr[1000];
    int i, j, prev;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        prev = -1;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(",");

        printf("%d", prev);
    }

    return 0;
}
