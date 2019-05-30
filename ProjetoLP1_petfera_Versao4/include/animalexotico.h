#ifndef ANIMALEXOTICO_H
#define ANIMALEXOTICO_H

#include "animal.h"
#include "animalsilvestre.h"


class AnimalExotico : public Animal, AnimalSilvestre
{
	protected:
		string pais_origem;
		string autorizacao_exotico;
	public:
		AnimalExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string autI, string po, string autE);
		~AnimalExotico();


		string getPais_origem();
		string getAutorizacaoExotico();
		string getAutorizacao_Ibama();
};

#endif