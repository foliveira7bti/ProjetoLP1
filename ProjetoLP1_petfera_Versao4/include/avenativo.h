#ifndef AVENATIVO_H
#define AVENATIVO_H

#include "animalnativo.h"
#include "ave.h"

class AveNativo : public Ave, AnimalNativo
{
	public:
		AveNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int bico, int env, string autI, string ufo, string aut);
		~AveNativo();
		int getId();

		friend ostream& operator << (ostream &saida, AveNativo &an);
};

#endif