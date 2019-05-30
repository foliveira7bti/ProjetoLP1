#ifndef ANFIBIOEXOTICO_H
#define ANFIBIOEXOTICO_H

#include "anfibio.h"
#include "animalexotico.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;


class AnfibioExotico : public Anfibio, AnimalExotico
{
	public:
		AnfibioExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int mudas, string data, string autI, string po, string aut);
		~AnfibioExotico();

		int getId();

		friend ostream& operator << (ostream &saida, AnfibioExotico &anfe);
};


#endif