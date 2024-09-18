//
// Created by mbermejo on 18/09/2024.
//

#ifndef INC_05_PROYECTO_UFUNCIONES_H
#define INC_05_PROYECTO_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace  std;

typedef int TEntero;
const TEntero MAX = 15;


void llenarDatos(TEntero  *pA ,  int n);
void   imprimirArreglo(TEntero *pA, int n);
TEntero  hallaMayor(TEntero  *pA, TEntero  n);
void  rotarAlaIzquierda(TEntero *pA, TEntero n);

#endif //INC_05_PROYECTO_UFUNCIONES_H
