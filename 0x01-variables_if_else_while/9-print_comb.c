#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j > 0) {
                putchar(',');
                putchar(' ');
            }
            putchar('0' + i);
            putchar('0' + j);
        }
    }
    
    putchar('\n');
    return 0;
}

