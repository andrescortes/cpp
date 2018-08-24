/*2-. 3-. Que pida una letra y detecte si es una vocal, 
en caso afirmativo imprimir una palabra que empiece por esa vocal.*/
#include <iostream>
#include <conio.h>
using namespace std;
main(){
 char letra;
 cout << " Ingrese una letra: " << endl;
 cin >> letra;
 if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
 switch(letra){
 	case 'a': cout  << " a de alfabeto" ; break;
 	case 'e': cout << " e de elefane " ; break;
 	case 'i': cout << " i de iglesia" ; break;
 	case 'o': cout << " o de oreja" ; break;
 	case 'u': cout << " u de unguento" ; break;
     }	
  }
  else {
  	cout << "¡ Caracter no valido !";
  }
  getch();
}

