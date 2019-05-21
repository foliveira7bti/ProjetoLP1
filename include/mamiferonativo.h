#ifndef MAMIFERONATIVO_H
#define MAMIFERONATIVO_H

#include "animalnativo.h"
#include "mamifero.h"

class MamiferoNativo : public Mamifero, AnimalNativo
{
	public:
		MamiferoNativo();
		//MamiferoNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, string cor_pelo_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
		~MamiferoNativo();
};
#endif
