#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include "anfibio.h"
#include "animalnativo.h"

class AnfibioNativo : public Anfibio, AnimalNativo
{
	public:
		AnfibioNativo();
		//AnfibioNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, int total_de_mudas_, string ultima_muda_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
		~AnfibioNativo();
};
#endif