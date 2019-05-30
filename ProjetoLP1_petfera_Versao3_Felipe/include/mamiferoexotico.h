#ifndef MAMIFEROEXOTICO_H
#define MAMIFEROEXOTICO_H

#include "animalexotico.h"
#include "mamifero.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;





class MamiferoExotico : public Mamifero, AnimalExotico
{
	public:
		MamiferoExotico();
		~MamiferoExotico();
};

#endif