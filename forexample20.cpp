/*20) leer un numero y determinar cuantos digitos tiene*/
#include <stdio.h>

main(){
	int x, contador=0, total=0;
	printf("Ingrese un numero para saber cuantos digitos tiene:\n");
	scanf("%d",&x);
	for(int i = 0; i < x; i++ ){
		contador+=1;
	}
	if (contador < 10){
		printf("%d tiene un solo digito",x);
	}
	else if(contador >= 10 && contador <= 99){
		printf("El numero %d tiene 2 digitos",x);
	}
		else if(contador >= 100 && contador <= 999){
		printf("El numero %d tiene 3 digitos",x);
	}
		else if(contador >= 1000 && contador <= 9999){
		printf("El numero %d tiene 4 digitos",x);
	}
		else if(contador >= 10000 && contador <= 99999){
		printf("El numero %d tiene 5 digitos",x);
	}
		else if(contador >= 100000 && contador <= 999999){
		printf("El numero %d tiene 6 digitos",x);
	}
		else if(contador >= 1000000 && contador <= 9999999){
		printf("El numero %d tiene 7 digitos",x);
	}
	else if(contador >= 10000000){
		printf("%d no esta en el rango.",x);
	}
	return 0;
}
