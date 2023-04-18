#include <iostream>;
using namespace std;

struct estudiantes{
	double hombres,mujeres,total,porcentajeh,porcentajem;
};
int main()
{
	/*Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo
de estudiantes.*/

double hombres,mujeres,total,porcentajeh,porcentajem;

cout<<"Digite la cantidad de hombres que hay en el salon\n";
cin>>hombres;
cout<<"Digite la cantidad de mujeres que hay en el salon\n";
cin>>mujeres;

total=hombres+mujeres;

porcentajeh=(hombres*100)/total;
porcentajem=(mujeres*100)/total;


cout<<"El porcentaje de hombres en el salon es: "<<porcentajeh<<endl;
cout<<"El porcentaje de muejeres en el salon es: "<<porcentajem<<endl;

}
