#include <stdio.h>

int main()

{
    float principal, time, rate, simple_interest;

    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the time in years (T): ");
    scanf("%f", &time);

    printf("Enter the rate of interest (R): ");
    scanf("%f", &rate);

    simple_interest = (principal * time * rate) / 100;

    printf("The Simple Interest is: %.2f\n", simple_interest);

}
