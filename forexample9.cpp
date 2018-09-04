/*9mostrar en pantalla todos los numeros terminados en 6 comprendidos entre 25 y 205*/
#include<iostream>
#include<conio.h>
using namespace std;
main(){
    for(int i= 25; i <=205; i++){
		if (i%10==6){
			cout << i << " ";
	}
}

getch();
}

