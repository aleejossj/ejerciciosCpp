#include <iostream>
#include <fstream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
string palabra;

	fstream input;
    input.open("10 palabras.txt",ios::in);
	string linea;
	while (getline(input,linea))
	{
	if (strlen(linea.c_str())>10)
	{
	cout<<linea<<endl;
	}
	} 
	
}
