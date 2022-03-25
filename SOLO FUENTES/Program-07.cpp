// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 34
 *
 * Determinar si la suma de 3^1974 + 3^1974 + 3^1974 es igual a 3^1975.
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
		int suma, s1, s2, s3, s4;
		s1 = pow(3, 1974);
		s2 = pow(3, 1974);
		s3 = pow(3, 1974);
		suma = s1 + s2 + s3;
		s4 = pow(3, 1975);

		cout << " La suma es: " << suma << "  Iteracion a evaluar: " << s4 << endl << endl;
		cout << "Se concluye que 3^1974 + 3^1974 + 3^1974 es igual a 3^1975...";
	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
