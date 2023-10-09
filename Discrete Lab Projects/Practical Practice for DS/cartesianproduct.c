#include <stdio.h>
int main()
{
    int setA[10], setB[10], m, n;
    printf("Enter the number of elements in Set A: ");
    scanf("%d", &m);
    printf("Enter the elements for Set A:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &setA[i]);
    }
    printf("Enter the number of elements in Set B: ");
    scanf("%d", &n);
    printf("Enter the elements for Set B: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &setB[i]);
    }
    printf("The cartesian product of given sets is:");
    printf("\n");
    printf("{");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("(%d,%d)", setA[i],setB[j]);
            if(i != m - 1 || j != n - 1)
            {
                printf(" , ");
            }
        }        
    }
    printf("}");
    return 0;
}