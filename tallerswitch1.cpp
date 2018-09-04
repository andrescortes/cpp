/*1) Que pida un numero del 1 al 7 y diga que dia de la semana le corresponde*/
#include <iostream>
#include <conio.h>
using namespace std;
main(){
 int dia;
 cout << "Ingrese un numero para decirle que dia de la semana es: " << endl;
 cin >> dia;
 
 switch(dia){
 	case 1: cout << "Dia Lunes." ; break;
 	case 2: cout << "Dia Martes." ; break;
 	case 3: cout << "Dia Miercoles." ; break;
 	case 4: cout << "Dia Jueves." ; break;
 	case 5: cout << "Dia Viernes." ; break;
 	case 6: cout << "Dia Sabado." ; break;
 	case 7: cout << "Dia Domingo." ; break;
 	default: cout << "Numero no valido o Caracter no valido.";
 }	
 getch();

}

