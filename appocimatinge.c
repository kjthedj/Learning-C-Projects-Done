#include <stdio.h>
int main() {
    int n, i;
    double sum, sum_new;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    //this loop calculates the value of factorial
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else {
        sum = 1;
        for (i = 1; i <= n; i++) {
            fact *= i;

        }
    sum_new = sum + 1 / (float)fact;
        printf("Factorial of %d = %llu", n, fact);
        printf("\nThe natural log is %lf",sum_new);
    }

    //the next loop shall compute the value of e
    return 0;
}
