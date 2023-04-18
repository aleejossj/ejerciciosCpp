#include <iostream>

using namespace std;

int main() {
    string nombreCompleto1 = "";
    string nombreCompleto2 = "";

    cout << "Ingrese su nombre y apellido\n";
    cin >> nombreCompleto1;
    cout << "Ingrese de nuevo su nombre y apellido\n";
    getline(cin, nombreCompleto2);
    
	

    cout << "Datos ingresados con cin: " << nombreCompleto1 << "\n";
    cout << "Datos ingresados con getline: " << nombreCompleto2 << "\n";
}
