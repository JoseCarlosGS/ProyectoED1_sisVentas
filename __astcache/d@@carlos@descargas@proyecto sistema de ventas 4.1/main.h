﻿//---------------------------------------------------------------------------

#ifndef MainH
#define MainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *codcliente;
	TEdit *codproducto;
	TEdit *preciop;
	TEdit *cantidadp;
	TButton *Button3;
	TButton *Button4;
	TListView *ListView1;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TMainMenu *MainMenu1;
	TMenuItem *Caja1;
	TMenuItem *Cerrarturno1;
	TMenuItem *Cambiaroperador1;
	TMenuItem *Clientes1;
	TMenuItem *Nuevocliente1;
	TMenuItem *Buscar1;
	TMenuItem *Buscar2;
	TMenuItem *Productos1;
	TMenuItem *Nuevoproduto1;
	TLabel *Label9;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	TLabel *Label10;
	TEdit *Edit5;
	TPanel *Panel1;
	TPanel *Panel2;
	TDateTimePicker *DateTimePicker1;
	TButton *Button8;
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Nuevocliente1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Nuevoproduto1Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Buscar1Click(TObject *Sender);
	void __fastcall ListView1CustomDrawItem(TCustomListView *Sender, TListItem *Item,
          TCustomDrawState State, bool &DefaultDraw);
	void __fastcall Button8Click(TObject *Sender);
private:	// User declarations
public:		// User declarations

	__fastcall TForm1(TComponent* Owner);
	void __fastcall AgregarProducto(int num, int cod, AnsiString prod, int cant, float precio, float total);
	void __fastcall LimpiarForm();
    void __fastcall PreCargar();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
