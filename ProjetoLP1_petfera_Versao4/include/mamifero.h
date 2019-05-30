#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "animal.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;




class Mamifero{
	protected:
		string cor_pelo;
	public:
		Mamifero(string cor_pelo_);
		~Mamifero();

		string getCorPelo();
		


};

#endif