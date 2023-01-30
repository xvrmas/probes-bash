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
    write(1, getLetter(dni), 1);
    return 0;
}
