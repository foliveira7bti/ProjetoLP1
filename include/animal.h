#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "veterinario.h"
#include "tratador.h"
using namespace std;

class Animal
{
	protected:
		int id;
		string classe;
		string nome_cientifico;
		char sexo;
		double tamanho;
		string dieta;
		string veterinario;
		string tratador;
		string nome_batismo;
	public:
		//Construtores e Destrutores
		Animal();
		//Animal(int id_, string classe_, string nome_cientifico_, char sexo_, double tamanho_, string dieta_, string veterinario_, string tratador_, string nome_batismo_);
		~Animal();
};

#endif
