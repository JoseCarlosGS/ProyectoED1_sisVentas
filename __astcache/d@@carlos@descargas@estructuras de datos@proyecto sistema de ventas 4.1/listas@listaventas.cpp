//---------------------------------------------------------------------------

#pragma hdrstop

#include "ListaVentas.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
#include <string>
using namespace std;
ListaVent::ListaVent() {
	longi = 0;
	ptrElementos = NULL;
}
NodoVent* ListaVent::fin() {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		NodoVent* ptrFin=NULL;
		NodoVent* x = ptrElementos;
		while (x != NULL) {
			ptrFin = x;
			x = x->sig;
		}
		return ptrFin;
	}
}
NodoVent* ListaVent::primero() {
	if (!this->vacia()) {
		return ptrElementos;
	}
	else {
		return NULL;
		// cout << "LISTA VACIA\n";
	}
}
NodoVent* ListaVent::siguiente(NodoVent* p) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else if (p== fin())
	 {
        return NULL;
	 }
	  else {
		return p->sig;
	  }
}
NodoVent* ListaVent::anterior(NodoVent* p) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else if (p == primero()) {
		cout << "DIRECCION INCORRECTA\n";
	}
	else {
		NodoVent* x = ptrElementos;
		NodoVent* ant = NULL;
		while (x != NULL) {
			if (x == p) {
				return ant;
			}
			ant = x;
			x = x->sig;
		}
	}
}
bool ListaVent::vacia() {
	return longi == 0; // ptrElementos == NULL;
}
void ListaVent::recupera(NodoVent* p, int& num, int& cod, int& m, AnsiString& f) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		num = p->info.numeroventa;
		cod = p->info.codcliente;
		m = p->info.monto;
		f = p->info.fecha;
	}
}
int ListaVent::longitud() {
	return longi;
}
void ListaVent::inserta(NodoVent* p, int num, int cod, int m, AnsiString f) {
	NodoVent* x = new NodoVent;
	if (x != NULL) {
		x->info.codcliente = cod;
		x->info.numeroventa = num;
		x->info.monto= m;
		x->info.fecha = f;
		x->sig = NULL;
		if (vacia()) {
			ptrElementos = x;
			longi = 1;
		}
		else {
			longi++;
			if (p == primero()) {
				x->sig = p;
				ptrElementos = x;
			}
			else {
				NodoVent* ant = anterior(p);
				ant->sig = x;
				x->sig = p;
			}
		}
	}
}
void ListaVent::inserta_primero(int num, int cod, int m, AnsiString f)
{
NodoVent* x= new NodoVent;
if(x!=NULL)
{
	x->info.codcliente = cod;
	x->info.numeroventa = num;
	x->info.monto = m;
	x->info.fecha = f;
	x->sig=ptrElementos;
	longi++;
	ptrElementos=x;
}
}
void ListaVent::inserta_ultimo(int num, int cod, int m, AnsiString f) {
	NodoVent* x = new NodoVent;
if(x!=NULL)
{
	x->info.codcliente = cod;
	x->info.numeroventa = num;
	x->info.monto = m;
	x->info.fecha = f;
	x->sig=NULL;
	if(longi!=0)
	{
		fin()->sig=x;
	}
	else
	{
		ptrElementos=x;
	}
    longi++;
}
}
void ListaVent::suprime(NodoVent* p) {
	if (longi == 0) {
		cout << "LISTA VACIA\n";
		return;
	}
	else if (p == ptrElementos) {
		NodoVent*x = ptrElementos;
		ptrElementos = ptrElementos->sig;
		delete(x);
	}
	else {
		NodoVent* ant = anterior(p);
		ant->sig = p->sig;
		delete(p);
	}
	longi--;
}
void ListaVent::modifica(NodoVent* p, int num, int cod, int m, AnsiString f) {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		p->info.codcliente = cod;
		p->info.numeroventa = num;
		p->info.monto = m;
		p->info.fecha = f;
	}
}
string ListaVent::toStr() {
	string r = "Lista: <";
	NodoVent* x = ptrElementos;
	while (x != NULL) {
		r += to_string(x->info.numeroventa)+" ";
		r += to_string(x->info.codcliente)+" ";
		r += to_string(x->info.monto)+" ";
		r += x->info.fecha+" ";
		if (x->sig != NULL)
			r += ",";
		x = x->sig;
	}
	r = r + ">";
	return r;
}





