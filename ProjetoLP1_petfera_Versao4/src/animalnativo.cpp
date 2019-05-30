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



AnimalNativo::AnimalNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string autI, string ufo, string aut):Animal(i,c,name,cient,sex,tam,diet,vete,trat,bat),AnimalSilvestre(autI)
{
	uf_origem = ufo;
	autorizacao_nativo = aut;
}
AnimalNativo::~AnimalNativo(){}


string AnimalNativo::getUf_origem()
{
	return uf_origem;
}


string AnimalNativo::getAutorizacao()
{
	return autorizacao_nativo;
}


string AnimalNativo::getAutorizacao_Ibama()
{
	return autorizacao_ibama;
}