#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>

#include "tratador.h"
#include "funcionario.h"
using namespace std;


/*
Tratador::Tratador(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, int nivel_de_seguranca_) {

	setId(id_);
	setTipoFunc(funcao_);
	setNome(nome_);
	setCpf(cpf_);
	setIdade(idade_);
	setTipo_Sanguineo(tipo_sanguineo_);
	setFatorRH(fatorRH_);
	setEspecialidade(especialidade_);
	setNivelseguranca(nivel_de_seguranca_);
}
*/
Tratador::Tratador() {}
Tratador::~Tratador() {}

void Tratador::setNivelseguranca(int n) {
	nivel_de_seguranca = n;
}
int Tratador::getNivelseguranca() {
	return nivel_de_seguranca;
}
