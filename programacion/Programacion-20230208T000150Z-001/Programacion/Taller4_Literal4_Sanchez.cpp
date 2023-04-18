#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct Libro
{
	string isbn;
    string nombre;
    float pdc;
    float pdv;
    int cantidad;
   

};
void libros (Libro libro)
{
	
    fstream app;
    app.open("Catalogo.csv",ios::app);
    app<<"ISBN "<<libro.isbn<<","<<libro.nombre<<","<<libro.pdc<<","<<libro.pdv<<","<<libro.cantidad<<endl;
}
int main ()
{
	
    Libro libro;
    int opc;

cout<<"1. Registrar un libro en el catalogo.\n";
cout<<"2. Eliminar un libro del catalogo.\n";
cout<<"3. Buscar un libro por titulo.\n";
cout<<"4. Buscar un libro por ISBN.\n";
cout<<"5. Abastecer ejemplares de un libro.\n";
cout<<"6. Vender ejemplares de un libro.\n";
cout<<"7. Calcular la cantidad de transacciones de abastecimiento de un libro particular.\n";
cout<<"8. Buscar el libro mas costoso.\n";
cout<<"9. Buscar el libro menos costoso.\n";
cout<<"10. Buscar el libro mas vendido.\n";
cout<<"Digite la opcion que desea hacer\n";
cin>>opc;
    system("cls");
    
switch(opc)
{
	case 1:
		cout<<"Digite el ISBN del libro\n";
		cin>>libro.isbn;	
		cout<<"Digite el nombre del libro\n";
		cin>>libro.nombre;
		cout<<"Digite el precio de compra del libro\n";
		cin>>libro.pdc;		
		cout<<"Digite el precio de venta del libro\n";
		cin>>libro.pdv;		
	break;
		

}
	
  


}
