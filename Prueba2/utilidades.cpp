#include "utilidades.h"
#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

void UtilidadesListasEnlazadas::InsertarFinal(nodo *&lista, int valor) {

	nodo *nuevo = new nodo();

	nuevo->sig = 0;
	nuevo->ant = 0;

	nuevo->valor = valor;

	if (lista == NULL) {
		lista = nuevo;
		} 
	else {
		nuevo->sig = nuevo;
		nuevo->ant = lista;
		lista = nuevo;
	}
}

nodo ** UtilidadesListasEnlazadas::CrearLista(int valor) {
	
	nodo * lista = new nodo;

	int num = 0;

	if (valor < 1) {
		cout << "\n\nNúmero Inválido. Regresando..." << endl;
		return NULL;
	}
	else {
		for (int x = 1;  x <= valor; x++) {
			num = rand() % valor + 1;
			InsertarFinal(lista, num);
		}
	}
	return &lista;
}

void UtilidadesListasEnlazadas::OrdenarLista(nodo **lista) {

	if (lista != NULL) {
		nodo *pivote = NULL;
		nodo *actual = NULL;
		int tmp = 0;

		pivote = (*lista)->ant;

		while (pivote != (*lista)->sig) {
			if (pivote->valor > actual->valor) {
				tmp = pivote->valor;
			}
			actual = actual->sig;
		}
	}

}

void UtilidadesListasEnlazadas::GuardarLista(nodo **lista, char *nombre) {
	ofstream ArchivoUtilidades(nombre, ios::app);

	for (int i = 0; i < sizeof(UtilidadesListasEnlazadas) - 1; i++) {
		if (*lista == 0)
			return;
		else {
			ArchivoUtilidades << (*lista)->valor << ' ';
		}
	}
	ArchivoUtilidades.close();
}
