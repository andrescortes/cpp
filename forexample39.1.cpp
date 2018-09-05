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
	for(int i = 0; i <=5; i++){
		printf("%d ",fact(i));
	}
}
