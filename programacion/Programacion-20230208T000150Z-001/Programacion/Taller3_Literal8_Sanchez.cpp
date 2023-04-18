#include <iostream>
using namespace std;
int n,r;
int funcion (int n)
{
if(n>2)
{
r=funcion(n-3)+(funcion(n-2))-funcion(n-1);
return r;
}
}

int main ()
{
int x;

cout<<"ingrese el valor del numero \n";
cin>>n;

cout<<funcion(n);

}
