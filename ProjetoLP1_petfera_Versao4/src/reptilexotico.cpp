#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalexotico.h"
#include "reptilexotico.h"

using namespace std;


ReptilExotico::ReptilExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, bool ven, string tipo, string autI, string po, string aut):Reptil(ven,tipo),AnimalExotico(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,po,aut)
{

}
ReptilExotico::~ReptilExotico(){}

int ReptilExotico::getId()
{
	return id;
}

ostream& operator << (ostream &saida, ReptilExotico &re)
{
	cout << "Reptil Exotico" << endl;
	cout << "Id: " << re.getId() << endl;
	cout << "Classe: " << re.getClasse() << endl;
	cout << "Nome: " << re.getNome() << endl;
	cout << "Nome Cientifico: " << re.getCientifico() << endl;
	cout << "Sexo: " << re.getSexo() << endl;
	cout << "Tamanho em Metros: " << re.getTamanho() << endl;
	cout << "Dieta: " << re.getDieta() << endl;
	cout << "ID do Veterinario:" << re.getVeterinario() << endl;
	cout << "ID do Tratador: " << re.getTratador() << endl;
	cout << "Nome de Batismo: " << re.getBatismo() << endl;
	cout << "Possui veneno: " << re.getVenenoso() << endl;
	cout << "Tipo do Veneno: " << re.getTipoVeneno() << endl;
	cout << "Autorizacao Ibama: " << re.getAutorizacao_Ibama() << endl;
	cout << "Pais de origem: " << re.getPais_origem() << endl;
	cout << "Autorizacao: " << re.getAutorizacaoExotico() << endl;
	return saida;
}