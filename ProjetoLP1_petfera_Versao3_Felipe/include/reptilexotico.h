#ifndef REPTILEXOTICO_H
#define REPTILEXOTICO_H

#include "animalexotico.h"
#include "reptil.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;








class ReptilExotico : public Reptil, AnimalExotico
{
	public:
		ReptilExotico();
		~ReptilExotico();
};

#endif