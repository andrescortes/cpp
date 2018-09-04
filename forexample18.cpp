/*18) leer dos numeros enteros y mostrar todos los multiplos de 5 comprendidos entre el menor y el mayor */
#include <stdio.h>

main(){
    int x,y;
    printf("ingrese un numero:\n");
    scanf("%d",&x);
    printf("ingrese un numero:\n");
    scanf("%d",&y);
    if(x < y){
	for(int i=x; i<=y; i+=5){
		printf("%d ",i);
	}
}
    if(y > x){
    	for(int i=x; i<=y; i+=5){
		printf("%d ",i);
	}
	}
	return 0;
}
