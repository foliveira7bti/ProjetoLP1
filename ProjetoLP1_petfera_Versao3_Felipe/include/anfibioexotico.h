#ifndef ANFIBIOEXOTICO_H
#define ANFIBIOEXOTICO_H

#include "anfibio.h"
#include "animalexotico.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;





class AnfibioExotico : public Anfibio, AnimalExotico
{
	public:
		AnfibioExotico();
		~AnfibioExotico();
};


#endif