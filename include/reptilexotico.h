#ifndef REPTILEXOTICO_H
#define REPTILEXOTICO_H

#include "animalexotico.h"
#include "reptil.h"

class ReptilExotico : public Reptil, AnimalExotico
{
	public:
		ReptilExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, bool venenoso_, string tipo_veneno_, string autorizacao_ibama_, string pais_origem_, string aurotizacao_);
		~ReptilExotico();
};
#endif