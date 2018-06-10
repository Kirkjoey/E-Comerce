#pragma once
#include <string>
class Producto
{
private:
	static int iDProducto;
	string nombreProducto;
	string descripcion;
	int cveCategoria;
public:
	Producto();
	Producto(string _nombreProducto, string _descripcion, int _cveCategoria);

	int getIDProducto();
	string getNombreProducto();
	string getDescripcion();
	int getCveCategoria();

	void setNombreProducto(string NewNombreProducto);
	void setDescripcion(string NewDescripcion);
	void setCveCategoria(int NewCveCategoria);

	~Producto();
};

