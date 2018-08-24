#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;
main()
{
//clrscr();//
float cap, cap_gin, cap_tra, cap_ped;
cout<<"el presupuesto es de: ";
cin>>cap;
cap_gin=cap*0.40;
cap_tra=cap*0.30;
cap_ped=cap*0.30;
cout<<"el presupuesto de ginecologia es: "<<cap_gin;
cout<<endl;
cout<<"el presupuesto de traumatologia es: "<<cap_tra;
cout<<endl;
cout<<"el presupuesto de pediatria es: "<<cap_ped;
getch();
}


