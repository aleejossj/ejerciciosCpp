#include <iostream>
#include <string.h>

using namespace std;

int main() {
int y,c,n,t;
    int x [10] = {6, 8, 9, 2 ,7, 3, 10, 4, 1, 5};
cout<<"Arreglo sin ordenar\n";
for(y=0;y<10;y++)
{
	
	cout<<x[y]<<" ";
}

cout<<"\n";
for(y=0;y<10;y++)
{
	for(n=0;n<10;n++)
	{
		if(x[n]<=x[n-1])
		{
		t=x[n];
		x[n]=x[n-1];
		x[n-1]=t;	
		}
	}
}
cout<<"Arreglo ordenado\n";
for(y=0;y<10;y++)
{
	cout<<x[y]<<" ";
}


    return 0;
}
