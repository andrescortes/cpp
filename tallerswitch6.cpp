/*6-. Solicitar por teclado un color por teclado y determinar si pertenece a los colores del Arco Iris.*/
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
  
int main(){
	char colors;//: rojo, naranja, amarillo, verde, cian, azul y violeta,
	cout << "Escoge un color" << endl;
	cout << "r Rojo n Naranja a Amarillo v Verde c Cian z Azul l Violeta" << endl;
	cin >> colors;
	
	switch(colors){
		case 'r': cout << "es rojo y pertenece al arco iris " << endl;
		break;
		case 'n': cout << "es naranja y pertenece al arco iris " << endl;
		break;
		case 'a': cout << "es amarillo y pertenece al arco iris " << endl;
		break;
		case 'v': cout << "es verde y pertenece al arco iris " << endl;
		break;
		case 'c': cout << "es cian y pertenece al arco iris " << endl;
		break;
		case 'z': cout << "es azul y pertenece al arco iris " << endl;
		break;
		case 'l': cout << "es violeta y pertenece al arco iris " << endl;
		break;
		default: cout << "no aceptado" << endl;
	}
	getch();
}

