#ifndef ANIMALEXOTICO_H
#define ANIMALEXOTICO_H

#include "animal.h"
#include "animalsilvestre.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;






class AnimalExotico : public AnimalSilvestre
{
	protected:
		string pais_origem;
		string autorizacao_exotico;
	public:
		AnimalExotico();
		~AnimalExotico();


		string getPais_origem();
		void setPais_origem(string pais);
		string getAutorizacao_exotico();
		void setAutorizacao_exotico(string auto_exotico);
};


#endif