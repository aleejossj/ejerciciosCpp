#include <iostream>
 
using namespace std;
 
int primo(int x, int y)
{
	 if (x==0 || x==1 || x==4)
    {
     cout<<"False\n";
	 return false;
    }
  for (int y=2;y<x/2;y++) 
  {
    if (x%y==0)
	{
	cout<<"False\n";	
	return false;
	}

  }
  cout<<"True\n";
  return true;
}
int main()
{
    int x;
    int y;
 
cout<<"Este programa es para ver si un numero positivo es primo o no, y devolver un booleano como respuesta\n";
cout <<"Digite el numero\n";
cin>>x;
 cout<<primo(x,y);

  return 0;
}

