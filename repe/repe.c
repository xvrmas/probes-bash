
#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, j, num;

    for (i = 1; i <= 978; i++) {
        bool is_unique = true;
        num = i;
        while (num > 0) {
            int digit = num % 10;
            for (j = i; j >= 1; j /= 10) {
                if (digit == j % 10 && j != i) {
                    is_unique = false;
                    break;
                }
            }
            num /= 10;
        }
        if (is_unique) {
            printf("%d\n", i);
        }
    }

    return 0;
}
