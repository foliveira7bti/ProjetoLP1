#include "anfibioexotico.h"
#include "animalexotico.h"
AnfibioExotico::AnfibioExotico(int i, string c, string name, string cient, string sex, float tam, string diet, int vete, int trat, string bat, int mudas, string data, string autI, string po, string aut):Anfibio(mudas,data),AnimalExotico(i,c,name,cient,sex,tam,diet,vete,trat,bat,autI,po,aut)
{

}
AnfibioExotico::~AnfibioExotico(){}

int AnfibioExotico::getId()
{
	return id;
}

ostream& operator << (ostream &saida, AnfibioExotico &anfe)
{
	cout << "Anfibio Exotico" << endl;
	cout << "Id: " << anfe.getId() << endl;
	cout << "Classe: " << anfe.getClasse() << endl;
	cout << "Nome: " << anfe.getNome() << endl;
	cout << "Nome Cientifico: " << anfe.getCientifico() << endl;
	cout << "Sexo: " << anfe.getSexo() << endl;
	cout << "Tamanho em Metros: " << anfe.getTamanho() << endl;
	cout << "Dieta: " << anfe.getDieta() << endl;
	cout << "ID do Veterinario:" << anfe.getVeterinario() << endl;
	cout << "ID do Tratador: " << anfe.getTratador() << endl;
	cout << "Nome de Batismo: " << anfe.getBatismo() << endl;
	cout << "Total de Mudas: " << anfe.getTotalMudas() << endl;
	cout << "Ultima muda: " << anfe.getUltimaMuda() << endl;
	cout << "Autorizacao Ibama: " << anfe.getAutorizacao_Ibama() << endl;
	cout << "Pais de origem: " << anfe.getPais_origem() << endl;
	cout << "Autorizacao: " << anfe.getAutorizacaoExotico() << endl;
	return saida;
}