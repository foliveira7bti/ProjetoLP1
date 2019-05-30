#ifndef TRATADOR_H
#define TRATADOR_H




#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "funcionario.h"

using namespace std;



class Tratador : public Funcionario {
	private:
		int nivel_de_seguranca;

	public:
		Tratador();
		~Tratador();
		int getNivelseguranca();
		void setNivelseguranca(int n);
};

#endif