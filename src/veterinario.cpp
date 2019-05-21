#include "veterinario.h"
#include <iostream>

using namespace std;

//Construtores e Destrutores

Veterinario::Veterinario()
{
	//Nada
}

Veterinario::Veterinario(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, string codigocrmv_)
{
	id = id_;
	funcao = funcao_;
	nome = nome_;
	cpf = cpf_;
	idade = idade_;
	tipo_sanguineo = tipo_sanguineo_;
	fatorRH = fatorRH_;
	especialidade = especialidade_;
	crmv = codigocrmv_;
	//cout << "veterinario criado com as informacoes:" << endl << "id = " << id_ << "funcao_ = " << funcao_ << "nome_ = " << nome_;
}

Veterinario::~Veterinario()
{
	//Nada
}

string Veterinario::getCRMV()
{
	return crmv;
}

void Veterinario::setCRMV(string crmv_)
{
	crmv = crmv_;
}

std::ostream& operator<< (std::ostream &o, Veterinario &v)
{
	o << v.getNome() << " " << v.getIdade() <<" " << v.getCpf() << " " << v.getTipo_Sanguineo();
	return o;
}