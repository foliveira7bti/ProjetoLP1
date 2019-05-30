#ifndef AVEEXOTICO_H
#define AVEEXOTICO_H

#include "animalexotico.h"
#include "ave.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;








class AveExotico : public Ave, AnimalExotico
{
	public:
		AveExotico();
		~AveExotico();
};

#endif