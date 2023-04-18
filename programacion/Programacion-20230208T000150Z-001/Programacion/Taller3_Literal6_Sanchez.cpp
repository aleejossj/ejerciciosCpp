#include <iostream>
 
using namespace std;
int b=0;
int a;
int i=1;
int c;
int z=0;
int serie(int i)
{
	b=i+z;
	cout<<b<<endl;
	i=z;
	z=b;
	return b;	
}
int main()
{
int b=0;
int a;
int i=1;
int c;
int z=0;
 
cout<<"Este programa es para hacer la serie de fibonacci\n";
cout<<"Digite la cantidad de veces que quiere que se repita la serie\n";
cin>>a;
cout <<"Digite el numero\n";
cin>>i;
cout<<"Los numeros son: \n";
cout<<"0\n";

 for(c=1;c<=a;c++)
{
	serie(i);
	b=i+z;
	
	i=z;
	z=b;
}

    
}
