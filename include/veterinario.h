#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
#include "funcionario.h"
using namespace std;

class Veterinario : public Funcionario
{
	private:
		string crmv;
	public:
		//Construtores e Destrutores
		Veterinario();
		Veterinario(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, string codigocrmv_);
		~Veterinario();
		//Getters e Setters
		string getCRMV();
		void setCRMV(string crmv_);

		friend std::ostream& operator<< (std::ostream &o, Veterinario &v);
};

#endif