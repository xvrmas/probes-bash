#include <stdio.h>

int main(){

	int numero, num;
	char signe;
	printf("Fins quant vols numerar? ");
	scanf("%d",&numero);
	for(num = 1;num <= numero; num++){
		if(num==numero){
			signe='.';
		}else signe=',';	
	printf("%d%c",num , signe);	
	};

}

