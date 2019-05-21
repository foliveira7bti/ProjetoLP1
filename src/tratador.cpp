#include "tratador.h"
using namespace std;

Tratador::Tratador()
{
	//Nada
}

Tratador::Tratador(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, int nivel_de_seguranca_)
{
	id = id_;
	funcao = funcao_;
	nome = nome_;
	cpf = cpf_;
	idade = idade_;
	tipo_sanguineo = tipo_sanguineo_;
	fatorRH = fatorRH_;
	especialidade = especialidade_;
	nivel_de_seguranca = nivel_de_seguranca_;
}

Tratador::~Tratador()
{
	//Nada
}

int Tratador::getNivel_de_seguranca()
{
	return nivel_de_seguranca;
}

void Tratador::setNivel_de_seguranca(int nivel_de_seguranca_)
{
	nivel_de_seguranca = nivel_de_seguranca_;
}

std::ostream& operator<< (std::ostream &o, Tratador &t)
{
	o << t.getNome() << t.getIdade() <<" " << t.getCpf() << " " << t.getTipo_Sanguineo();
	return o;
}