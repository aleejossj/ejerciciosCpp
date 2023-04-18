#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n;

cout<<"Este programa es para saber si un numero entero digitado es par o impar\n";
cout<<"Por favor digite un numero entero\n";
cin>>n;

if(n%12==0)
{
	cout<<"El numero es par\n";
}
else
{
	cout<<"El numero es impar\n";
}
return 0;
}
