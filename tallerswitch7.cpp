/*7-. Solicitar el día de la semana, imprimir el correspondiente a los planetas del sistema solar, 
lunes=luna, martes=marte, miércoles=mercurio, jueves=júpiter, viernes= venus, sábado= Saturno, domingo= sol.*/
#include <conio.h>
#include <iostream>
using namespace std;
main(){
	cout << "Escoge un dia de la semana" << endl;
	cout << "1 lunes 2 martes 3 miercoles 4 jueves 5 viernes 6 sabado 7 domingo" << endl;
	int num;
	cin >> num;
	
	switch(num){
		   case 1: cout <<"Lunes de Luna" << endl; break;
		   case 2: cout <<"Martes de Marte" << endl; break;
		   case 3: cout <<"Miercoles de Mercurio" << endl; break;
		   case 4: cout <<"Jueves de Jupiter" << endl; break;
		   case 5: cout <<"Viernes de Venus" << endl; break;
		   case 6: cout <<"Sabado de Saturno" << endl; break;
		   case 7: cout <<"Domingo de Sol" << endl; break;
		   default: cout << "no valido" << endl;
		}
	getch();
	
}
