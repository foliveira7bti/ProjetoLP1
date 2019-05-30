#ifndef ANIMAL_H
#define ANIMAL_H

#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"
#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Animal {
	protected:
		int id;
		string classe;
		string nome;
		string cientifico;
		string sexo;
		float tamanho;
		string dieta;
		int veterinario;
		int tratador;
		string batismo;
	public:
		Animal();
		Animal(int id_, string classe_, string nome_, string cientifico_, string sexo_, float tamanho_, string dieta_, int veterinario_, int tratador_, string batismo_);
		~Animal();

		virtual int getId() = 0;
		//void setId(int id_);
		string getClasse();
		//void setClasse(string classe_);
		string getNome();
		//void setNome(string nome_);
		string getCientifico();
		//void setCientifico(string cientifico_);
		string getSexo();
		//void setSexo(string sexo_);
		float getTamanho();
		//void setTamanho(float tamanho_);
		string getDieta();
		//void setDieta(string dieta_);
		int getVeterinario();
		//void setVeterinario(int v);
		int getTratador();
		//void setTratador(int t);
		string getBatismo();
		//void setBatismo(string batismo_);

};


#endif