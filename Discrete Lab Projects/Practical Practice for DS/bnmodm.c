#include <stdio.h>
#include <math.h>
int mod(int b, int n, int m)
{
    int r = fmod(pow(b , n), m);
    return r;
}
int main()
{
    int b, n, m;
    printf("Enter the values of b, n and m: ");
    scanf("%d%d%d", &b, &n, &m);
    int r = mod(b,n,m);
    printf("The result is: %d", r);
    return 0;
}