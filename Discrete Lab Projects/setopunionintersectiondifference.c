#include <stdio.h>
int main()
{
    int seta[10], setb[10], setc[20], na, nb, i, j;
    char ch;
    // Taking the number of data in set from user
    printf("Enter the number of elements in set A: ");
    scanf("%d", &na);
    printf("Enter the number of elements in set B: ");
    scanf("%d", &nb);
    // Taking the data of set from user
    for(i = 0; i < na; i++)
    {
        printf("Enter the elements of Set A: ");
        scanf("%d", &seta[i]);
    }
    for(i = 0; i < nb; i++)
    {
        printf("Enter the elements of Set B: ");
        scanf("%d", &setb[i]);
    }
    //Taking the choice from user for set operation
    printf("\nChoose one of these operations:\n");
    printf("a) Union \tb) Intersection \tc) Difference\n");
    scanf("%s", ch);
    switch(ch)
    {
        case 'a':
            while(i < na && j < nb)
            {
                if(seta[i] < setb[j])
                {
                    printf("%d", seta[i]);
                    i++;
                }
                else if(setb[j] < seta[i])
                {
                    printf("%d", setb[j]);
                    j++;
                }
                else if(seta[i] == setb[j])
                {
                    printf("%d", seta[i]);
                    i++;
                    printf("%d", setb[j]);
                    j++;
                }
            }
    }
}