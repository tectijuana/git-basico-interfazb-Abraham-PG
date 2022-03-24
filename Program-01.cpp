// 1.- Librerias
#include <iostream>
#include <iomanip>
using namespace std;

/**
 * 2.- Problema 21
 *
 * DE dos numeros cualquier quiera, encontraar la suma e indicar si es 
 * positiva, negativa o cero.
 * 
 * 3.- Autor y fecha
 * @Autor    Abraham-PG
 * @Date     24 Marzo 2022
 **/

 // 4.- Funciones y Procedimientos
class Operaciones
{
public:
    void Operacion ()
    {

        int n, u,sum;
        cout << "Alimente un numero: ";
        cin >> n;
        cout << "Alimente un numero: ";
        cin >> u;

        sum = n + u;

        if (sum > 0)  cout << "El numero es positivo.";
        else if (sum < 0) cout << "El numero es negativo.";
        else
        {
            cout << "El numero es cero";
        }
    }
};
// 5.- Main
int main()
{
    Operaciones obj;
    obj.Operacion();
  
    return 0;
}




