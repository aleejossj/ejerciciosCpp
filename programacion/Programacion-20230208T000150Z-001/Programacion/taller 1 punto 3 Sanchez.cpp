#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a;
int mes;

cout<<"Este programa es para ver cuantos dias tiene un mes elegido y se requiere ver si el año es bisiesto\n";
cout<<"Por favor digite un año\n";
cin>>a;
cout<<"Por favor digite un mes (en numero del 1 al 12)\n";
cin>>mes;


if(a%4==0 && a%100==0 && a%400==0)
{
	cout<<"El año es bisiesto";
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 )
	{
		cout<<"El mes digitado tiene 31 dias\n";
	}
	if(mes==4 || mes==6 || mes==9 || mes==10 )
	{
		cout<<"El mes digitado tiene 30 dias\n";
	}
	if(mes==2)
	{
		cout<<"El mes digitado tiene 29 dias\n";
	}
	
}
else
{
	cout<<"El año no es bisiesto\n";
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12 )
	{
		cout<<"El mes digitado tiene 31 dias\n";
	}
	if(mes==4 || mes==6 || mes==9 || mes==10 )
	{
		cout<<"El mes digitado tiene 30 dias\n";
	}
	if(mes==2)
	{
		cout<<"El mes digitado tiene 28 dias\n";
	}
}
return 0;
}
