#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalnativo.h"
#include "reptilnativo.h"

using namespace std;

ReptilNativo::ReptilNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, bool ven, string tipo, string autI, string ufo, string aut):Reptil(ven,tipo),AnimalNativo(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,ufo,aut)
{

}
ReptilNativo::~ReptilNativo(){}

int ReptilNativo::getId()
{
	return id;
}

ostream& operator << (ostream &saida, ReptilNativo &rn)
{
	cout << "Reptil Nativo" << endl;
	cout << "Id: " << rn.getId() << endl;
	cout << "Classe: " << rn.getClasse() << endl;
	cout << "Nome: " << rn.getNome() << endl;
	cout << "Nome Cientifico: " << rn.getCientifico() << endl;
	cout << "Sexo: " << rn.getSexo() << endl;
	cout << "Tamanho em Metros: " << rn.getTamanho() << endl;
	cout << "Dieta: " << rn.getDieta() << endl;
	cout << "ID do Veterinario:" << rn.getVeterinario() << endl;
	cout << "ID do Tratador: " << rn.getTratador() << endl;
	cout << "Nome de Batismo: " << rn.getBatismo() << endl;
	cout << "Possui veneno: " << rn.getVenenoso() << endl;
	cout << "Tipo do Veneno: " << rn.getTipoVeneno() << endl;
	cout << "Autorizacao Ibama: " << rn.getAutorizacao_Ibama() << endl;
	cout << "Unidade Federativa (UF) de origem: " << rn.getUf_origem() << endl;
	cout << "Autorizacao: " << rn.getAutorizacao() << endl;
	return saida;
}
