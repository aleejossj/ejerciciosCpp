#include <iostream>
using namespace std;
int main ()
{
float x;
float y;
float n;
int opc;
cout<<"Este programa es para realizar una operacion (a eleccion del usuario)\n";
cout<<"ingrese el valor del primer numero \n";
cin>>x;
cout<<"ingrese el valor del segundo numero \n";
cin>>y;
cout<<"Seleccione su opcion\n";
cout<<"Opciones: \n";
cout<<"1. Suma \n";
cout<<"2. Resta \n";
cout<<"3. Multiplicacion \n";
cout<<"4. Division \n";
cin>>opc;

	if(opc==1)
	{
		n=x+y;
		cout<<"El resultado de la suma es: "<<n<<endl;
	}
		if(opc==2)
	{
		n=x-y;
		cout<<"El resultado de la resta es: "<<n<<endl;
	}
		if(opc==3)
	{
		n=x*y;
		cout<<"El resultado de la multiplicacion es: "<<n<<endl;
	}
		if(opc==4)
	{
		n=x/y;
		cout<<"El resultado de la division es: "<<n<<endl;
	}
}

