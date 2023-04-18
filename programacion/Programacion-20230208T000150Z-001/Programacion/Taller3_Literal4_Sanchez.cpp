#include<iostream>
using namespace std;

void es_vocal (char x)
{
 
	if (x=='a'||x=='e'|| x == 'i'||x=='o'||x=='u')
	{
	cout<<"True\n";
	}
	 
	else
	{
	cout<<"False\n";
	}
}
 
int main ()
{
char x;
cout<<"Este programa es para ver si un caracter es vocal o no, y devolver un booleano como respuesta\n";
cout <<"Digite el caracter\n";
cin >>x;
    es_vocal(x);
    
    return 0;
 
}
