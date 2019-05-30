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




class Mamifero : public Animal {
	protected:
		string cor_pelo;
	public:
		Mamifero();
		~Mamifero();

		string getCorPelo();
		void setCorPelo(string cp);


};

#endif