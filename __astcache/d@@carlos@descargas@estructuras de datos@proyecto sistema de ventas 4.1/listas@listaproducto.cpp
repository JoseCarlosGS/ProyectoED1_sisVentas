﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "ListaProducto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iostream>
#include <string>
using namespace std;
ListaPr::ListaPr() {
	longi = 0;
	ptrElementos = NULL;
}
NodoPr* ListaPr::fin() {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		NodoPr* ptrFin=NULL;
		NodoPr* x = ptrElementos;
		while (x != NULL) {
			ptrFin = x;
			x = x->sig;
		}
		return ptrFin;
	}
}
NodoPr* ListaPr::primero() {
	if (!this->vacia()) {
		return ptrElementos;
	}
	else {
		return NULL;
		// cout << "LISTA VACIA\n";
	}
}
NodoPr* ListaPr::siguiente(NodoPr* p) {
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
NodoPr* ListaPr::anterior(NodoPr* p) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else if (p == primero()) {
		cout << "DIRECCION INCORRECTA\n";
	}
	else {
		NodoPr* x = ptrElementos;
		NodoPr* ant = NULL;
		while (x != NULL) {
			if (x == p) {
				return ant;
			}
			ant = x;
			x = x->sig;
		}
	}
}
bool ListaPr::vacia() {
	return longi == 0; // ptrElementos == NULL;
}
void ListaPr::recupera(NodoPr* p, int& cod ,AnsiString& inf, int& cant) {
	if (this->vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		inf = p->info.nombre;
		cod = p->info.codigo;
		cant = p->info.cantidad;
	}
}
int ListaPr::longitud() {
	return longi;
}
void ListaPr::inserta(NodoPr* p, int e, AnsiString n, int cant) {
	NodoPr* x = new NodoPr;
	if (x != NULL) {
		x->info.codigo = e;
		x->info.nombre = n;
		x->info.cantidad = cant;
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
				NodoPr* ant = anterior(p);
				ant->sig = x;
				x->sig = p;
			}
		}
	}
}
void ListaPr::inserta_primero(int e, AnsiString n, int cant)
{
NodoPr* x= new NodoPr;
if(x!=NULL)
{
	x->info.codigo = e;
	x->info.nombre = n;
	x->info.cantidad = cant;
	x->sig=ptrElementos;
	longi++;
	ptrElementos=x;
}
}
void ListaPr::inserta_ultimo(int e, AnsiString n, int cant) {
	NodoPr* x = new NodoPr;
if(x!=NULL)
{
	x->info.codigo = e;
	x->info.nombre = n;
	x->info.cantidad = cant;
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
void ListaPr::suprime(NodoPr* p) {
	if (longi == 0) {
		cout << "LISTA VACIA\n";
		return;
	}
	else if (p == ptrElementos) {
		NodoPr*x = ptrElementos;
		ptrElementos = ptrElementos->sig;
		delete(x);
	}
	else {
		NodoPr* ant = anterior(p);
		ant->sig = p->sig;
		delete(p);
	}
	longi--;
}
void ListaPr::modifica(NodoPr* p, int e,AnsiString n, int cant) {
	if (vacia()) {
		cout << "LISTA VACIA\n";
	}
	else {
		p->info.codigo = e;
		p->info.nombre = n;
		p->info.cantidad = cant;
	}
}
/*string ListaPr::toStr() {
	string r = "Lista: <";
	NodoPr* x = ptrElementos;
	while (x != NULL) {
		r += to_string(x->info.codigo);
		r += x->info.nombre;
		r += to_string(x->info.cantidad);
		if (x->sig != NULL)
			r += ",";
		x = x->sig;
	}
	r = r + ">";
	return r;
} */





