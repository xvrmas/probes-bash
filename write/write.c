#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd = open("opentext.txt", O_WRONLY | O_CREAT,200 );
    char* variable = "Hola mundo sonoro:";
    write(fd, variable, sizeof(variable));
    close(fd);
    return 0;
}

/*#include <unistd.h>
#include <fcntl.h>

struct Persona {
    char nombre[20];
    int edad;
};*/
