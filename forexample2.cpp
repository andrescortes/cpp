/*2 leer un numero entero y mostrar todos los pares comprendidos entre 1 y el numero leido*/
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int j, i;
	cout << "ingrese un numero" << endl;
	cin >> j;
	for(i = 2; i <= j; i+=2){
		cout << i  << ",";
	}
	getch();
}
