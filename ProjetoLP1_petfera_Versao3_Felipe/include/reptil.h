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





class Reptil : public Animal {
	protected:
		bool venenoso;
		string tipo_veneno;
	public:
		Reptil();
		~Reptil();

		bool getVenenoso();
		void setVenenoso(bool v);
		string getTipoVeneno();
		void setTipoVeneno(string tv);

};

#endif