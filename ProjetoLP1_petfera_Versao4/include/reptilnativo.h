#ifndef REPTILNATIVO_H
#define REPTILNATIVO_H

#include "animalnativo.h"
#include "reptil.h"


class ReptilNativo : public Reptil, AnimalNativo
{
	public:
		ReptilNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, bool ven, string tipo, string autI, string ufo, string aut);
		~ReptilNativo();

		int getId();

		friend ostream& operator << (ostream &saida, ReptilNativo &rn);
};

#endif