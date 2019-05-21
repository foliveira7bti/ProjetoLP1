#include <iostream>
#include <string>
#include "funcionario.h"


using namespace std;

//Construtores e Destrutores
Funcionario::Funcionario()
{
	//Nada
}

Funcionario::~Funcionario()
{
	//Nada
}

//Getters e Setters

int Funcionario::getId() {
	return id;
}

void Funcionario::setId(int id_) {
	id = id_;
}

string Funcionario::getNome() const{
	return nome;
}

void Funcionario::setNome(string nome_) {
	nome = nome_;
}

string Funcionario::getCpf() {
	return cpf;
}

void Funcionario::setCpf(string cpf_) {
	cpf = cpf_;
}

int Funcionario::getIdade() {
	return idade;
}

void Funcionario::setIdade(int idade_) {
	idade = idade_;
}

string Funcionario::getTipo_Sanguineo() {
	return tipo_sanguineo;
}

void Funcionario::setTipo_Sanguineo(string tipo_sanguineo_) {
	tipo_sanguineo = tipo_sanguineo_;
}

string Funcionario::getFatorRH() {
	return fatorRH;
}

void Funcionario::setFatorRH(string fatorRH_) {
	fatorRH = fatorRH_;
}

string Funcionario::getEspecialidade() {
	return especialidade;
}

void Funcionario::setEspecialidade(string especialidade_) {
	especialidade = especialidade_;
}