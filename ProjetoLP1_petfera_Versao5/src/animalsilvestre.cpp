#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "animalsilvestre.h"

using namespace std;

AnimalSilvestre::AnimalSilvestre(string autorizacao_ibama_)
{
	autorizacao_ibama = autorizacao_ibama_;
}
AnimalSilvestre::~AnimalSilvestre(){}



/*string AnimalSilvestre::getAutorizacao_Ibama(){

	return autorizacao_ibama;
}*/

/*
void AnimalSilvestre::setIbama(string i) {
	autorizacao_ibama = i;
}
*/