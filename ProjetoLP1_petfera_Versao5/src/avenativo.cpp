#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalnativo.h"
#include "avenativo.h"

using namespace std;

AveNativo::AveNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int bico, int env, string autI, string ufo, string aut):Ave(bico,env),AnimalNativo(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,ufo,aut)
{

}
AveNativo::~AveNativo(){}

int AveNativo::getId()
{
	return id;
}

ostream& operator << (ostream &saida, AveNativo &an)
{
	cout << "Ave Nativo" << endl;
	cout << "Id: " << an.getId() << endl;
	cout << "Classe: " << an.getClasse() << endl;
	cout << "Nome: " << an.getNome() << endl;
	cout << "Nome Cientifico: " << an.getCientifico() << endl;
	cout << "Sexo: " << an.getSexo() << endl;
	cout << "Tamanho em Metros: " << an.getTamanho() << endl;
	cout << "Dieta: " << an.getDieta() << endl;
	cout << "ID do Veterinario:" << an.getVeterinario() << endl;
	cout << "ID do Tratador: " << an.getTratador() << endl;
	cout << "Nome de Batismo: " << an.getBatismo() << endl;
	cout << "Tamanho Bico: " << an.getTamanhoBico() << endl;
	cout << "Envergadura: " << an.getEnvergadura() << endl;
	cout << "Autorizacao Ibama: " << an.getAutorizacao_Ibama() << endl;
	cout << "Unidade Federativa (UF) de origem: " << an.getUf_origem() << endl;
	cout << "Autorizacao: " << an.getAutorizacao() << endl;
	return saida;
}