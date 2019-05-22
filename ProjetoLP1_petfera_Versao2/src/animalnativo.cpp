#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"
#include "animalsilvestre.h"
#include "animalnativo.h"

using namespace std;



AnimalNativo::AnimalNativo(){}
AnimalNativo::~AnimalNativo(){}


string AnimalNativo::getUf_origem(){

	return uf_origem;
}


void AnimalNativo::setUf_origem(string uf) {
	uf_origem = uf;
}


string AnimalNativo::getAutorizacao(){

	return autorizacao_nativo;
}


void AnimalNativo::setAutorizacao(string auto_nativo) {
	autorizacao_nativo = auto_nativo;

}