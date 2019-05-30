#ifndef ANFIBIONATIVO_H
#define ANFIBIONATIVO_H

#include "anfibio.h"
#include "animalnativo.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


class AnfibioNativo : public Anfibio, AnimalNativo
{
	public:
		AnfibioNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int mudas, string data, string autI, string ufo, string aut);
		~AnfibioNativo();
		
		int getId();

		friend ostream& operator << (ostream &saida, AnfibioNativo &anfn);
};


#endif