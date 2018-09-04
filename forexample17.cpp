/*17) promediar los 'x' primeros multiplos de 2 y determinar si ese promedio es mayor
 que los 'y' primeros multiplos de 5 para los valores de 'x' y 'y' leidos */
#include <stdio.h>

main(){
	int x, y, total=0, total2=0, cont=0, cont2=0, prom, prom2, suma, suma2;
	printf("Ingrese un numero:\n");
	scanf("%d",&x);
 	printf("Ingrese un numero:\n");
	scanf("%d",&y);
	for(int i=0; i<=x; i+=2){
		cont+=1;
		suma+=i;
		total = suma/cont;
	}
	for(int i=0; i<=y; i+=5){
	 	cont2+=1;
	 	suma2+=i;
		total2 = suma2/cont2;	 	
	 }
	
	if(total < total2){
		printf("\nEl promedio de los multiplos de 2 es mayor\n");
		printf("El promedio del 2 es = %d y del 5 es = %d\n",total, total2);
	}
	else if(total2 > total){
		printf("\nEl promedio de los multiplos de 5 es mayor\n");
		printf("El promedio del 5 es =%d y del 2 es = %d \n",total2, total);
	}
	 //else if(x==y){
	 //	printf("Son iguales");
	// }
	return 0;
	}
