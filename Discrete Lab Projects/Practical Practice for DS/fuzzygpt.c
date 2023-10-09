#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of set: ");
    scanf("%d", &n);

    int setA[n], setB[n], result[n];

    printf("Enter the membership function for Set A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &setA[i]);
    }

    printf("Enter the membership function for Set B: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &setB[i]);
    }

    // Union Operation
    printf("Union of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++) {
        result[i] = setA[i] > setB[i] ? setA[i] : setB[i];
        printf("%.2d ", result[i]);
    }
    printf("\n");

    // Intersection Operation
    printf("Intersection of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++) {
        result[i] = setA[i] < setB[i] ? setA[i] : setB[i];
        printf("%.2d ", result[i]);
    }
    printf("\n");

    // Difference Operation
    printf("Difference of Fuzzy Sets: \n");
    for(int i = 0; i < n; i++) {
        result[i] = setA[i] > setB[i] ? setA[i] - setB[i] : 0;
        printf("%.2d ", result[i]);
    }
    printf("\n");

    return 0;
}
