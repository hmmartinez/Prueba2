#pragma once

#ifndef UTILIDADES_H

struct nodo {
	int valor; 
	nodo *ant;
	nodo *sig;
};


class UtilidadesListasEnlazadas {
public:
	static void InsertarFinal(nodo *&, int);
	static nodo ** CrearLista(int);
	static void OrdenarLista(nodo **);
	static void GuardarLista(nodo **, char*);
};


#endif // !UTILIDADES_H
