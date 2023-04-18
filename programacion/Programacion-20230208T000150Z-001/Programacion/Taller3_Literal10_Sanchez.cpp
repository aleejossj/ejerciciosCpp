#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{

string frase;

cout<<"Ingrese la frase: "<<endl;
cin >> frase;

int longitud = frase.length()-1;
int i=0;
bool es_palindromo = true;
for(i=0 ; i<frase.length()/2 && es_palindromo;i++)
{
if(frase[i]!=frase[ longitud-i])
{
es_palindromo = false;
}
}
cout<<((true == es_palindromo)? "es palindromo" : "no es palindromo")<<endl;

return 0;
}
