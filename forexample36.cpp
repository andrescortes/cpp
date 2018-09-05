/*mostrar en pantalla la tabla de multiplicar del 5*/
#include <stdio.h>

main(){
	int x=5, total=0;
	for(int i=0; i<=10; i++){
		total=x*i;
		
		printf("%d * %d  =%d\n",x,i,total);
	}
	return 0;
}

