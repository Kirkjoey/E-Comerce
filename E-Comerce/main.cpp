// E-Comerce.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "MetodoPago.h"

using namespace std;

int main()
{
	MetodoPago newMethod = MetodoPago("MX00 0000 0000 00 0000000000");
	cout << newMethod.getCLABE() << endl;
    return 0;
}

