/*13) leer un entero y mostrar todos los multiplos de 5 comprendidos entre 1 y el numero leido*/
#include <stdio.h>
int main(){
	int x;
    printf("Ingrese un numero:\n");
	scanf("%d",&x);
	for(int i=0; i<=x; i+=5){
		printf("%d ",i);
	}
	return 0;	
}
