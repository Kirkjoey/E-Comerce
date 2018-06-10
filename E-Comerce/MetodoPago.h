#pragma once

#include <string>

class MetodoPago
{
private:
	static int idMetodoPago;
	std::string numCuenta;
	std::string CLABE;

#pragma region MetodosPrivados
	
	std::string GenerarCLABE();

#pragma endregion

public:
#pragma region Constructores

	MetodoPago();
	MetodoPago(std::string);
	~MetodoPago();
	virtual ~MetodoPago();

#pragma endregion

#pragma	region Propiedades

	int getIdMetodoPago() const;
	const std::string& getNumCuenta() const;
	void setNumCuenta(const std::string&);
	const std::string& getCLABE() const;
	void setCLABE(const std::string&);

#pragma endregion

#pragma region Metodos
#pragma endregion

};

