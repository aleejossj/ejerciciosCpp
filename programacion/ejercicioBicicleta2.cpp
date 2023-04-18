#include <iostream>

using namespace std;

class Bicicleta {
public:
  
    Bicicleta(int velocidadInicial, int platoInicial, int pinionInicial) {
        velocidadActual = velocidadInicial;
        platoActual = platoInicial;
        pinionActual = pinionInicial;
    }

  
    void acelerar() {
        velocidadActual *= 2;
    }

    void frenar() {
        velocidadActual /= 2;
    }

    void cambiarPlato(int plato) {
        platoActual = plato;
    }

    void cambiarPinion(int pinion) {
        pinionActual = pinion;
    }


    int VelocidadActual() {
        return velocidadActual;
    }

    int PlatoActual() {
        return platoActual;
    }

    int PinionActual() {
        return pinionActual;
    }

private:
    int velocidadActual;
    int platoActual;
    int pinionActual;
};

int main() {
 
    Bicicleta miBicicleta(10, 3, 5);
    Bicicleta tuBicicleta(15, 2, 6);


    miBicicleta.acelerar();
    tuBicicleta.frenar();
    miBicicleta.cambiarPlato(2);
    tuBicicleta.cambiarPinion(4);


    cout << "Mi bicicleta: " << miBicicleta.VelocidadActual() << "km/h, Plato: " << miBicicleta.PlatoActual() << ", Piñon: " << miBicicleta.PinionActual() << endl;
    cout << "Tu bicicleta: " << tuBicicleta.VelocidadActual() << "km/h, Plato: " << tuBicicleta.PlatoActual() << ", Piñon: " << tuBicicleta.PinionActual() << endl;

    return 0;
}

