#include "animalexotico.h"
#include "mamiferoexotico.h"

MamiferoExotico::MamiferoExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, string cor, string autI, string po, string aut):Mamifero(cor),AnimalExotico(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,po,aut)
{
	//Nothing
}
MamiferoExotico::~MamiferoExotico(){}

int MamiferoExotico::getId()
{
	return id;
}

ostream& operator << (ostream &saida, MamiferoExotico &me)
{
	cout << "Mamifero Exotico" << endl;
	cout << "Id: " << me.getId() << endl;
	cout << "Classe: " << me.getClasse() << endl;
	cout << "Nome: " << me.getNome() << endl;
	cout << "Nome Cientifico: " << me.getCientifico() << endl;
	cout << "Sexo: " << me.getSexo() << endl;
	cout << "Tamanho em Metros: " << me.getTamanho() << endl;
	cout << "Dieta: " << me.getDieta() << endl;
	cout << "ID do Veterinario:" << me.getVeterinario() << endl;
	cout << "ID do Tratador: " << me.getTratador() << endl;
	cout << "Nome de Batismo: " << me.getBatismo() << endl;
	cout << "Cor do Pelo: " << me.getCorPelo() << endl;
	cout << "Autorizacao Ibama: " << me.getAutorizacao_Ibama() << endl;
	cout << "Pais de origem: " << me.getPais_origem() << endl;
	cout << "Autorizacao: " << me.getAutorizacaoExotico() << endl;

	return saida;
}