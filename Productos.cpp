//---------------------------------------------------------------------------

#pragma hdrstop

#include "Productos.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CProducto::CProducto(){
   l=new ListaPr();
   cantidad = 0;
}
int CProducto::generar_codigo(){
   return cantidad+1;
}
void CProducto::a�adir_producto(AnsiString nombre,int &codigo,int cant){
  codigo=generar_codigo();
   if (l->vacia()) {
	  l->inserta_primero(codigo,nombre,cant);
   }else {
	  l->inserta_ultimo(codigo,nombre,cant);
   }
   cantidad++;

}void CProducto::modificar(int codigo, AnsiString nombre){
   NodoPr* elem = l->primero();
   int c=0;
   int s=0;
   AnsiString n;
   for (int i=0; i < l->longitud(); i++) {
	 l->recupera(elem,c,n,s);
	 if (codigo == c ) {
	   l->modifica(elem,codigo,nombre,s);
	 }
	 elem = l->siguiente(elem);
   }
}
void CProducto::eliminar_producto(int codigo){
   NodoPr* elem = l->primero();
   int c=0;
   int s=0;
   AnsiString n;
   for (int i=0; i < l->longitud(); i++) {
	 l->recupera(elem,c,n,s);
	 if (codigo == c ) {
	   l->suprime(elem);
	 }
	 elem = l->siguiente(elem);
   }
   cantidad--;
}
void CProducto::modificar_stock(int codigo, int cantidad){
   NodoPr* elem = l->primero();
   int c=0;
   int s=0;
   AnsiString n;
   for (int i=0; i < l->longitud(); i++) {
	 l->recupera(elem,c,n,s);
	 if (codigo == c ) {
	   l->modifica(elem,c,n,s+cantidad);
	 }
	 elem = l->siguiente(elem);
   }
}
void CProducto::consultar_inf(int codigo, AnsiString& nom,int& cant){
   NodoPr* elem = l->primero();
   int c=0;
   int s=0;
   AnsiString n;
   for (int i=0; i < l->longitud(); i++) {
	 l->recupera(elem,c,n,s);
	 if (codigo == c ) {
	   nom=n;
	   cant=s;
	 }
	 elem = l->siguiente(elem);
   }

}
AnsiString CProducto::buscar(int codigo){
   NodoPr* elem = l->primero();
   int c=0;
   int s=0;
   AnsiString n;
   for (int i=0; i < l->longitud(); i++) {
	 l->recupera(elem,c,n,s);
	 if (codigo == c ) {
	   return n;
	 }
	 elem = l->siguiente(elem);
   }

}
int CProducto::cantidad_prductos(){
  return cantidad;
}
