#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalnativo.h"
#include "mamiferonativo.h"

using namespace std;

MamiferoNativo::MamiferoNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string cor, string autI, string ufo, string aut):Mamifero(cor),AnimalNativo(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,ufo,aut)
{}
MamiferoNativo::~MamiferoNativo(){}

int MamiferoNativo::getId()
{
	return id;
}

ostream& operator << (ostream &saida, MamiferoNativo &mn)
{
	cout << "Mamifero Nativo" << endl;
	cout << "Id: " << mn.getId() << endl;
	cout << "Classe: " << mn.getClasse() << endl;
	cout << "Nome: " << mn.getNome() << endl;
	cout << "Nome Cientifico: " << mn.getCientifico() << endl;
	cout << "Sexo: " << mn.getSexo() << endl;
	cout << "Tamanho em Metros: " << mn.getTamanho() << endl;
	cout << "Dieta: " << mn.getDieta() << endl;
	cout << "ID do Veterinario:" << mn.getVeterinario() << endl;
	cout << "ID do Tratador: " << mn.getTratador() << endl;
	cout << "Nome de Batismo: " << mn.getBatismo() << endl;
	cout << "Cor do Pelo: " << mn.getCorPelo() << endl;
	cout << "Autorizacao Ibama: " << mn.getAutorizacao_Ibama() << endl;
	cout << "Unidade Federativa (UF) de origem: " << mn.getUf_origem() << endl;
	cout << "Autorizacao: " << mn.getAutorizacao() << endl;

	return saida;
}