﻿//---------------------------------------------------------------------------

#ifndef ProductosH
#define ProductosH
#include "ListaProducto.h"
#include "vcl.h"
//---------------------------------------------------------------------------
class CProducto{
	private:
	   int cantidad;
	   ListaPr* l;
	   int generar_codigo();
	public:
	   CProducto();
	   void añadir_producto(AnsiString producto,int &codigo,int cant);
	   void modificar(int codigo, AnsiString nombre);
	   void eliminar_producto(int codigo);
	   void modificar_stock(int codigo, int cantidad);
	   void reducir_stock(int codigo, int cantidad);
	   void consultar_inf(int codigo, AnsiString& nom,int& cant);
	   AnsiString buscar(int codigo);
	   int cantidad_prductos();

};
#endif
