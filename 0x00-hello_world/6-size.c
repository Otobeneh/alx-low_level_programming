#include <stdio.h>

int main() {
    for (int num1 = 0; num1 <= 99; num1++) {
        for (int num2 = num1; num2 <= 99; num2++) {
            int tens1 = num1 / 10;
            int ones1 = num1 % 10;
            int tens2 = num2 / 10;
            int ones2 = num2 % 10;

            // Print tens digit of num1
            putchar('0' + tens1);

            // Print ones digit of num1
            putchar('0' + ones1);

            // Print space
            putchar(' ');

            // Print tens digit of num2
            putchar('0' + tens2);

            // Print ones digit of num2
            putchar('0' + ones2);

            // Print comma and space unless it's the last combination
            if (num1 != 99 || num2 != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    return 0;
}

