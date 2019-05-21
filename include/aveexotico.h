#ifndef AVEEXOTICO_H
#define AVEEXOTICO_H

#include "animalexotico.h"
#include "ave.h"

class AveExotico : public Ave, AnimalExotico
{
	public:
		AveExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, double tamanho_do_bico_cm_, double envergadura_das_asas_, string autorizacao_ibama_, string pais_origem_, string aurotizacao_);
		~AveExotico();
};
#endif