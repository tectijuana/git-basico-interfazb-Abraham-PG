// 1.- Librerias
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

/**
 * 2.- Problema 60
 *
 * Imprimir el valor absoluto de -6, 0, 25, -143, -42.
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
		int v1 = -6, v2 = 0, v3 = 25, v4 = -143, v5 = -42;
		
		
		 int va1 = abs(v1);
		 int va2 = abs(v2);
		 int va3 = abs(v3);
		 int va4 = abs(v4);
		 int va5 = abs(v5);

		cout << "El valor absoluto de: " << v1 << " es: " << va1 << endl;
		cout << "El valor absoluto de: " << v2 << " es: " << va2 << endl;
		cout << "El valor absoluto de: " << v3 << " es: " << va3 << endl;
		cout << "El valor absoluto de: " << v4 << " es: " << va4 << endl;
		cout << "El valor absoluto de: " << v5 << " es: " << va5 << endl;
		
	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
