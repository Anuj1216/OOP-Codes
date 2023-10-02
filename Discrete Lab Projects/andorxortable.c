#include <stdio.h>

int andOperation(int a, int b) {
    return a && b;
}

int orOperation(int a, int b) {
    return a || b;
}

int xorOperation(int a, int b) {
    return a != b;
}

int nandOperation(int a, int b) {
    return !(a && b);
}

void generateTable() {
    printf("a  |  b  |  AND  |  OR  |  XOR  |  NAND\n");
    printf("-------------------------------------\n");
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            printf("%d  |  %d  |   %d   |   %d  |   %d   |   %d\n", 
                   a, b, andOperation(a, b), orOperation(a, b), xorOperation(a, b), nandOperation(a, b));
        }
    }
}

int main() {
    generateTable();

    return 0;
}
