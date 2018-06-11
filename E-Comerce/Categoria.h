#pragma once
#include <string>
class Categoria{
private:
	static int contC;
	int iDCategoria;
	string nombreCategoria;
public:
	Categoria();
	Categoria(string _nombreCategoria);

	int getIDCategoria();
	string getNombreCategoria();

	void setNombreCategoria(string NewNombreCategoria);

	~Categoria();
};

