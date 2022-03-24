// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 29
 *
 * Convertir dolares en forma decimal al equivalente en monedas.
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
		double dato,dolar,quarter=0.25;
		cout << "Alimente el numero de dolares a convertir: ";
			cin >> dolar;
			dato = dolar / quarter;
			cout << "El resultado es : " << dato << " quarter";

	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
