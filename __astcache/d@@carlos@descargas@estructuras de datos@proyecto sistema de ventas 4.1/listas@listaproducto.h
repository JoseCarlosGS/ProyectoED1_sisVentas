//---------------------------------------------------------------------------

#ifndef ListaProductoH
#define ListaProductoH
#include <iostream>
#include <string>
#include <vcl.h>

using namespace std;
struct datoprod{
	AnsiString nombre;
	int codigo;
	int cantidad;
};
struct NodoPr {
	datoprod info;
	NodoPr* sig;
};

class ListaPr{
private:
	NodoPr* ptrElementos;
	int longi;

public:
	ListaPr();
	NodoPr* fin();
	NodoPr* primero();
	NodoPr* siguiente(NodoPr*);
	NodoPr* anterior(NodoPr*);
	bool vacia();
	void recupera(NodoPr*, int& codigo, AnsiString& nom, int& cantidad);
	int longitud();
	void inserta(NodoPr*, int e, AnsiString n, int cantidad);
	void inserta_primero(int e, AnsiString n, int cantidad);
	void inserta_ultimo(int e, AnsiString n, int cantidad);
	void suprime(NodoPr*);
	void modifica(NodoPr*, int e, AnsiString n,int cantidad);
	//string toStr();
};
#endif
