#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"


using namespace std;

Animal::Animal(){}

Animal::Animal(int id_, string classe_, string nome_, string cientifico_, string sexo_, float tamanho_, string dieta_, int veterinario_, int tratador_, string batismo_)
{
	id = id;
	classe = classe;
	nome = nome;
	cientifico = cientifico_;
	sexo = sexo_;
	tamanho = tamanho_;
	dieta = dieta_;
	veterinario = veterinario_;
	tratador = tratador_;
	batismo = batismo_;
}
Animal::~Animal() {}

int Animal::getId() {
	return id;
}

string Animal::getClasse() {
	return classe;
}

string Animal::getNome() {
	return nome;
}

string Animal::getCientifico() {
	return cientifico;
}


string Animal::getSexo() {
	return sexo;
}

float Animal::getTamanho() {
	return tamanho;
}

string Animal::getDieta() {
	return dieta;
}

int Animal::getVeterinario() {
	return veterinario;
}

int Animal::getTratador() {
	return tratador;
}

string Animal::getBatismo() {
	return batismo;
}

/*

void Animal::setId(int id_) {
	id = id_;
}

void Animal::setClasse(string classe_) {
	classe = classe_;
}

void Animal::setNome(string nome_) {
	nome = nome_;
}


void Animal::setCientifico(string cientifico_) {
	cientifico = cientifico_;
}

void Animal::setSexo(string sexo_) {
	sexo = sexo_;
}
		
void Animal::setTamanho(float tamanho_) {
	tamanho = tamanho_;
}

void Animal::setDieta(string dieta_) {
	dieta = dieta_;
}

void Animal::setVeterinario(int v) {
	veterinario = v;
}

void Animal::setTratador(int t) {
	tratador = t;
}

void Animal::setBatismo(string batismo_) {
	batismo = batismo_;
}*/

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
