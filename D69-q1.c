/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. */

#include <stdio.h>

int main() {
    int n, i, x;
    int arr[1000];
    int freq[10001] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        x = arr[i];

        if (freq[x] == 1) {
            printf("%d\n", x);
            return 0;
        }

        freq[x] = 1;
    }

    return 0;
}
