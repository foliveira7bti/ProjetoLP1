#include "reptilnativo.h"

ReptilNativo::ReptilNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, bool venenoso_, string tipo_veneno_, string autorizacao_ibama_, string uf_origem_, string autorizacao_)
{
	Reptil(venenoso_, tipo_veneno_);
	AnimalNativo(id_,classe_,nome_cientifico_,sexo_,tamanho_,dieta_,veterinario_,tratador_,nome_batismo_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);
}

ReptilNativo::~ReptilNativo()
{
	//Nada
}