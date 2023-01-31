#include <stdio.h>
#include <unistd.h>

char getLetter(int dni) {
    char letters[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int index = dni % 23;
    return letters[index];
}

int main() {
    int dni;
    printf("Entra tu numero de DNI: ");
    scanf("%d", &dni);
    printf("La letra de tu dni es: %c", getLetter(dni));
    return 0;
}
