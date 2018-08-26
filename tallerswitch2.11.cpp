/*2-. Que pida un número del 1 al 12 y diga el nombre del mes correspondiente.*/
#include <iostream>
#include <conio.h>
using namespace std;
main(){
 char dia;
 cout << "Ingrese un numero para decirle a que mes corresponde: " << endl;
 cin >> dia;
 
 switch(dia){
 	case 'e': cout << "enero." ; break;
 	case 2: cout << "febrero" ; break;
 	case 3: cout << "marzo." ; break;
 	case 4: cout << "abril" ; break;
 	case 5: cout << "mayo" ; break;
 	case 6: cout << "junio" ; break;
 	case 7: cout << "julio" ; break;
 	case 8: cout << "agosto" ; break;
 	case 9: cout << "septiembre" ; break;
 	case 10: cout << "octubre" ; break;
 	case 11: cout << "noviembre" ; break;
 	case 12: cout << "diciembre" ; break;
 	default: cout << "Numero no valido o Caracter no valido.";
 }	

}
