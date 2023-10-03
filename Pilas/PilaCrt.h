//---------------------------------------------------------------------------
#include<vcl.h>
#ifndef PilaCrtH
#define PilaCrtH
#include <iostream>
#include <string>
//---------------------------------------------------------------------------
using namespace std;
struct venta{
	int codigo;
	int cantidad;
	int preciounit;
	int subtotal;
	AnsiString nombre;
};
struct NodoCR{
	venta datos;
	NodoCR *sig;
};
class PilaCrt{
	private:
	  int tamaño;
	  NodoCR *nuevo_nodo;
	  NodoCR *PtrNodo;
	//  int *ptrElemento;
	public:
	  PilaCrt();
	  bool Vacia();
	  venta Cima();
	  void meter(int codigo, int cantidad, int precio, AnsiString nom);
	  void sacar(int &codigo, int &cantidad, int &precio, int &sub, AnsiString& nom);
	  void to_string();
      int tam();
};

#endif
