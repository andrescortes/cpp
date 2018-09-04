/*4 leer dos numeros y mostrar todos los comprendidos entre ellos*/
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	
	int j, i, x;
	
	
	cout << "ingrese un numero" << endl;
	cin >> j;
	cout << "ingrese un numero" << endl;
	cin >> x;
	if(j<x){
	for(i = j; i <= x; i++){
		
			cout << i << " ";
		}
		
}
else if(j>x){
	for(i = x; i <= j; i++){
		
			cout << i << " ";
		}
}
else if(j==x){
	cout << "son iguales" << endl;
} 

	getch();
}
