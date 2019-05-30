#ifndef ANIMALNATIVO_H
#define ANIMALNATIVO_H

#include "animal.h"
#include "animalsilvestre.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;






class AnimalNativo : public AnimalSilvestre
{
	protected:
		string uf_origem;
		string autorizacao_nativo;
	public:
		AnimalNativo();
		~AnimalNativo();

		string getUf_origem();
		void setUf_origem(string uf);
		string getAutorizacao();
		void setAutorizacao(string auto_nativo);
};


#endif