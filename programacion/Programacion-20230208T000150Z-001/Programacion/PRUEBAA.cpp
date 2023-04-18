#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#define nombre_archivo "Libros.csv"
using namespace std;
struct Libros
{
    string isbn;
    string Nombre;
    string precio_compra;
    string precio_venta;
    string cantidad;
};

    void abrir (Libros llenar)
    {

        fstream abrir;
        abrir.open("data.csv",ios::app);
        abrir<<llenar.isbn<<","<<llenar.Nombre<<","<<llenar.precio_compra<<","<<llenar.precio_venta<<","<<llenar.cantidad<<endl;
    }

    void Leer (Libros leer)
    {

        ifstream data;
        string linea;
        char delimitador = ',';
        getline (data,linea);

        while (getline (data,linea))
        {
            stringstream stream(linea);

            getline (stream,leer.isbn,delimitador);
            cout<<leer.isbn<<endl;
            getline (stream,leer.Nombre,delimitador);
            cout<<leer.Nombre<<endl;
            getline (stream,leer.precio_compra,delimitador);
            cout<<leer.precio_compra<<endl;
            getline (stream,leer.precio_venta,delimitador);
            cout<<leer.precio_venta<<endl;
            getline (stream,leer.cantidad,delimitador);
            cout<<leer.cantidad<<endl;
/*    data.open("data.csv",ios::in);
            cout<< "------------------------"<<endl;
            cout<< "ISBN: "<< isbn<<endl;
            cout<< "Precio de compra: "<<precio_compra<<endl;
            cout<< "Precio venta: "<<precio_venta<<endl;
            cout<< "Cantidad: "<<Cantidad<<endl;*/

        }
        data.close();


    }

int main ()

{
    int opc;


    cout<<"Bienvenido a la biblioteca, elija que transaccion desea emplear :"<<endl;
    cout<<"1. Registar un libro en el catalogo "<<endl;
    cout<<"2. Eliminar un libro del catalogo "<<endl;
    cout<<"3. Buscar un libro por titulo "<<endl;
    cout<<"4. Buscar un libro por el ISBN"<<endl;
    cout<<"5. Abastecer ejemplares de un libro"<<endl;
    cout<<"6. Vender ejemplares de un libro"<<endl;
    cout<<"7. Calcular la cantidad de trasacciones de abastecimiento de un libro en particular"<<endl;
    cout<<"8. Buscar el libro mas costoso"<<endl;
    cout<<"9. Buscar el libro menos costoso"<<endl;
    cout<<"10. Buscar el libro mas vendido"<<endl;
    cin>>opc;
    system ("Cls");
    fstream Libro;
    Libros llenar;
    Libros leer;
    switch (opc)
{
            // Se puede regitrar un nuevo libro
        case 1:


        cout<<"Para registrar un nuevo libro en el catalogo tiene que ser con el siguiente orden : "<<endl;
        cout<<"ISBN"<<endl;
        cin>>llenar.isbn;
        cout<<"Nombre"<<endl;
        cin>>llenar.Nombre;
        cout<<"Precio de Compra"<<endl;
        cin>>llenar.precio_compra;
        cout<<"Precio de Venta"<<endl;
        cin>>llenar.precio_venta;
        cout<<"Cantidad"<<endl;
        cin>>llenar.cantidad;

        abrir (llenar);

        break;

        case 2:
        Leer (leer);




    }
}
