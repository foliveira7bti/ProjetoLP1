#ifndef REPTILNATIVO_H
#define REPTILNATIVO_H

#include "animalnativo.h"
#include "reptil.h"

class ReptilNativo : public Reptil, AnimalNativo
{
	public:
		ReptilNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, bool venenoso_, string tipo_veneno_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
		~ReptilNativo();
};
#endif