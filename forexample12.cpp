/*12) leer un entero de tres digitos y determinar si tiene el digito 1*/
#include <stdio.h>

int main(){
	int x, n1, n2;
	printf("Ingrese un numero de tres cifras:\n");
	scanf("%d",&x);
	if (x >= 100 && x <= 999){
		n1= x %100;
		n2= n1/10;
		if(x / 100 == 1){
			printf("%d Tiene un digito 1 al inicio.",x);
		}
		else if(x % 10 == 1){
			printf(" %d tiene un digito 1 al final.",x);
		}
		else if(n2==1){
			printf("%d tiene un digito 1 en la mitad.",x);
		}	
	}
		else{
			printf("el numero %d no esta en el rango",x);
		}
	return 0;
}
