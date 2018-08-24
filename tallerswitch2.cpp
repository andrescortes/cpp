/*2-. Que pida un número del 1 al 12 y diga el nombre del mes correspondiente.
*/
#include <iostream>
#include <conio.h>
using namespace std;
main(){
 int dia;
 cout << "Ingrese un numero para decirle a que mes corresponde " << endl;
 cin >> dia;
 
 switch(dia){
 	case 1: cout << "Mes Enero." ; break;
 	case 2: cout << "Mes Febrero." ; break;
 	case 3: cout << "Mes Marzo." ; break;
 	case 4: cout << "Mes Abril." ; break;
 	case 5: cout << "Mes Mayo." ; break;
 	case 6: cout << "Mes Junio." ; break;
 	case 7: cout << "Mes Julio." ; break;
 	case 8: cout << "Mes Agosto." ; break;
 	case 9: cout << "Mes Septiembre." ; break;
 	case 10: cout << "Mes Octubre." ; break;
 	case 11: cout << "Mes Noviembre." ; break;
 	case 12: cout << "Mes Diciembre." ; break;
 	default: cout << "Numero no valido o Caracter no valido.";
 }	

}

