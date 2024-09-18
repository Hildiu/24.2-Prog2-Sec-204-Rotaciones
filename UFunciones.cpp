//
// Created by mbermejo on 18/09/2024.
//

#include "UFunciones.h"


void llenarDatos(TEntero  *pA ,  int n)
{
    for(int i=0; i<n; i++)
        pA[i] = rand() % 100 + 1;
}

void   imprimirArreglo(TEntero *pA, int n)
{
 for(int i=0; i<n; i++)
     cout<< setw(5) << i;
 cout << "\n";

 for(int i=0; i<n; i++)
     cout << setw(5) << pA[i];
}


TEntero  hallaMayor(TEntero  *pA, TEntero  n)
{
   TEntero mayor = pA[0];
   for(int indice=1; indice <n ; indice++ )
       if( pA[indice]>mayor)
           mayor = pA[indice];
   return mayor;
}


void  rotarAlaIzquierda(TEntero *pA, TEntero n)
{
  TEntero auxiliar = pA[0];

  for(int indice=1; indice<n; indice++ )
      pA[indice-1] = pA[indice];
  pA[n-1] = auxiliar;
}