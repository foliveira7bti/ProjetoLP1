#ifndef MAMIFEROEXOTICO_H
#define MAMIFEROEXOTICO_H

#include "animalexotico.h"
#include "mamifero.h"

class MamiferoExotico : public Mamifero, AnimalExotico
{
	public:
		MamiferoExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, string cor_pelo_, string autorizacao_ibama_, string pais_origem_, string aurotizacao_);
		~MamiferoExotico();
};
#endif