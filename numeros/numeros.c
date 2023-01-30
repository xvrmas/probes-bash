#include <stdio.h>
#include <unistd.h>
int main(){


	char lletra = 'a';

	while(lletra <= 'z')
	{
	   write(1, &lletra, 1);
	   lletra++;
	}
}
