/*1 leer un un numero entero de tres digitos y mostrar todos enteros comprendidos entre 1 y cada uno de los digitos*/
#include <iostream>
#include <conio.h>

using namespace std;

main(){
	int j, n1, n2, n3, n4, i, e, a, n5, primero, segundo, tercero;
	cout << "ingrese un numero de tres cifras" << endl;
	cin >> j;//345
	if (j >= 100 && j<=999){
		n2=j/100;
		n1 = j%100; 
		n4 = n1/10;
	    n3 =j%100;
	    n5 = n3%10;
	cout << n2 << " " << n4 << " " << n5 << endl; 
}
     for( i=1; i <= n2; i++){
     cout << i ;
	}
	for( a=1; a <= n4; a++){
		cout  <<" "<< a ;
	}
	 for( e=1; e <= n5; e++){
		cout <<"   " <<e ;
	}
   


    
	getch();
}

