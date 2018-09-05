/* 47)leer un numero entero y calcular a cuanto es igual la sumatoria de todos los factoriales
 de los numeros comprendidos entre el 1 el numero leido*/
 #include <stdio.h>
 
 int fact(int n){
 	if(n<=1){
 		return n;
	 }
	 else{
	 	return n*fact(n - 1);
	 }
 }
 int main(){
 	int x, suma=0;
 	printf("Ingrese un numero positivo:\n");
 	scanf("%d",&x);
 	while(x<1);
 	for(int i = 0; i <= x; i++){
 		suma+= fact(i);
 		
	 }
	 printf("La sumatoria de cada factorial hasta %d es: %d",x,suma);
 }
