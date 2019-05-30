#ifndef REPTILEXOTICO_H
#define REPTILEXOTICO_H

#include "animalexotico.h"
#include "reptil.h"

class ReptilExotico : public Reptil, AnimalExotico
{
	public:
		ReptilExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, bool ven, string tipo, string autI, string po, string aut);
		~ReptilExotico();
		int getId();

		friend ostream& operator << (ostream &saida, ReptilExotico &re);
};

#endif