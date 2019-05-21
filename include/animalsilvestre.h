#ifndef ANIMALSILVESTRE_H
#define ANIMALSILVESTRE_H

#include <string>
using namespace std;

class AnimalSilvestre
{
	protected:
		string autorizacao_ibama;
	public:
		AnimalSilvestre();
		//AnimalSilvestre(string autorizacao_ibama_);
		~AnimalSilvestre();
};
#endif