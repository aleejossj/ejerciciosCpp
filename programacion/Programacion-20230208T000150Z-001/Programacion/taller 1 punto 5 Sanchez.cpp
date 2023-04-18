#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a;
int x;
int b;
int c;
int r;
int n;

cout<<"Este programa es para realizar un promedio de 5 notas\n";

cout<<"Por favor digite la primera nota (Del 0 a 100)\n";
cin>>a;
cout<<"Por favor digite la segunda nota (Del 0 a 100)\n";
cin>>x;
cout<<"Por favor digite la tercera nota (Del 0 a 100)\n";
cin>>b;
cout<<"Por favor digite la cuarta nota (Del 0 a 100)\n";
cin>>c;
cout<<"Por favor digite la quinta nota (Del 0 a 100)\n";
cin>>n;

r=(a+x+b+c+n)/5;

cout<<"El promedio de notas es: "<<r<<endl;
cout<<"Por ende...\n";

if(r>=90 && r<=100)
{
	cout<<"Su promedio es de puntuacion A\n";
}
if(r>=80 && r<=90)
{
	cout<<"Su promedio es de puntuacion B\n";
}
if(r>=70 && r<=80)
{
	cout<<"Su promedio es de puntuacion C\n";
}
if(r>=60 && r<=70)
{
	cout<<"Su promedio es de puntuacion D\n";
}
if(r>=0 && r<=60)
{
	cout<<"Su promedio es de puntuacion E\n";
}

}
