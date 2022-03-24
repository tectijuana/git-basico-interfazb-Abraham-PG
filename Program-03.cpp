// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 26
 *
 * Impirmir una tabla de raices cuadradas de los numeros:
 * 100,101,102,...,120
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
		 double raiz;

		cout << "     Numeros     " << "   Raices Cuadradas" << "\n";
		for (int i = 100; i <= 120; i++)
		{
			raiz = sqrt(i);
			cout << setw(10) << i << setw(21) << raiz << "\n";
		}

	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
