#include "utilidades.h"
#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	nodo *lista = new nodo;


	UtilidadesListasEnlazadas::CrearLista(5);
	UtilidadesListasEnlazadas::GuardarLista(&lista, "nodos.dat");
	_getch();
}