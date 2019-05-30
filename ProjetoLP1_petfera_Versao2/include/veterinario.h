#ifndef VETERINARIO_H
#define VETERINARIO_H


#include <string>
#include "funcionario.h"

using namespace std;

class Veterinario : public Funcionario {
	private:
		string crmv;

	public:
		Veterinario();
		~Veterinario();
		string getCRMV();
		void setCRMV(string c);
};

#endif