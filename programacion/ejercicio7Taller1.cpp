#include <iostream>;
using namespace std;
struct conversion{
	double pesos,pDolar,dolares;
};
int main()
{
	/*Dada una cantidad en pesos, obtener la equivalencia en dólares, asumiendo que la unidad
cambiaría es un dato desconocido.*/

double pesos,pDolar,dolares;

cout<<"Digite la cantidad de pesos que quiere saber su precio en dolares\n";
cin>>pesos;
cout<<"Digite el precio del dolar de hoy\n";
cin>>pDolar;

dolares=pesos/pDolar;

cout<<pesos<<" pesos son "<<dolares<<" dolares"<<endl;


}
