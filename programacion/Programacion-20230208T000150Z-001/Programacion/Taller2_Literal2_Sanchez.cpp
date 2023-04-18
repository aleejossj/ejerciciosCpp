#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int b=0;
int a;
int i=1;
int c;
int z=0;
cout<<"Este programa es para calcular la secuencia de Fibonacci\n";
cout<<"Elija la cantidad de numeros que quiere mostrar\n";
cin>>a;
while(c<=a)
{
	b=i+z;
	cout<<"El numero es: "<<b<<endl;
	i=z;
	z=b;
	c++;	
}

}
