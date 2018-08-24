/*4-. Que muestre un menú donde las opciones sean "Equilátero", "Isósceles" y "Escaleno", 
pida una opción y calcule el perímetro del triángulo seleccionado, 
solicitando los datos respectivos.*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
 float lado, result, ladoigual, lado2;	
 int num ;
 cout << "Escoja una de las opciones para hallar su respectivo perimetro" << endl;
 cout << "1)Equlatero\n2)Isosceles\n3)Escaleno" << endl;
 cin >> num;
 switch(num){
 	case 1: cout << "ingrese un lado del equilatero " << endl;
 	        cin >> lado;
 	        result = (3*lado);
 	        cout << " El perimetro es =  " << result << endl; 
			 ; break;
 	case 2: cout << "ingrese el lado que repite :" << endl;
 	        cin >> ladoigual;
 	        cout << "Ingrese el otro lado : " << endl;
 	        cin >> lado;
 	        result = 2*ladoigual+lado;
 	        cout << " El perimetro es =  " << result << endl;
			 break;
 	case 3: cout << "ingrese el primer lado :" << endl;
 	        cin >> ladoigual;
 	        cout << "Ingrese el segundo lado : " << endl;
 	        cin >> lado;
 	        cout << "Ingrese el tercer lado : " << endl;
 	        cin >> lado2;
 	        result = ladoigual+lado+lado2;
 	        cout << " El perimetro es =  " << result << endl;
			 break;
			 default: cout << "Numero no valido" << endl;
   }	
   getch();
}
