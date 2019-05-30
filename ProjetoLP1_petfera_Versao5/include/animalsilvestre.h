#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_H

#include "animal.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;






class AnimalSilvestre
{
	protected:
		string autorizacao_ibama;
	public:
		AnimalSilvestre(string autorizacao_ibama_);
		~AnimalSilvestre();

		virtual string getAutorizacao_Ibama() = 0;
		//void setIbama(string i);
};

#endif