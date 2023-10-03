//---------------------------------------------------------------------------

#ifndef ListaVentasH
#define ListaVentasH
#include <iostream>
#include <string>
//#include <vcl.h>

using namespace std;
struct datovent{
	int numeroventa;
	int codcliente;
	int monto;
	AnsiString fecha;

};
struct NodoVent {
	datovent info;
	NodoVent* sig;
};

class ListaVent{
private:
	NodoVent* ptrElementos;
	int longi;

public:
	ListaVent();
	NodoVent* fin();
	NodoVent* primero();
	NodoVent* siguiente(NodoVent*);
	NodoVent* anterior(NodoVent*);
	bool vacia();
	void recupera(NodoVent*, int& nume,int& cod, int& cantidad, AnsiString& fecha);
	int longitud();
	void inserta(NodoVent*, int nume,int cod, int cantidad, AnsiString fecha);
	void inserta_primero(int nume,int cod, int cantidad, AnsiString fecha);
	void inserta_ultimo(int nume,int cod, int cantidad, AnsiString fecha);
	void suprime(NodoVent*);
	void modifica(NodoVent*, int nume, int cod, int cantidad, AnsiString fecha);
	string toStr();
};
#endif
