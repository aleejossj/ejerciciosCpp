#include <iostream>
#include<fstream>
#include <sstream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
struct Libro
{
	string isbn;
    string nombre;
    string pdc;
    string pdv;
    int cantidad;
    int cantidadt;
   

};
void libros (Libro libro)
{
	
    fstream app;
    app.open("Catalogo.csv",ios::app);
    libro.cantidadt=libro.cantidad;
	app<<libro.isbn<<","<<libro.nombre<<","<<libro.pdc<<","<<libro.pdv<<","<<libro.cantidad<<","<<libro.cantidadt<<endl;
}
void eliminar ()
{
	string isbnl,isbn1;
    Libro libro;
	cout<<"Digite el isbn del libro que quiere eliminar\n";
		cin>>isbnl;
        bool existe = false;
        //string ctlc;
		vector<string>ctlc;
		 ifstream archivo;
		 archivo.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream       
        
        getline(stream,libro.isbn, delimitador);
        getline(stream,libro.nombre, delimitador);
        getline(stream,libro.pdc, delimitador);
		//getline(stream,libro.pdv, delimitador);
		if(isbnl.compare(libro.isbn) == 0) existe = true;
            else ctlc.push_back(linea);
    }//fin del while

        archivo.close();

        if(existe==true)
			{
            ofstream nuevo("Catalogo.csv");
            
            for(int i = 0; i < int(ctlc.size()); i++){
            
                nuevo<<ctlc[i]<<endl;
            }
            nuevo.close();
            cout<<"Se elimino el libro"<<endl<<endl;
        }else
		{
            cout<<"El libro con el isbn  "<<isbnl<<" no existe en el archivo"<<endl<<endl;
        }
}
void btitulo ()
{
	string titulo;
    Libro libro;
	cout<<"Digite el titulo del libro que quiere buscar\n";
		cin>>titulo;
        bool existe = false;
        //string ctlc;
		vector<string>ctlc;
		 ifstream arc;
		 arc.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(arc, linea);
    // Leemos todas las líneas
    while (getline(arc, linea))
    {

        stringstream h(linea); // Convertir la cadena a un stream       
        
        getline(h,libro.isbn, delimitador);
        getline(h,libro.nombre, delimitador);
        getline(h,libro.pdc, delimitador);
		//getline(stream,libro.pdv, delimitador);
	
		if(titulo == libro.nombre) 
		{

			cout<<"ISBN: "<<libro.isbn<<endl;
			cout<<"Nombre: "<<libro.nombre<<endl;
		
		}
		
	}	
         
    
       
 

        arc.close();

       
          
}
void bisbn ()
{
	string isbn;
    Libro libro;
	cout<<"Digite el titulo del libro que quiere buscar\n";
		cin>>isbn;
        bool existe = false;
        //string ctlc;
		vector<string>ctlc;
		 ifstream arc;
		 arc.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(arc, linea);
    // Leemos todas las líneas
    while (getline(arc, linea))
    {

        stringstream h(linea); // Convertir la cadena a un stream       
        
        getline(h,libro.isbn, delimitador);
        getline(h,libro.nombre, delimitador);
        getline(h,libro.pdc, delimitador);
		getline(h,libro.pdv, delimitador);
	
		if(isbn == libro.isbn) 
		{

			cout<<"ISBN: "<<libro.isbn<<endl;
			cout<<"Nombre: "<<libro.nombre<<endl;
		
		}
		
	}	
         
    
       
 

        arc.close();

       
          
}
void abastecer ()
{
	string isbnl;
    Libro libro;
    int cl;
	cout<<"Digite el isbn del libro que quiere abastecer\n";
		cin>>isbnl;
	cout<<"Cantidad de libros a abastecer\n";
	cin>>cl;
        bool existe = false;
        //string ctlc;
		vector<string>ctlc;
		 ifstream arc;
		 arc.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(arc, linea);
    // Leemos todas las líneas
    while (getline(arc, linea))
    {

        stringstream h(linea); // Convertir la cadena a un stream       
        
        getline(h,libro.isbn, delimitador);
        getline(h,libro.nombre, delimitador);
        getline(h,libro.pdc, delimitador);
		getline(h,libro.pdv, delimitador);


		if(isbnl == libro.isbn) 
		{
			libro.cantidad=3;
			libro.cantidad=libro.cantidad+cl;
			libro.cantidadt=libro.cantidadt+cl;
			cout<<"ISBN: "<<libro.isbn<<endl;
			cout<<"Nombre: "<<libro.nombre<<endl;
			cout<<"Cantidad"<<libro.cantidad<<endl;
		
		}
		
	}	
         
    
       
 

        arc.close();

       
          
}
void vender()
{
	string isbnl;
    Libro libro;
    int cl;
	cout<<"Digite el isbn del libro que quiere vender\n";
		cin>>isbnl;
	cout<<"Digite la cantidad de libros que quiere vender\n";
	cin>>cl;
        bool existe = true;
        //string ctlc;
		vector<string>ctlc;
		 ifstream archivo;
		 archivo.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream       
        
        getline(stream,libro.isbn, delimitador);
        getline(stream,libro.nombre, delimitador);
        getline(stream,libro.pdc, delimitador);
		getline(stream,libro.pdv, delimitador);
		if(isbnl == libro.isbn)
		{
			libro.cantidad=3
			;
			libro.cantidad=libro.cantidad-cl;
			cout<<"ISBN: "<<libro.isbn<<endl;
			cout<<"Nombre: "<<libro.nombre<<endl;
			cout<<"Precio de compra: "<<libro.pdc<<endl;
			cout<<"Precio de venta: "<<libro.pdv<<endl;
			cout<<"Cantidad: "<<libro.cantidad<<endl;
		
		}

	}
       
 
		
        archivo.close();
}
void transacciones()
{
	string isbnl;
    Libro libro;
    int cl;
	cout<<"Digite el isbn del libro que quiere ver la cantidad de transacciones de abastecimiento\n";
		cin>>isbnl;
        bool existe = false;
        //string ctlc;
		vector<string>ctlc;
		 ifstream archivo;
		 archivo.open("Catalogo.csv",ios::in);
    string linea;
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream       
        
        getline(stream,libro.isbn, delimitador);
        getline(stream,libro.nombre, delimitador);
        getline(stream,libro.pdc, delimitador);
		//getline(stream,libro.pdv, delimitador);


		if(isbnl == libro.isbn)
		{
			libro.cantidadt=3;
			cout<<"Cantidad de transacciones: "<<libro.cantidadt<<endl;
			
		}
	
	
   }
 
		
        archivo.close();
}

    

