// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/** 
 * 2.- Problema 25
 *
 * La tabla sigueinte muestra las potencias cuartas de los numeros del 1 al 5.
 * Calcular e imprimir una tabla similar que contenga las potencias cuartas
 * de los primeros cincuenta enteros.
 *
 * Numeros         Potencias cuartas
 *    1                    1
 *    2                    16
 *    3                    81
 *    4                    256
 *    5                    625

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
		int potenciaC;

		cout << "     Numeros     " << "   Potencias cuartas" << "\n";
		for (int i = 1; i <= 50; i++)
		{
			potenciaC = pow(i, 4);
			cout << setw(9) << i << setw(20) << potenciaC << "\n";
		}
		
	}
};
// 5.- Main
	int main()
	{
		Operaciones obj;
		obj.Operacion();
	}
