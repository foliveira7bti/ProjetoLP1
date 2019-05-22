#ifndef ANFIBIO_H
#define ANFIBIO_H

#include "animal.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;




class Anfibio : public Animal {
	protected:
		int total_mudas;
		string ultima_muda;
	public:
		Anfibio();
		~Anfibio();
	
		int getTotalMudas();
		void setTotalMUdas(int tm);
		string getUltimaMuda();
		void setUltimaMuda(string um);



};

#endif