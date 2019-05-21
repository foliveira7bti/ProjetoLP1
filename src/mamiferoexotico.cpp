#include "mamiferoexotico.h"

MamiferoExotico::MamiferoExotico(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, string cor_pelo_, string autorizacao_ibama_, string pais_origem_, string aurotizacao_)
{
	Mamifero(cor_pelo_);
	AnimalExotico(id_,classe_,nome_cientifico_,sexo_,tamanho_,dieta_,veterinario_, tratador_,nome_batismo_,autorizacao_ibama_,pais_origem_,aurotizacao_);
}

MamiferoExotico::~MamiferoExotico()
{
	//Nada
}