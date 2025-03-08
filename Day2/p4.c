#include <stdio.h>

int main() {
    int inputNumber, smallest = 9, secondSmallest = 9, temp;

    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    temp = inputNumber;

    while (temp > 0) {
        int digit = temp % 10;

        if (digit < smallest) {
            secondSmallest = smallest;
            smallest = digit;
        } else if (digit > smallest && digit < secondSmallest) {
            secondSmallest = digit;
        }

        temp /= 10;
    }

    if (secondSmallest == 9 && smallest != 9)
        printf("No second smallest digit found.\n");
    else
        printf("Second smallest digit: %d\n", secondSmallest);

    return 0;
}
