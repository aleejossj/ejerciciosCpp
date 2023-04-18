#include <iostream>
using namespace std;

int main()
{
        string nombreCliente,nombreProducto;
        int cantProductos;
        float valorProducto = 0;
        cout<<"    SALARIO DEL TRABAJADOR   "<<endl;   
        cout<<"\n";        
        cout<<"Digite su nombre"<<endl;
        cin>>nombreCliente;
        cout<<"Digite la cantidad de productos que compro"<<endl;
        cin>>cantProductos;

        //salario=horasTrabajadas*valorHora;
        for(int i=1;i<=cantProductos;i++)
        {
            cout<<"Digite el nombre del producto (Para los espacios utilice_)"<<endl;
            cin>>nombreProducto;
            cout<<"Digite el precio del producto"<<endl;
            cin>>valorProducto;
            
        }
        cout<<"Nombre del usuario: "<<nombreCliente<<endl;
        cout<<"Cantidad de compras del usuario: "<<cantProductos<<endl;
        
        for(int j=1;j<=cantProductos;j++)
            {
            cout<<"Producto #"<<j<<endl;
            cout<<"\n";
            cout<<"Nombre del producto: "<<nombreProducto<<endl;
            cout<<"Precio del producto: "<<valorProducto<<endl;
            cout<<"\n";
            }
}
