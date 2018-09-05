/*39) utilizando el concepto de ciclo generar la serie de fibonacci hasta llegar al 10000*/
#include <iostream>
#include <stdio.h>
using namespace std;

int fibo(int n){
	if(n == 0 || n == 1){
		return n;
	}
	else {
		return fibo(n - 1) + fibo (n -2);
	}
}
int main(){
	for(int i = 0; i <= 21; i++){
		printf("%d, ",fibo(i));
	}
	return 0;
}



