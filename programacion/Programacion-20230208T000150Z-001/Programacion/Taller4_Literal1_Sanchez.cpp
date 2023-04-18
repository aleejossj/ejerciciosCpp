#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
struct automovil
{
string marca;
string modelo;
string color;
int cilindraje;
};

void carro (automovil carro1)
{
cout<<"----------+----------------+\n";
cout<<"Marca     |";
cout<<carro1.marca<<endl;
cout<<"----------+----------------+\n";
cout<<"Modelo    |";
cout<<carro1.modelo<<endl;
cout<<"----------+----------------+\n";
cout<<"Color     |";
cout<<carro1.color<<endl;
cout<<"----------+----------------+\n";
cout<<"Cilindraje|";
cout<<carro1.cilindraje<<endl;
cout<<"----------+----------------+\n";
}
int main ()
{
automovil carro1;
cout<<"Este programa es para almacenar datos en una estructura y mostrarlos como una tabla\n";
cout<<"Digite la marca del carro\n";
cin>>carro1.marca;
cout<<"Digite el modelo del carro\n";
cin>>carro1.modelo;
cout<<"Digite el color del carro\n";
cin>>carro1.color;
cout<<"Digite el cilindraje del carro\n";
cin>>carro1.cilindraje;
system("cls");
cout<<"Esta es la tabla con los datos de su carro\n";
carro(carro1);

return 0;
}
