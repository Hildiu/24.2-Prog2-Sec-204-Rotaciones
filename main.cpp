/*------------------------------------------------------
 * Dato entrada: no tiene
 * Dato de Salida:  array
 *                  mayor
 *                  rotar una posicion a la izq
 *                  rotar una posicion a la derecha
 -----------------------------------------------------*/

#include "UFunciones.h"

int main()
{
  TEntero a[MAX];

  srand(time(nullptr));
  llenarDatos(a,MAX);
  imprimirArreglo(a, MAX);
  cout << "\n";
  cout << "El mayor valor del arreglo es: " << hallaMayor(a,MAX) << "\n";
  cout << "\n";
  cout << "\nRotamos una posicion a la izquierda\n";
  rotarAlaIzquierda(a,MAX);
  imprimirArreglo(a, MAX);
  return 0;
}
