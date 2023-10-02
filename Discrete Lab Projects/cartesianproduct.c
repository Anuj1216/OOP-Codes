#include<stdio.h>
int main()
{
    int seta[10], setb[10], na, nb, i, j;
    printf("Enter the no. of elements in Set A: ");
    scanf("%d", &na);
    printf("Enter the elements for Set A: ");
    for(i = 0; i < na; i++)
    {
        scanf("%d", &seta[i]);
    }
    printf("Enter the no. of elements in Set B: ");
    scanf("%d", &nb);
    printf("Enter the elements for Set B: ");
    for(i = 0; i < na; i++)
    {
        scanf("%d", &setb[i]);
    }
    printf("{");
    for(i = 0; i < na; i++){
    	for(j = 0; j < nb; j++)
        {
    		printf("(%d,%d)",seta[i],setb[j]);
            if(i != na - 1 || j != nb - 1)
            {
                printf(", ");
            }
		}
	}
	printf("}");
    return 0;
}