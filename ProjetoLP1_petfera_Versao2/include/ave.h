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





class Ave : public Animal {
	protected:
		int tamanho_bico;
		int envergadura;
	public:
		Ave();
		~Ave();

		int getTamanhoBico();
		void setTamanhoBico(int tb);
		int getEnvergadura();
		void setEnvergadura(int e);

};

#endif