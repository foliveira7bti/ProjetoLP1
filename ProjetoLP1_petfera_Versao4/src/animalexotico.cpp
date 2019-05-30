#include "animalexotico.h"


AnimalExotico::AnimalExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string autI, string po, string autE):Animal(i,c,name,cient,sex,tam,diet,vete,trat,bat),AnimalSilvestre(autI)
{
	pais_origem = po;
	autorizacao_exotico = autE;
}
AnimalExotico::~AnimalExotico(){}


string AnimalExotico::getPais_origem(){
	return pais_origem;
}


string AnimalExotico::getAutorizacaoExotico(){
	return autorizacao_exotico;
}

string AnimalExotico::getAutorizacao_Ibama()
{
	return autorizacao_ibama;
}