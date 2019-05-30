#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "funcionario.h"





using namespace std;

Funcionario::Funcionario() {}
Funcionario::~Funcionario() {}

int Funcionario::getId() {
	return id;
}

void Funcionario::setId(int i) {
	id = i;
}


string Funcionario::getTipoFunc() {
	return tipofunc;
}

void Funcionario::setTipoFunc(string t) {
	tipofunc = t;
}


string Funcionario::getNome() {
	return nome;
}

void Funcionario::setNome(string n) {
	nome = n;
}

string Funcionario::getCpf() {
	return cpf;
}

void Funcionario::setCpf(string c) {
	cpf = c;
}

int Funcionario::getIdade() {
	return idade;
}

void Funcionario::setIdade(int i) {
	idade = i;
}

string Funcionario::getTipo_Sanguineo() {
	return tipo_sanguineo;
}

void Funcionario::setTipo_Sanguineo(string ts) {
	tipo_sanguineo = ts;
}

string Funcionario::getFatorRH() {
	return fatorRH;
}

void Funcionario::setFatorRH(string rh) {
	fatorRH = rh;
}

string Funcionario::getEspecialidade() {
	return especialidade;
}

void Funcionario::setEspecialidade(string e) {
	especialidade = e;
}












	





