// 1.- Librerias
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

/**
 * 2.- Problema 42
 *
 * Convertir libras y onzas a kilogramos.
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
		double libras, onzas, kilogramos;
		int opcion;
		cout << "1.- Libras a Kilogramos" << endl;
		cout << "2.- Onzas a Kilogramos" << endl;
		cout << "Alimente una opcion: ";
		cin >> opcion;
		system("cls");
		switch (opcion)
		{
		case 1:
			cout << "Digite libras a convertir: ";
			cin >> libras;
			kilogramos = libras / 2.2;
			cout << "Su resultado es: " << kilogramos << " Kilogramos...";

			break;
		case 2:
			cout << "Digite libras a convertir: ";
			cin >> onzas;
			kilogramos = onzas / 35.2;
			cout << "Su resultado es: " << kilogramos << " Kilogramos...";
			break;

		default:
			break;
		}
	}
};
// 5.- Main
int main()
{
	Operaciones obj;
	obj.Operacion();
}
