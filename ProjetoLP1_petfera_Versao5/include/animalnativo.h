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






class AnimalNativo : public Animal, AnimalSilvestre
{
	protected:
		string uf_origem;
		string autorizacao_nativo;
	public:
		AnimalNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string autI, string ufo, string aut);
		~AnimalNativo();

		virtual int getId() = 0;
		string getUf_origem();
		//void setUf_origem(string uf);
		string getAutorizacao();
		//void setAutorizacao(string auto_nativo);
		string getAutorizacao_Ibama();
};


#endif