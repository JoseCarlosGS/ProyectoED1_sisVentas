﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "PilaHs.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
using namespace std;
PilaProd::PilaProd(){
   PtrNodo=NULL;
   tamaño=0;
}
bool PilaProd::Vacia(){
  if (tamaño==0) {
	 return true;
  }else return false;

}
producto PilaProd::Cima(){
  int n=9;
  //int n=nuevo_nodo;

  if (Vacia()) {
	 // cout<<"Pila Vacia"<<endl;
  }else {
	 return nuevo_nodo->datos;
  }

}
void PilaProd::meter(int cod, AnsiString nombre, int cantidad){
	 nuevo_nodo=new NodoPP();
	 nuevo_nodo->datos.codigo=cod;
	 nuevo_nodo->datos.nombre=nombre;
	 nuevo_nodo->datos.cantidad=cantidad;
	 nuevo_nodo->sig=PtrNodo;
	 PtrNodo= nuevo_nodo;
	 tamaño++;

}
void PilaProd::sacar(int &cod, AnsiString &nombre, int &cantidad){
   NodoPP* aux=PtrNodo;
   cod=aux->datos.codigo;
   nombre=aux->datos.nombre;
   cantidad=aux->datos.cantidad;
	if (!Vacia()) {
	  // el=nuevo_nodo->dato;
	   PtrNodo=aux->sig;
	   delete aux;
	}
	else cout<<"Error: Pila vacia";
    tamaño--;
}


