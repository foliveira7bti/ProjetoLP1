#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include "anfibio.h"
#include "animalnativo.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;






class AnfibioNativo : public Anfibio, AnimalNativo
{
	public:
		AnfibioNativo();
		~AnfibioNativo();
};


#endif