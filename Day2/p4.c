#include <stdio.h>

int main() {
    int inputNumber = 674783, smallest = 9, secondSmallest = 9, temp = inputNumber;

    for (; temp > 0; temp /= 10) {
        int digit = temp % 10;

        if (digit < smallest) {
            secondSmallest = smallest;
            smallest = digit;
        } else if (digit > smallest && digit < secondSmallest) {
            secondSmallest = digit;
        }
    }

    if (secondSmallest == 9 && smallest != 9)
        printf("No second smallest digit found.\n");
    else
        printf("Second smallest digit: %d\n", secondSmallest);

    return 0;
}
