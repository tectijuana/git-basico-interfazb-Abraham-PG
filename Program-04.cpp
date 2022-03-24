// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 28
 *
 * Calcular la suma de las raices cuadradas de los números impares
 * que hay entre 1 y 1000.
 *
 * 3.- Autor y fecha
 * @Autor    Abraham-PG
 * @Date     24 Marzo 2022
 **/

 // 4.- Funciones y Procedimientos
class Operaciones
{
public:
	void Operacion()
	{
		double potenciaC=0;
		

		for (int i = 1; i <= 1000; i+=2)
		{
			potenciaC =sqrt(i)+potenciaC;
			
		}
		cout << "La suma de raices es: " << potenciaC << "\n";
	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
