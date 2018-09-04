/*10) leer un numero entero y determinar a cuanto es igual la suma de todos los entero comprendidos entre 1 y el numero leido*/
#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int n, total, result=0;
	cout << "ingrese un numero" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++ ){
		result += i ;
		total = result;
		
	}
	cout << "La suma de todos sus componentes es: " << total << " ";
	
}

