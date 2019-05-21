#ifndef ANIMALEXOTIVO_H
#define ANIMALEXOTICO_H

#include <string>
using namespace std;

#include "animalsilvestre.h"

class AnimalExotico : public AnimalSilvestre
{
	protected:
		string pais_origem;
		string autorizacao;
	public:
		AnimalExotico();
		//AnimalExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, string autorizacao_ibama_, string pais_origem_, string autorizacao_);
		~AnimalExotico();
};
#endif