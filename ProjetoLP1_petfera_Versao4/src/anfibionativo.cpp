#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animalnativo.h"
#include "anfibionativo.h"

using namespace std;

AnfibioNativo::AnfibioNativo(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int mudas, string data, string autI, string ufo, string aut):Anfibio(mudas,data),AnimalNativo(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,ufo,aut)
{

}
AnfibioNativo::~AnfibioNativo(){}

int AnfibioNativo::getId()
{
	return id;
}

ostream& operator << (ostream &saida, AnfibioNativo &anfn)
{
	cout << "Anfibio Nativo" << endl;
	cout << "Id: " << anfn.getId() << endl;
	cout << "Classe: " << anfn.getClasse() << endl;
	cout << "Nome: " << anfn.getNome() << endl;
	cout << "Nome Cientifico: " << anfn.getCientifico() << endl;
	cout << "Sexo: " << anfn.getSexo() << endl;
	cout << "Tamanho em Metros: " << anfn.getTamanho() << endl;
	cout << "Dieta: " << anfn.getDieta() << endl;
	cout << "ID do Veterinario:" << anfn.getVeterinario() << endl;
	cout << "ID do Tratador: " << anfn.getTratador() << endl;
	cout << "Nome de Batismo: " << anfn.getBatismo() << endl;
	cout << "Total de Mudas: " << anfn.getTotalMudas() << endl;
	cout << "Ultima muda: " << anfn.getUltimaMuda() << endl;
	cout << "Autorizacao Ibama: " << anfn.getAutorizacao_Ibama() << endl;
	cout << "Unidade Federativa (UF) de origem: " << anfn.getUf_origem() << endl;
	cout << "Autorizacao: " << anfn.getAutorizacao() << endl;
	return saida;
}