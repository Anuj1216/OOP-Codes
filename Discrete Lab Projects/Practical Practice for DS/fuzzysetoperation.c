#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of set: ");
    scanf("%d", &n);
    float setA[n], setB[n], result[n];
    printf("Enter the membership function for Set A: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &setA[i]);
    }
    printf("Enter the membership function for Set B: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &setB[i]);
    }
    //Union OPeration
    printf("Union of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++)
    {
        result[i] = setA[i] > setB[i] ? setA[i] : setB[i];
        printf("%.2f\t", result[i]);
    }
    //Intersection OPeration
    printf("\nIntersection of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++)
    {
        result[i] = setA[i] < setB[i] ? setA[i] : setB[i];
        printf("%.2f\t", result[i]);
    }
    //Difference OPeration
    printf("\nDifference of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++)
    {
        result[i] = setA[i] > setB[i] ? setA[i] - setB[i] : 0;
        printf("%.2f\t", result[i]);
    }
    return 0;
}