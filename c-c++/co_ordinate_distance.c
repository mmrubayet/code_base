#include<stdio.h>
#include<math.h>

int main() {
    int x1, x2, y1, y2;
    float distance;
    printf("Enter a value for x1: ");
    scanf("%d", &x1);
    printf("Enter a value for y1: ");
    scanf("%d", &y1);
    printf("Enter a value for x2: ");
    scanf("%d", &x2);
    printf("Enter a value for y2: ");
    scanf("%d", &y2);

    printf("\nCalculating distance between A(%d, %d) and B(%d, %d): \n", x1, x2, y1, y2 );

    distance = sqrt(pow(fabs(x2 - x1), 2) + pow(fabs(y2 - y1), 2));

    printf("\nDistance: %f\n", distance);

    return 0;
}
