/*Find the digit that occurs the most times in an integer number. */
#include <stdio.h> 
int main() 
{ 
    long long n; 
    int digit, count[10] = {0}; 
    int i, max = 0, result = 0; 
    printf("Enter an integer: "); 
    scanf("%lld", &n); 
    if(n < 0) 
    n = -n; 
     
    while(n > 0) 
    { 
        digit = n % 10; 
        count[digit]++; 
        n = n / 10; 
    } 
     
    for(i = 0; i < 10; i++) 
    { 
        if(count[i] > max) 
        { 
            max = count[i]; 
            result = i; 
        } 
    } 
    printf("Digit occurring the most times = %d\n", result); 
    printf("Frequency = %d\n", max); 
    return 0; 
}