#include <stdio.h>
int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr);
    int key;
    printf("Enter the number you want to search: ");
    scanf("%d", &key);
    int r = linearSearch(arr, n, key);
    if(r != -1)
    {
        printf("Element %d found at position %d", key, r + 1);
    }
    else{
        printf("Element %d not found in the array!", key);
    }
    return 0;
}