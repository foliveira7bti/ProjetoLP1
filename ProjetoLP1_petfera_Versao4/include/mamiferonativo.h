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
		MamiferoNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string cor, string autI, string ufo, string aut);
		~MamiferoNativo();
		int getId();

		friend ostream& operator << (ostream &saida, MamiferoNativo &mn);
};

#endif