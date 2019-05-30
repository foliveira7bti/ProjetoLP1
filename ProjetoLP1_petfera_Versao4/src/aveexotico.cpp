#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalexotico.h"
#include "aveexotico.h"

using namespace std;



AveExotico::AveExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int bico, int env, string autI, string po, string aut):Ave(bico,env),AnimalExotico(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,po,aut)
{

}
AveExotico::~AveExotico(){}

int AveExotico::getId()
{
	return id;
}

ostream& operator << (ostream &saida, AveExotico &ae)
{
	cout << "Ave Nativo" << endl;
	cout << "Id: " << ae.getId() << endl;
	cout << "Classe: " << ae.getClasse() << endl;
	cout << "Nome: " << ae.getNome() << endl;
	cout << "Nome Cientifico: " << ae.getCientifico() << endl;
	cout << "Sexo: " << ae.getSexo() << endl;
	cout << "Tamanho em Metros: " << ae.getTamanho() << endl;
	cout << "Dieta: " << ae.getDieta() << endl;
	cout << "ID do Veterinario:" << ae.getVeterinario() << endl;
	cout << "ID do Tratador: " << ae.getTratador() << endl;
	cout << "Nome de Batismo: " << ae.getBatismo() << endl;
	cout << "Tamanho Bico: " << ae.getTamanhoBico() << endl;
	cout << "Envergadura: " << ae.getEnvergadura() << endl;
	cout << "Autorizacao Ibama: " << ae.getAutorizacao_Ibama() << endl;
	cout << "Pais de origem: " << ae.getPais_origem() << endl;
	cout << "Autorizacao: " << ae.getAutorizacaoExotico() << endl;

	return saida;
}