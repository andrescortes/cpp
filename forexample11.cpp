/*11)leer un numero entero de dos dogitos y mostrar en pantalla todos los enteros comprendidos entre un digito y el otro*/
#include <stdio.h>
using namespace std;
int main(){
	int x, y, i;
	printf("ingrese un numero\n");
	scanf("%d",&x);
	printf("ingrese otro numero\n");
	scanf("%d",&y);
	if(x < y ){
		for(i = x; i<=y; i++)
		printf("%i ",i);
	}
	else if(x > y){
		for(i = y; i<=x; i++)
		printf("%i ",i);
	}
	else if(x==y){
		printf("Los numero son iguales");
	}
		return 0;
	}
	

