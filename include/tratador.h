#ifndef TRATADOR_H
#define TRATADOR_H

using namespace std;

#include <string>
#include <iostream>
#include "funcionario.h"

class Tratador : public Funcionario
{
	private:
		int nivel_de_seguranca;
	public:
		//Construtores e Destrutores
		Tratador();
		Tratador(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, int nivel_de_seguranca_);
		~Tratador();
		//Getters e Setters
		int getNivel_de_seguranca();
		void setNivel_de_seguranca(int nivel_de_seguranca_);
		friend std::ostream& operator<< (std::ostream &o, Tratador &t);
};

#endif

