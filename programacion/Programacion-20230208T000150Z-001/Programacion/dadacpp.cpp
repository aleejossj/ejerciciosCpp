#include<iostream>
using namespace std;

int serie (int i)
{
if (i==1 || i==2)
{
	return 1;
}
return serie (i-1) + serie (i-2);
}

int main ()
{
int b;
cout<<"Ingrese el valor de X:\n";
cin>>b;
for (int y=1;y<=b;y++)
{
cout<<serie(y)<<" ";
}

}
