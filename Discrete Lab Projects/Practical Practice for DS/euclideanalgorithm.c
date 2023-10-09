#include <stdio.h>
int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }
    else
    {
        return gcd(b%a,a);
    }
}
int main()
{
    int a,b;
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &a,&b);
    printf("GCD(%d,%d) = %d", a, b, gcd(a,b));
    return 0;
}