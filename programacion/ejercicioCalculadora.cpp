#include <iostream>
using namespace std;

struct calculadora{
	//atributos
	int num1, num2;
	//métodos o funciones
	int suma (int,int);
	int resta(int, int);
	int mult (int, int);
	int division(int, int);
	int residuo(int,int);
};

int calculadora::suma(int x, int y)
{
	int z;
	z=x+y;
	return z;
};

int calculadora::resta(int a,int b)
{
	int c;
	c=a-b;
	return c;
};

int calculadora::mult(int a,int b)
{
	int c;
	c=a*b;
	return c;
};

int calculadora::division(int a,int b)
{
	int c;
	c=a/b;
	return c;
};

int calculadora::residuo(int a,int b)
{
	int c;
	c=a%b;
	return c;
};


main()
{
	calculadora casio;
	int respuesta;
	int opc,num1,num2;
	cout<<"Elija la operacion que quiere realizar\n";
	cout<<"1.Suma\n";
	cout<<"2.Resta\n";
	cout<<"3.Multiplicacion\n";
	cout<<"4.Division\n";
	cout<<"5.Residuo\n";
	cin>>opc;
	
	switch (opc)
	{
		case 1:
		cout<<"Digite el valor del primer numero: \n";
		cin>>num1;
		cout<<"Digite el valor del segundo numero: \n";
		cin>>num2;
		respuesta=casio.suma(num1,num2);
		cout<<"la respuesta es: "<<respuesta;
		
		break;
		
		case 2:
		cout<<"Digite el valor del primer numero: \n";
		cin>>num1;
		cout<<"Digite el valor del segundo numero: \n";
		cin>>num2;
		respuesta=casio.resta(num1,num2);
		cout<<"la respuesta es: "<<respuesta;
		
		break;	
		
		case 3:
		cout<<"Digite el valor del primer numero: \n";
		cin>>num1;
		cout<<"Digite el valor del segundo numero: \n";
		cin>>num2;
		respuesta=casio.mult(num1,num2);
		cout<<"la respuesta es: "<<respuesta;
		
		break;
		
		case 4:
		cout<<"Digite el valor del primer numero: \n";
		cin>>num1;
		cout<<"Digite el valor del segundo numero: \n";
		cin>>num2;
		respuesta=casio.division(num1,num2);
		cout<<"la respuesta es: "<<respuesta;
		
		break;
		
		case 5:
		cout<<"Digite el valor del primer numero: \n";
		cin>>num1;
		cout<<"Digite el valor del segundo numero: \n";
		cin>>num2;
		respuesta=casio.residuo(num1,num2);
		cout<<"la respuesta es: "<<respuesta;
		
		break;
	}
	
}
