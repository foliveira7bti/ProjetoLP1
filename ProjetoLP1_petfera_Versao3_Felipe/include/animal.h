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
		Veterinario veterinario;
		Tratador tratador;
		string batismo;
		string nativoOUexotico;
	public:
		Animal();
		~Animal();

		int getId();
		void setId(int id_);
		string getClasse();
		void setClasse(string classe_);
		string getNome();
		void setNome(string nome_);
		string getCientifico();
		void setCientifico(string cientifico_);
		string getSexo();
		void setSexo(string sexo_);
		float getTamanho();
		void setTamanho(float tamanho_);
		string getDieta();
		void setDieta(string dieta_);
		/*Veterinario getVeterinario();
		void setVeterinario(string  v);
		Tratador getTratador();
		void setTratador(string t);*/
		string getBatismo();
		void setBatismo(string batismo_);
		string getNativoOUexotico();
		void setNativoOUexotico(string nat_);

		
		//friend istream& operator>> (istream &is, Animal &animals);
		//friend ostream& operator<< (ostream &os, Animal &animals);
};




//void RemoverAnimal(map<int, Animal*> &animais); 
//void ListarAnimais (map<int, Animal*> &animais);


#endif