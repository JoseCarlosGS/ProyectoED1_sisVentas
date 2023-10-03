//---------------------------------------------------------------------------
#include "vcl.h"
#ifndef PilaHsH
#define PilaHsH
#include <iostream>
#include <string>
//---------------------------------------------------------------------------
using namespace std;
struct producto{
	AnsiString nombre;
	int codigo;
	int cantidad;
};
struct NodoPP{
	producto datos;
	NodoPP *sig;
};
class PilaProd{
	private:
	  int tamaño;
	  NodoPP *nuevo_nodo;
      NodoPP *PtrNodo;
	//  int *ptrElemento;
	public:
	  PilaProd();
	  bool Vacia();
	  producto Cima();
	  void meter(int codigo, AnsiString nombre, int cantidad);
	  void sacar(int &codigo, AnsiString &nombre, int &cantidad);
	  void to_string();
};

#endif
