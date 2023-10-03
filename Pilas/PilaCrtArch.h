//---------------------------------------------------------------------------
#include <fstream>
#ifndef PilaCrtArchH
#define PilaCrtArchH
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <vcl.h>
//---------------------------------------------------------------------------
using namespace std;
class PilaCrtArch{
	private:
	  int tamaño;
	  ofstream archivoSalida;
      ifstream archivoEntrada;
      int lineas();
	public:
	  PilaCrtArch();
	  bool Vacia();
	  string Cima();
	  void meter(int codigo, int cantidad, int precio, AnsiString nom);
	  void sacar(int &codigo, int &cantidad, int &precio, int &sub, AnsiString& nom);
      int tam();
};

#endif
