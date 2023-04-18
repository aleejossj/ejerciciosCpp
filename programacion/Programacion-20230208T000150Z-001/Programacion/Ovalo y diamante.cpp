#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n;

cout<<"Este programa seleccionar una opcion en un menu de once opciones\n";
cout<<"Por favor digite un numero entero (Del 1 al 11)\n";
cout<<"1.Edad de 10 años\n";
cout<<"2.Edad de 20 años\n";
cout<<"3.Edad de 30 años\n";
cout<<"4.Edad de 40 años\n";
cout<<"5.Edad de 50 años\n";
cout<<"6.Edad de 60 años\n";
cout<<"7.Edad de 70 años\n";
cout<<"8.Edad de 80 años\n";
cout<<"9.Edad de 90 años\n";
cout<<"10.Muerto\n";
cout<<"11.Error\n";
cin>>n;

switch(n)
{
	case 1:
		if(n==1)
		{
			cout<<"Edad de 10 años\n";
		}	
	break;
	
	case 2:
		if(n==2)
		{
			cout<<"Edad de 20 años\n";					
		}
	break;
	case 3:
		if(n==3)
		{
			cout<<"Edad de 30 años\n";
		}
	break;
	
	case 4:
		if(n==4)
		{
			cout<<"Edad de 40 años\n";
		}
	break;
	case 5:
		if(n==5)
		{
			cout<<"Edad de 50 años\n";
		}
	break;
	
	case 6:
		if(n==6)
		{
			cout<<"Edad de 60 años\n";	
		}
	break;
	case 7:
		if(n==7)
		{
			cout<<"Edad de 70 años\n";
		}
	break;
	
	case 8:
		if(n==8)
		{
			cout<<"Edad de 80 años\n";	
		}
	break;
	case 9:
		if(n==9)
		{
			cout<<"Edad de 90 años\n";
		}
	break;
	
	case 10:
		if(n==10)
		{
			cout<<"Muerto";	
		}
	break;
	
	case 11:
		if(n==11)
		{
			cout<<"Error";	
		}
	break;	
}
}
