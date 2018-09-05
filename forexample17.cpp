/*17) promediar los 'x' primeros multiplos de 2 y determinar si ese promedio es mayor
 que los 'y' primeros multiplos de 5 para los valores de 'x' y 'y' leidos */
#include <stdio.h>

main(){
	int x, y, total, total2, cont=0, cont2=0, prom, prom2, suma=0, suma2=0;
	printf("Ingrese un numero:\n");
	scanf("%d",&x);
 	printf("Ingrese un numero:\n");
	scanf("%d",&y);
	
	for(int i=0; i<=x; i+=2){
		cont+=1;
		suma+=i;
		total = suma/cont;
	}
	for(int j=0; j<=y; j+=5){
	 	cont2+=1;
	 	suma2+=j;
		total2 = suma2/cont2;	
	}
	
	if(total > total2){
		printf("El promedio delos multiplos de 2= %d\nEl promedio de los multiplos del 5= %d\n",total, total2);
		printf("\nEl promedio de los multiplos de 2 es mayor\n");
	}
	else if(total < total2){
		printf("El promedio de los multiplos del 5= %d\nEl promedio de los multiplos del 2= %d \n",total2, total);
		printf("\nEl promedio de los multiplos de 5 es mayor\n");
	}
	 else if(total == total2){
	 		printf("Los promedios son iguales");
	 	}
	return 0;
	}
