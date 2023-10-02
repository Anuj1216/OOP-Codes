//WAP to find ceiling and floor value.
#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    printf("Enter the float number: ");
    scanf("%f", &a);
    printf("The floor value of the given float is: %.2f", floor(a));
    printf("\nThe ceiling value of the given float is: %.2f", ceil(a));
    return 0;
}