#ifndef AVE_H
#define AVE_H

#include "animal.h"

#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;





class Ave{
	protected:
		int tamanho_bico;
		int envergadura;
	public:
		Ave(int tamanho_, int envergadura_);
		~Ave();

		int getTamanhoBico();
		int getEnvergadura();

};

#endif