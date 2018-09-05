/*27) leer dos numeros enteros y determinar cual de los dos tiene mayor cantidad de digitos*/
#include <stdio.h>

main(){
	int x, contadorx=0, contadory=0, y;
	printf("Ingrese un numero:\n");
	scanf("%d",&x);
	printf("Ingrese un numero:\n");
	scanf("%d",&y);
	for(int i = 0; i < x; i++ ){
		contadorx+=1;
	}
		for(int i = 0; i < y; i++ ){
		contadory+=1;
	}
	if(contadorx < 10 && contadory < 10){
		printf("Los numeros %d y %d tienen la  misma cantidad de digitos",x,y);
	}
	else if(contadorx <= 99 && contadory < 10){
		printf("El numero %d tiene mas cantidad de digitos que %d  ",x,y);
	}
	else if(contadory <= 99 && contadorx < 10 ){
		printf("El numero %d tiene mas cantidad de digitos que %d ",y,x);
	}
		else if(contadorx <= 99 && contadory <= 99){
		printf("El numero %d tiene igual cantidad de digitos que %d  ",x,y);
	}
		else if(contadorx <= 999 && contadory < 100 || contadorx <= 999 && contadory < 10){
		printf("El numero %d tiene mas cantidad de digitos que %d ",x,y);
	}
		else if(contadory <= 999 && contadorx < 100 || contadory <= 999 && contadorx < 10){
		printf("El numero %d tiene mas cantidad de digitos que %d ",y,x);
	}
		else if(contadorx <= 999 && contadory <= 999){
		printf("El numero %d tiene igual cantidad de digitos que %d  ",x,y);
	}
		else if(contadorx <= 9999 && contadory <= 999 || contadorx <= 9999 && contadory < 99 || contadorx <= 9999 && contadory < 10){
		printf("El numero %d tiene mas catidad de digitos que %d  ",x,y);
	}
			else if(contadory <= 9999 && contadorx <= 999){
		printf("El numero %d tiene mas cantidad de digitos que %d  ",y,x);
	}
			else if(contadorx <= 9999 && contadory <= 9999){
		printf("El numero %d tiene igual cantidad de digitos que %d  ",x,y);
	}
		else if(contadorx <= 99999 && contadory <= 9999 || contadorx <= 99999 && contadory < 999 || 
		contadorx <= 99999 && contadory < 99 || contadorx <= 99999 && contadory < 10){
		printf("El numero %d tiene mas catidad de digitos que %d  ",x,y);
	}
	else if(contadory <= 99999 && contadorx <= 9999 || contadory <= 99999 && contadorx < 999 || 
		contadory <= 99999 && contadorx < 99 || contadory <= 99999 && contadorx < 10){
		printf("El numero %d tiene mas catidad de digitos que %d  ",y,x);
	}
	else if(contadorx <= 99999 && contadory <= 99999){
		printf("Tienen igual cantidad de digitos.");
	}
	else if(contadorx > 99999 && contadory > 99999){
		printf("Fuera del rango.");
	}
	
	return 0;
}
	
