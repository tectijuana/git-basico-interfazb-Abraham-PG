// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 30
 *
 * Convertir P libras inglesas a D dolares y C centavos.
 * Usar el tipo de cambio $2.80 = libra.
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
		double resD, resC, D = 2.80, C = 0.010, P;
		cout << "Alimnete el numero de libras inglesas a convertir: ";
		cin >> P;
		resD = P / D;
		resC = resD / C;
		cout << "El resultado es : " << resD << " Dolares" << endl;
		cout << "El resultado es : " << resC << " Centavos" << endl;

	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
