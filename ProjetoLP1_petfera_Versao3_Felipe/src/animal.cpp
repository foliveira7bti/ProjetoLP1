#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"


using namespace std;


Animal::Animal() {}
Animal::~Animal() {}

int Animal::getId() {
	return id;
}

void Animal::setId(int id_) {
	id = id_;
}

string Animal::getClasse() {
	return classe;
}

void Animal::setClasse(string classe_) {
	classe = classe_;
}

string Animal::getNome() {
	return nome;
}

void Animal::setNome(string nome_) {
	nome = nome_;
}

string Animal::getCientifico() {
	return cientifico;
}

void Animal::setCientifico(string cientifico_) {
	cientifico = cientifico_;
}

string Animal::getSexo() {
	return sexo;
}

void Animal::setSexo(string sexo_) {
	sexo = sexo_;
}

float Animal::getTamanho() {
	return tamanho;
}
		
void Animal::setTamanho(float tamanho_) {
	tamanho = tamanho_;
}

string Animal::getDieta() {
	return dieta;
}

void Animal::setDieta(string dieta_) {
	dieta = dieta_;
}
/*
Veterinario Animal::getVeterinario() {
	return veterinario.getId();
}

void Animal::setVeterinario(string v) {
	Veterinario vet;
	vet.setId(v);
}

Tratador Animal::getTratador() {
	return tratador.getId();
}

void Animal::setTratador(string t) {
	tratador.setId(t);
}
*/

string Animal::getBatismo() {
	return batismo;
}

void Animal::setBatismo(string batismo_) {
	batismo = batismo_;
}

string Animal::getNativoOUexotico() {
	return nativoOUexotico;
}


void Animal::setNativoOUexotico(string nat_){

	nativoOUexotico = nat_;
}

/*

ostream& operator<< (ostream &os, Animal &animals) {

	os << "Identificador do animal: " << animals.id << endl;
	os << "Classe do animal: " << animals.classe << endl;	
	os << "Nome do animal: " << animals.nome << endl;
	os << "Nome científico do animal: " << animals.cientifico << endl;
	os << "Sexo do animal: " << animals.sexo << endl;
	os << "Tamanho médio em metros: " << animals.tamanho << endl;
	os << "Dieta predominante: " << animals.dieta << endl;
	os << "Nome de batismo: " << animals.batismo << endl;
	os << endl;

   

	return os;
}

*/
