#include <iostream>;
using namespace std;
struct notas{
	double n,nota1p,nota2p,nota3p,examen,trabajoFinal,notaFinal;
};
int main()
{
	/*Un alumno desea saber cuál será su calificación final en la materia de Algoritmos. Dicha
calificación se compone de los siguientes porcentajes:
55% del promedio de sus tres calificaciones parciales.
30% de la calificación del examen final.
15% de la calificación de un trabajo final.*/
double n,nota1p,nota2p,nota3p,examen,trabajoFinal,notaFinal;

cout<<"Digite la nota que saco en el primer parcial\n";
cin>>nota1p;
cout<<"Digite la nota que saco en el segundo parcial\n";
cin>>nota2p;
cout<<"Digite la nota que saco en el tercer parcial\n";
cin>>nota3p;
cout<<"Digite la nota que saco en el examen final\n";
cin>>examen;
cout<<"Digite la nota que saco en el trabajo final\n";
cin>>trabajoFinal;

n=(nota1p+nota2p+nota3p)/3;
n=n*0.55;
examen=examen*0.3;
trabajoFinal=trabajoFinal*0.15;
notaFinal=n+examen+trabajoFinal;

cout<<"Su nota total es: "<<notaFinal;

}
