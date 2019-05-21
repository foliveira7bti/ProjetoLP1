#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"
#include <string>

class Mamifero : public Animal
{
	protected:
		string cor_pelo;
	public:
		Mamifero();
		//Mamifero(string cor_pelo_);
		~Mamifero();
};

#endif
