#include <stdio.h>

int main(){

	int i, j, h;
	int cont =1;
	printf("Entra un numero: ");
	scanf("%d",&h);
	for(i =0; i<h;i++){
		for(j=0;j<h;j++){
		printf("*");
		};
		printf("\n");
		cont++;
	};

}

