/*18) leer dos numeros enteros y mostrar todos los multiplos de 5 comprendidos entre el menor y el mayor */
#include <stdio.h>

main(){
    int x,y;
    printf("ingrese un numero:\n");
    scanf("%d",&x);
    printf("ingrese un numero:\n");
    scanf("%d",&y);
    
    if(x < y){
	for(int i=x; i<=y; i++){
		if(i % 5 == 0 ){
			printf("%d ",i);
		}
	}
}
	if(x > y){
    	for(int i=y; i<=x; i++){
		if(i % 5 == 0){
			printf("%d ",i);
		}
	}
}


	return 0;
}
