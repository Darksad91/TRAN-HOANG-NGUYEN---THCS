#include <stdio.h>
#include <math.h>

#define PI 3.14

int main() {
    float length, width;
    float perimeter, area, diagonal;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    area = length * width;
    diagonal = sqrt(length * length + width * width);

    printf("Perimeter: %.2f\n", perimeter);
    printf("Area: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    return 0;
}

