/*6-. Solicitar por teclado un color por teclado y determinar si pertenece a los colores del Arco Iris.*/
#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include <math.h>
using namespace std;
  //enum colors{r , naranja, amarillo, verde, azul, anil, violeta };
int main(){
	char colors;
	
	cout << "escribe un color" << endl;
	cin.get(colors);
	cout << colors << endl;
	switch(colors){
		case 'rojo': cout << "es rojo y pertenece al arco iris " << endl;
		break;
		case 'naranja': cout << "es amarillo y pertenece al arco iris " << endl;
		break;
		case 'amarillo': cout << "es verde y pertenece al arco iris " << endl;
		break;
		case 'verde': cout << "es verde y pertenece al arco iris " << endl;
		break;
		case 'azul': cout << "es azul y pertenece al arco iris " << endl;
		break;
		case 'anil': cout << "es anil y pertenece al arco iris " << endl;
		break;
		case 'violeta': cout << "es violeta y pertenece al arco iris " << endl;
		break;
		default: cout << "no aceptado" << endl;
	}
	getch();
}

