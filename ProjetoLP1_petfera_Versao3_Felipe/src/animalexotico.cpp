#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "animalsilvestre.h"
#include "animalexotico.h"

using namespace std;





AnimalExotico::AnimalExotico(){}
AnimalExotico::~AnimalExotico(){}


string AnimalExotico::getPais_origem(){
	return pais_origem;
}


void AnimalExotico::setPais_origem(string pais) {
	pais_origem = pais;
}


string AnimalExotico::getAutorizacao_exotico(){
	return autorizacao_exotico;
}


void AnimalExotico::setAutorizacao_exotico(string auto_exotico) {
	autorizacao_exotico = auto_exotico;
}