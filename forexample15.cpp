/*15) escribir en pantalla el resultado de sumar los primeros 20 multiplos de 3*/
#include <stdio.h>
int main(){
	int x, result=0, total;
	for(int i=0; i<=20; i+=3){
	result+=i;
}
printf("La suma de los multiplos de 3 es: %d ",result);
return 0;
}
	
	
	
