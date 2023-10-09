#include <stdio.h>
#include <math.h>
int main()
{
    float a;
    printf("Enter any float value to calculate its ceiling and floor value: ");
    scanf("%f", &a);
    printf("The floor value of %f is %.0f", a, floor(a));
    printf("\nThe ceiling value of %f is %.0f", a, ceil(a));
    return 0;
}