#include <iostream>
using namespace std;

class fecha{
  public:
    int dia;
    int mes;
    int anio;
    //metodos
    void mostrarFecha();
    fecha (int,int,int);
    fecha (long);
};

fecha::fecha(int _dia, int _mes, int _anio){
    dia=_dia;
    mes=_mes;
    anio=_anio;
};

fecha::fecha(long Fecha) //dia(2), mes(2), anio(4) 11032023
{
    dia = Fecha / 1000000;  
    mes = Fecha / 10000 -1000;
    anio = Fecha % 10000;
};

void fecha::mostrarFecha(){
    cout<<"dia / mes / anio : "<<dia<<" / "<<mes<<" / "<<anio<<"\n";  
};

main()
{
    fecha hoy(11,03,2023);
    hoy.mostrarFecha();
    fecha ayer(10032023);
    ayer.mostrarFecha();
}


