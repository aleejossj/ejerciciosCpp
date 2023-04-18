#include <iostream>
using namespace std;

class Bicicleta {
private:
    int velocidadActual;
    int platoActual;
    int pinionActual;
public:
    Bicicleta(int velocidad = 0, int plato = 1, int pinion = 1) {
        velocidadActual = velocidad;
        platoActual = plato;
        pinionActual = pinion;
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
    int getVelocidadActual() const {
        return velocidadActual;
    }
    int getPlatoActual() const {
        return platoActual;
    }
    int getPinionActual() const {
        return pinionActual;
    }
};

int main() {

    Bicicleta miBicicleta(10, 2, 3);
    Bicicleta tuBicicleta(15, 1, 2);

    miBicicleta.acelerar();
    tuBicicleta.cambiarPlato(3);
    miBicicleta.frenar();


    cout << "Velocidad de mi bicicleta: " << miBicicleta.getVelocidadActual() << endl;
    cout << "Plato de tu bicicleta: " << tuBicicleta.getPlatoActual() << endl;

    return 0;
}
