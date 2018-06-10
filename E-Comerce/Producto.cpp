#include "stdafx.h"
#include "Producto.h"
int Producto::iDProducto;

Producto::Producto() {
	nombreProducto = "";
	descripcion = "";
	cveCategoria = 0;
}

Producto::Producto(string _nombreProducto, string _descripcion, int _cveCategoria) {
	iDProducto++;
	nombreProducto = _nombreProducto;
	descripcion = _descripcion;
	cveCategoria = _cveCategoria;
}

Producto::~Producto() {
}

#pragma region Geters
int getIDProducto() {
	return iDProducto;
}
string getNombreProducto() {
	return nombreProducto;
}
string getDescripcion() {
	return descripcion;
}
int CveCategoria() {
	return cveCategoria;
#pragma endregion

#pragma region Seters
void setNombreProducto(string NewNombreProducto) {
	nombreProducto = NewNombreProducto;
}
void getDescripcion(string NewDescripcion) {
	descripcion = NewDescripcion;
}
int CveCategoria(int NewCveCategoria) {
	cveCategoria = NewCveCategoria;
}
#pragma endregion