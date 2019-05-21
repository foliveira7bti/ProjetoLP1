#ifndef ANIMALNATIVO_H
#define ANIMALNATIVO_H

#include <string>
using namespace std;

#include "animalsilvestre.h"

class AnimalNativo : public AnimalSilvestre
{
	protected:
		string uf_origem;
		string autorizacao;
	public:
		AnimalNativo();
		//AnimalNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, string veterinario_, string tratador_, string nome_batismo_, string ibama, string uf_origem_, string autorizacao_);
		~AnimalNativo();
};
#endif