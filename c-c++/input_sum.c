#include<stdio.h>

int main () {
    int a, b, sum;

    printf("Enter an integer for a: ");
    scanf("%d", &a);
    printf("Enter another integer for b: ");
    scanf("%d", &b);

    sum = a + b;
    printf("\nSum of a and b is: %d\n", sum);

    return 0;
}
