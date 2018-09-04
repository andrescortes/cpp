/*3 leer un numero entero y mostrar todos los divisores exactos comprendidos entre 1 y el numero leido*/
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	
	int j, i;
	
	
	cout << "ingrese un numero" << endl;
	cin >> j;
	for(i = 1; i <= j; i++){
		if(j%i==0){
			cout << i << " ";
		}
		
	}
	getch();
}
