#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "reptil.h"

using namespace std;





Reptil::Reptil(bool ven, string tipo)
{
	venenoso = ven;
	tipo_veneno = tipo;
}
Reptil::~Reptil() 
{

}

bool Reptil::getVenenoso() {
	return venenoso;
}

string Reptil::getTipoVeneno() {
	return tipo_veneno;
}