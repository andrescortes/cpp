/*1 leer un numero entero y mostrar todos los enteros comprendidos entre 1 y el numero leido*/
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int j;
	cout << "ingrese un numero" << endl;
	cin >> j;
	for(int i = 0; i <= j; i++){
		cout << i << ",";
	}
	getch();
}
