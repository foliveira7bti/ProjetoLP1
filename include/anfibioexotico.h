#ifndef ANFIBIOEXOTICO_H
#define ANFIBIOEXOTICO_H

#include "anfibio.h"
#include "animalexotico.h"

class AnfibioExotico : public Anfibio, AnimalExotico
{
	public:
		AnfibioExotico();
		//AnfibioExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, string autorizacao_ibama_, string pais_origem_, string aurotizacao_, int total_de_mudas_, string ultima_muda_);
		~AnfibioExotico();
};
#endif