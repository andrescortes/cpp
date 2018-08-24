/*5-. Que muestre un menú con las operaciones básicas
 y calcule esta operación con dos valores pedidos para la operación.*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
main(){
	
	float x, y, result;
	int num;
 cout << "Escoja una de las opciones para hacer su respectivo proceso " << endl;
 cout << "1)suma\n2)resta\n3)multiplicacion\n4)division" << endl;	
 cin >> num;
 switch(num){
 	case 1: cout << "ingrese el primer numero" << endl; 
	        cin >> x;
 	        cout << "ingrese el segundo numero" << endl; 
			cin >> y;
 	        result = x+y;
 	        cout << "la suma es = " << result << endl;
 	        break;
    case 2: cout << "ingrese el primer numero" << endl; cin >> x;
 	        cout << "ingrese el segundo numero" << endl; cin >> y;
 	        result = x-y;
 	        cout << "la resta es = " << result << endl;
 	        break;
    case 3: cout << "ingrese el primer numero" << endl; cin >> x;
 	        cout << "ingrese el segundo numero" << endl; cin >> y;
 	        result = x*y;
 	        cout << "la multiplicacion es = " << result << endl;
 	        break;
 	case 4: cout << "ingrese el primer numero" << endl; cin >> x;
 	        cout << "ingrese el segundo numero" << endl; cin >> y;
 	        result = x/y;
 	        cout << "la division es = " << result << endl;
 	        break;
 	        default: cout << "no valido " << endl;
			}
 getch();
}

