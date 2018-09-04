/*16) mostrar en pantalla el promedio entero de los n primeros multiplos de 3 para un numero n leido*/
#include <stdio.h>
int main(){
    int n, result, promedio, total, cont=0;
    printf("Ingrese un numero:\n");
    scanf("%d",&n);
    for(int i = 0; i<=n; i+=3){
    	cont+=1;
    	result+=i;
    	total = result/cont;
    }
    	printf("La suma de los multiplos de 3 es: %d\n",result);
    	printf("n numeros por lo que se dividen los multiplos de 3 son: %d\n",cont);
    	printf("El promedio es: %d",total);
    	return 0;
    
}


