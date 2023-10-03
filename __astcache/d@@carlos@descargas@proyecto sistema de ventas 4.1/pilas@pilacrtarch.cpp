//---------------------------------------------------------------------------

#pragma hdrstop

#include "PilaCrtArch.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
using namespace std;
PilaCrtArch::PilaCrtArch(){
   ofstream archivoSalida;
   ifstream archivoEntrada;
   archivoEntrada.open("PilaCarrito.txt",ios::in);
   int contador = 0;
	if (!archivoEntrada.fail()) {
		string linea;
		while (getline(archivoEntrada, linea)) {
			contador++;
		}
		archivoEntrada.close();
	}else cout<<"Error 1\n";
	tamaño = contador;
}
bool PilaCrtArch::Vacia(){
  if (tamaño==0) {
	 return true;
  }else return false;

}
string PilaCrtArch::Cima(){
  string cima,linea;
  int cod,cantidad,precio,sub;
  if (Vacia()) {
	 cout<<"Error Pila Vacia";
  }else {
	 archivoEntrada.open("PilaCarrito.txt",ios::in);
	 if (!archivoEntrada.fail()){
		  while (getline(archivoEntrada, linea)) {
			 stringstream ss(linea);
			 ss >> cod >> cantidad >> precio;
		  }
		 sub = cantidad * precio;
		 cima += to_string(cod) + " "+to_string(cantidad)+" "+to_string(precio)+
		 " "+to_string(sub);
		 archivoEntrada.close();
		 return cima;
	 }else cout << "Error al abrir";

  }

}
void PilaCrtArch::meter(int cod, int cantidad, int precio, AnsiString nom){
	int sub = precio*cantidad;
	 if (Vacia()) {
		archivoSalida.open("PilaCarrito.txt",ios::out);
		if (!archivoSalida.fail()) {
		  //cout<<"cargando\n";
		  archivoSalida << cod << " " << cantidad << " " << precio <<" "<<sub<<" "<<nom<<endl;
		} else {
		// Manejar el error si el archivo no se pudo abrir
		cout<<"Error al abrir";
		}
		archivoSalida.close();
		tamaño++;
	 }else {
	  archivoSalida.open("PilaCarrito.txt",ios::app);
	   if (archivoSalida.fail()) {
		 cout<<"Error al abrir";
	   }
	   archivoSalida << cod << " " << cantidad << " " << precio <<" "<<sub<<" "<<nom <<endl;
	   archivoSalida.close();
	   tamaño++;
	 }


}
void PilaCrtArch::sacar(int &cod, int &cantidad, int &precio, int &sub, AnsiString& nombre){
	vector<std::string> lineas;
	string linea;

  if (Vacia()) {
	 cout<<"Error Pila Vacia";
  }else {
	 archivoEntrada.open("PilaCarrito.txt",ios::in);
	  if (!archivoEntrada.fail()){
		  while (getline(archivoEntrada, linea)) {
			// archivoEntrada >> cod >> cantidad >> precio;
             stringstream ss(linea);
			 ss >> cod >> cantidad >> precio >> sub >>nombre;
		  }
		// sub = cantidad * precio;
		 archivoEntrada.close();
	  }else cout << "Error al abrir1\n";
	 archivoEntrada.open("PilaCarrito.txt",ios::in);
	 if (!archivoEntrada.fail()) {
		string linea;
		while (std::getline(archivoEntrada, linea)) {
			lineas.push_back(linea);
		  //	cout<<"guardando linea\n";
		}
	 }else cout << "Error al abrir2\n";
	 archivoEntrada.close();

	 archivoSalida.open("PilaCarrito.txt",ios::out);
	 if (archivoSalida.is_open()) {
          int contador = 0;
            while (contador < static_cast<int>(lineas.size()) - 1) {
                archivoSalida << lineas[contador] << '\n';
				contador++;
				//cout<<"rearmando archivo\n";
			}
	 }else cout << "Error al abrir3\n";
	 archivoSalida.close();
	 tamaño--;
  }

}
int PilaCrtArch::tam(){
  return tamaño;
}


