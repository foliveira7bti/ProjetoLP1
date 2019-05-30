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
		AnimalSilvestre();
		~AnimalSilvestre();

		string getIbama();
		void setIbama(string i);
};

#endif