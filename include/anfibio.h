#ifndef ANFIBIO_H
#define ANFIBIO_H

#include "animal.h"
#include <string>

using namespace std;

class Anfibio : public Animal
{
	protected:
		int total_de_mudas;
		string ultima_muda;
	public:
		Anfibio();
		//Anfibio(int total_de_mudas_, string ultima_muda_);
		~Anfibio();
};

#endif