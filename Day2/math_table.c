#include <stdio.h>

int main() {
    int inputNumber = 0;
    puts("Enter the number to print its Math table");
    scanf("%d", &inputNumber);

    for (int i = 1; i <= 20; i++) {
        printf("%d * %2d = %3d\n", inputNumber, i, inputNumber * i);
    }

    return 0;
}
