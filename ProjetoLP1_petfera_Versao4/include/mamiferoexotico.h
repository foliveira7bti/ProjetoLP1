#ifndef MAMIFEROEXOTICO_H
#define MAMIFEROEXOTICO_H

#include "animalexotico.h"
#include "mamifero.h"

class MamiferoExotico : public Mamifero, AnimalExotico
{
	public:
		MamiferoExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string cor, string autI, string po, string aut);
		~MamiferoExotico();

		int getId();

		friend ostream& operator << (ostream &saida, MamiferoExotico &me);
};

#endif