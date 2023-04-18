#include <iostream>
using namespace std;

int cuadrado (int x)
{
return x*x;
}


int main ()
{
float x;
float y;
int opc;
cout<<"Este programa es para ver si un numero es positvo, negativo o cero\n";
cout<<"Si el numero es positivo se mostrara la P y si es cero o negativo se mostrara la N\n";
cout<<"Despues de esto se mostrara el resultado de la funcion\n";
cout<<"ingrese el valor del numero \n";
cin>>x;

if(x>0)
{
cout<<"P\n";
cout<<cuadrado (x);
}
if(x<=0)
{
cout<<"N\n";
cout<<cuadrado (x);
}
return 0;

}
