#ifndef REPTILNATIVO_H
#define REPTILNATIVO_H

#include "animalnativo.h"
#include "reptil.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;






class ReptilNativo : public Reptil, AnimalNativo
{
	public:
		ReptilNativo();
		~ReptilNativo();
};

#endif