#include "stdafx.h"
#include "Categoria.h"
int Categoria::iDCategoria

Categoria::Categoria() {
	nombreCategoria = "";
}

Categoria::Categoria(string _nombreCategoria) {
	iDCategoria++;
	nombreCategoria = _nombreCategoria;
}

Categoria::~Categoria() {
}

#pragma region Geters
int getIDCategoria() {
	return iDCategoria;
}
string getNombreCategoria() {
	return nombreCategoria;
}
#pragma endregion

#pragma region Seters
void setNombreCategoria(string NewNombreCategoria) {
	nombreCategoria = NewNombreCategoria;
}
#pragma endregion