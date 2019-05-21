#ifndef REPTIL_H
#define REPTIL_H

#include <string>
#include "animal.h"

using namespace std;

class Reptil : public Animal
{
	protected:
		bool venenoso;
		string tipo_veneno;
	public:
		Reptil();
		//Reptil(bool venenoso_, string tipo_veneno_);
		~Reptil();
};

#endif