#ifndef AVEEXOTICO_H
#define AVEEXOTICO_H

#include "animalexotico.h"
#include "ave.h"

class AveExotico : public Ave, AnimalExotico
{
	public:
		AveExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int bico, int env, string autI, string po, string aut);
		~AveExotico();
		int getId();

		friend ostream& operator << (ostream &saida, AveExotico &ae);
};

#endif