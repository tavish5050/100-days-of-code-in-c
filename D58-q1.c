/*Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. */

#include <stdio.h>

int main() {
    int n, nums[1000], answer[1000];
    int i, prefix = 1, suffix = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    for (i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (i = 0; i < n; i++) {
        if (i > 0)
            printf(",");
        printf("%d", answer[i]);
    }

    return 0;
}
