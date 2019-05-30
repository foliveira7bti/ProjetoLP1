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




class Anfibio {
	protected:
		int total_mudas;
		string ultima_muda;
	public:
		Anfibio(int mudas, string data);
		~Anfibio();
	
		int getTotalMudas();
		string getUltimaMuda();



};

#endif