#ifndef REPTIL_H
#define REPTIL_H

#include "animal.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;





class Reptil{
	protected:
		bool venenoso;
		string tipo_veneno;
	public:
		Reptil(bool ven, string tipo);
		~Reptil();

		bool getVenenoso();
		string getTipoVeneno();

};

#endif