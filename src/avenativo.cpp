#include "avenativo.h"

AveNativo::AveNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, double tamanho_do_bico_cm_, double envergadura_das_asas_, string autorizacao_ibama_, string uf_origem_, string autorizacao_)
{
	AnimalNativo(id_,classe_,nome_cientifico_,sexo_,tamanho_,dieta_,veterinario_,tratador_,nome_batismo_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
	Ave(tamanho_do_bico_cm_, envergadura_das_asas_);
}

AveNativo::~AveNativo()
{
	//Nada
}