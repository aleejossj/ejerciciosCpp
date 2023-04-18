#include <iostream>;
using namespace std;
struct articulos{
	double p,g;
};
int main()
{
	/*El dueño de una tienda compra un artículo a un precio determinado. Obtener el precio en que
lo debe vender para obtener una ganancia del 30%.*/

double p,g;

cout<<"Digite el precio del producto\n";
cin>>p;
g=p*0.3;
g=p+g;
cout<<"El precio al que debe vender el producto es: "<<g<<endl;



}
