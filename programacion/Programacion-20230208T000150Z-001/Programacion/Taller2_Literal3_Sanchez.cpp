#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int p=0;
int a;
int n=0;
int c=1;
int z=0;
cout<<"Este programa es para calcular que numeros son positivos, negativo o si son 0\n";


while(c<=10)
{
cout<<"Digite un numero\n";
cin>>a;
if(a>0)
{
	//cout<<"Es positivo\n";
	p++;
}
if(a<0)
{
	//cout<<"Es negativo\n";
	n++;
}
if(a==0)
{
	//cout<<"Es cero\n";
	z++;
}
c++;	
}
system("cls");
cout<<"Hay "<<p<<" positivos\n";
cout<<"Hay "<<n<<" negativos\n";
cout<<"Hay "<<z<<" ceros\n";
}
