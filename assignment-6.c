#include <stdio.h>

int main()

{
    float kilometers, miles;

    printf("Enter length in kilometers: ");
    scanf("%f", &kilometers);

    miles = kilometers * 0.621371;

    printf("%.2f kilometers is equal to %.2f miles\n", kilometers, miles);

}
