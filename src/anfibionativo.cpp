#include "anfibionativo.h"

AnfibioNativo::AnfibioNativo(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, Veterinario veterinario_, Tratador tratador_, string nome_batismo_, int total_de_mudas_, string ultima_muda_, string autorizacao_ibama_, string uf_origem_, string autorizacao_)
{
	Anfibio(total_de_mudas_, ultima_muda_);
	AnimalNativo(id_,classe_,nome_cientifico_,sexo_,tamanho_,dieta_,veterinario_,tratador_,nome_batismo_, string autorizacao_ibama_, string uf_origem_, string autorizacao_);

}
AnfibioNativo::~AnfibioNativo()
{
	//Nada
}