#include <iostream>;
using namespace std;

struct ganancias{
	//atributos
	float x, y;
	//métodos o funciones
	float g (float,float);
	
};
float ganancias :: g (float x, float y)
{
	x=y*0.02;
	
	return x;
};

int main()
{
	/*Suponga que un individuo desea invertir su capital en un banco y desea saber cuánto dinero
ganara después de un mes si el banco paga a razón de 2% mensual.*/
float dinero,x;
ganancias ganancia;
cout<<"Digite la cantidad de dinero que va invertir en el banco\n";
cin>>dinero;



cout<<"La ganancia que usted tendra en un mes es de: "<<ganancia.g(x,dinero)<<endl;

}