int main ()
{
	string isbnl,isbn1;
    Libro libro;
    int opc,uno;
uno:
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
cout<<"11.Salir\n";
cout<<"Digite la opcion que desea hacer\n";
cin>>opc;
    system("cls");
    
switch(opc)
{
	case 1:
		cout<<"Digite el ISBN del libro\n";
		cin>>libro.isbn;	
		cout<<"Digite el nombre del libro (Use _ para los espacios en el nombre )\n";
		cin>>libro.nombre;
		cout<<"Digite el precio de compra del libro\n";
		cin>>libro.pdc;		
		cout<<"Digite el precio de venta del libro\n";
		cin>>libro.pdv;	
		cout<<"Digite la cantidad de libros \n";
		cin>>libro.cantidad;
		libro.cantidadt=1;	
		libros(libro);	
		system("cls");
goto uno;	break;
	
	case 2:
		eliminar();
   	break;
   	case 3:
   		btitulo();
   	break;
    case 4:
    	bisbn();
    break;
    case 5:
    	abastecer();
    break;
    case 6:
    	vender();
    break;
    case 7:
    	transacciones();
    break;
    case 8:
    
    break;	
    case 9:
    	
    break;
    case 10:
    	
    break;
    case 11:
    	
    break;
    	
}
  


}


