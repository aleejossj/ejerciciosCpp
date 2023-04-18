#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
string palabra;

	for(int i=1;i<=10;i++)
	{
	cout<<"Digite la palabra\n";
	cin>>palabra;
	if (strlen(palabra.c_str())>10)
	{
		fstream app;
		app.open("Palabras.txt",ios::app);
		app<<palabra<<endl;
		app.close();
	}
	
	
	
	}
}

