#include <stdio.h>

int main() {
    int n,b, sum;

    // Asking the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &n, &b);

    // Calculating the sum
    sum = n+ b;

    // Displaying the result
    printf("Sum of %d and %d is: %d\n", n, b, sum);

    return 0;
}
