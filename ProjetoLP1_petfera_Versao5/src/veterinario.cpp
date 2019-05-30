#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>

#include "veterinario.h"
#include "funcionario.h"
#include "tratador.h"
using namespace std;


/*
Veterinario::Veterinario(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, string codigocrmv_) {

	setId(id_);
	setTipoFunc(funcao_);
	setNome(nome_);
	setCpf(cpf_);
	setIdade(idade_);
	setTipo_Sanguineo(tipo_sanguineo_);
	setFatorRH(fatorRH_);
	setEspecialidade(especialidade_);
	setcrmv(codigocrmv_);

}
*/

Veterinario::Veterinario() {}
Veterinario::~Veterinario() {}

void Veterinario::setCRMV(string c) {
	crmv = c;
}
string Veterinario::getCRMV() {
	return crmv;
}

