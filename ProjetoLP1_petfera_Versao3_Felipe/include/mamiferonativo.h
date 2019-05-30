#ifndef MAMIFERONATIVO_H
#define MAMIFERONATIVO_H

#include "animalnativo.h"
#include "mamifero.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;





class MamiferoNativo : public Mamifero, AnimalNativo
{
	public:
		MamiferoNativo();
		~MamiferoNativo();
};

#endif