#include <iostream>
using namespace std;

float conversion (float c)
{
return ((9*c)/5)+32;
}


int main ()
{
float c;

cout<<"Este programa es para convertir grados Celsius a Fahrenheit\n";
cout<<"ingrese los grados celsius a convertir \n";
cin>>c;

cout<<"El resultado es: \n";
cout<<conversion (c);
}
