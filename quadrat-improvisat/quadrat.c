#include <stdio.h>

 int  main(){
        
       int llarg;

       printf("Quant medeix el quadrat? ");
       scanf("%d", &llarg);       

	 for (int i = 0; i < llarg; i++) {
	    for (int j = 0; j < llarg; j++) {
	       if (i == 0 || i == llarg - 1 || j == 0 ||  j == llarg - 1 )
	          printf("o");
	        else
		  printf(" ");
	    }
	     printf("\n"); 
         }
	 return 0;
 }
