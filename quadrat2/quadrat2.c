
#include <stdio.h>

int main() {
    int k;
    printf("Ingrese el tamaño del cuadrado: ");
    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            if (i == 0 || i == k - 1 || j == 0 || j == k - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
