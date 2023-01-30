#include <stdio.h>

int main(){
        
	char coma = ',';
	for (int i=0;i <= 10;i++){
		if(i==10){
		coma='.';
		} 
	   	printf("%d%c",i, coma);
	       
	}
}
