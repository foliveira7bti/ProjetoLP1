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

AnimalSilvestre::AnimalSilvestre(){}
AnimalSilvestre::~AnimalSilvestre(){}



string AnimalSilvestre::getIbama(){

	return autorizacao_ibama;
}


void AnimalSilvestre::setIbama(string i) {
	autorizacao_ibama = i;
}
