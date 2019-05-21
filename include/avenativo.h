#ifndef AVENATIVO_H
#define AVENATIVO_H

#include "animalnativo.h"
#include "ave.h"

class AveNativo : public Ave, AnimalNativo
{
	public:
		AveNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, double tamanho_do_bico_cm_, double envergadura_das_asas_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
		~AveNativo();
};
#endif