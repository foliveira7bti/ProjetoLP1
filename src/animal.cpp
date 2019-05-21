#include "animal.h"
#include <string>
using namespace std;


Animal::Animal()
{
	//Nada
}

Animal::Animal(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, string veterinario_, string tratador_, string nome_batismo_)
{
	id = id_;
	classe = classe_;
	nome_cientifico = nome_cientifico_;
	sexo = sexo_;
	tamanho = tamanho_;
	dieta = dieta_;
	veterinario = veterinario_;
	tratador = tratador_;
	nome_batismo = nome_batismo_;
}

Animal::~Animal()
{
	//Nada
}