//---------------------------------------------------------------------------

#pragma hdrstop

#include "PilaCrt.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
using namespace std;
PilaCrt::PilaCrt(){
   PtrNodo=NULL;
   tama�o=0;
}
bool PilaCrt::Vacia(){
  if (tama�o==0) {
	 return true;
  }else return false;

}
venta PilaCrt::Cima(){
  //int n=nuevo_nodo;

  if (Vacia()) {
	 // cout<<"Pila Vacia"<<endl;
  }else {
	 return nuevo_nodo->datos;
  }

}
void PilaCrt::meter(int cod, int cantidad, int precio, AnsiString nom){
	 nuevo_nodo=new NodoCR();
	 nuevo_nodo->datos.codigo=cod;
	 nuevo_nodo->datos.cantidad=cantidad;
	 nuevo_nodo->datos.preciounit=precio;
	 nuevo_nodo->datos.subtotal=cantidad*precio;
	 nuevo_nodo->datos.nombre=nom;
	 nuevo_nodo->sig=PtrNodo;
	 PtrNodo= nuevo_nodo;
	 tama�o++;

}
void PilaCrt::sacar(int &cod, int &cantidad, int &precio, int &sub, AnsiString& nom){
   NodoCR* aux=PtrNodo;
   cod = aux->datos.codigo;
   cantidad = aux->datos.cantidad;
   precio = aux->datos.preciounit;
   sub = aux->datos.subtotal;
   aux->datos.nombre = aux->datos.nombre.TrimLeft();
   nom = aux->datos.nombre;
	if (!Vacia()) {
	  // el=nuevo_nodo->dato;
	   PtrNodo=aux->sig;
	   delete aux;
	   tama�o--;
	}
	else cout<<"Error: Pila vacia";
}
int PilaCrt::tam(){
  return tama�o;
}


