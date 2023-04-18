#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int n[10];
int m;
int k;
int s=0;

cout<<"Este programa es para que se digiten los valores para un arreglo de 10 numeros enteros y dar el resultado de la suma de todos \n";

   for(m=0;m<10;m++)
{
	
cout<<"Digite los valores para el arreglo\n";
cin>>k;
n[m]=k;
s=s+k;
}





cout<<"Arreglo\n";
for(m=0;m<10;m++)
{

cout<<n[m]<<" ";

}
cout<<"\n";
cout<<"El resultado de la suma es: "<<s;

}


