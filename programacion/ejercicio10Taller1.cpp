#include <iostream>;
using namespace std;
struct inversion{
	double p1,p2,p3,t;
};
int main()
{
	/*Tres personas deciden invertir su dinero para fundar una empresa. Cada una de ellas invierte
una cantidad distinta. Obtener el porcentaje que cada quien invierte con respecto a la cantidad
total invertida*/

double p1,p2,p3,t;

cout<<"Digite la cantidad que va a invertir la primera persona\n";
cin>>p1;
cout<<"Digite la cantidad que va a invertir la segunda persona\n";
cin>>p2;
cout<<"Digite la cantidad que va a invertir la tercer persona\n";
cin>>p3;

t=p1+p2+p3;

p1=(p1*100)/t;
p2=(p2*100)/t;
p3=(p3*100)/t;
cout<<"Este es el porcentaje que invirtio la primera persona "<<p1<<"%\n";
cout<<"Este es el porcentaje que invirtio la segunda persona "<<p2<<"%\n";
cout<<"Este es el porcentaje que invirtio la tercer persona "<<p3<<"%\n";
}
