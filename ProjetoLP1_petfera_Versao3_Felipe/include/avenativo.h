#ifndef AVENATIVO_H
#define AVENATIVO_H

#include "animalnativo.h"
#include "ave.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;








class AveNativo : public Ave, AnimalNativo
{
	public:
		AveNativo();
		~AveNativo();
};

#endif