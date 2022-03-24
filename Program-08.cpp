// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 40
 *
 * Una pulgada equivale a 2.5 cm, calcular el numero de cm en 32 pulgadas.
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
		double centimetros = 2.5, multi;
		int pulgadas = 32;
		multi = 2.5 * 32;
		cout <<"El resuladado es: " << multi;
	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
