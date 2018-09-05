#include <stdio.h>

int fact(int n){
	if(n <= 1){
		return n;
	}
	else{
		return n * fact(n - 1);
	}
}
int main(){
	int total=0, n;
	do{
		printf("Ingrese un numero posotivo para saber su factorial:\n");
		scanf("%d",&n);
	}while(n<1);
	
	for(int i = 0; i <= n; i++){
		total=fact(i);
		}
	printf("El factorial de %d es: %d",n,total);
	return 0;
}
