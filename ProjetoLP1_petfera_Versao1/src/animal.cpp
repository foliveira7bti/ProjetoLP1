#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "animal.h"

using namespace std;


Animal::Animal() {}
Animal::~Animal() {}

int Animal::getId() {
	return id;
}

void Animal::setId(int id_) {
	id = id_;
}

string Animal::getClasse() {
	return classe;
}

void Animal::setClasse(string classe_) {
	classe = classe_;
}

string Animal::getNome() {
	return nome;
}

void Animal::setNome(string nome_) {
	nome = nome_;
}

string Animal::getCientifico() {
	return cientifico;
}

void Animal::setCientifico(string cientifico_) {
	cientifico = cientifico_;
}

string Animal::getSexo() {
	return sexo;
}

void Animal::setSexo(string sexo_) {
	sexo = sexo_;
}

float Animal::getTamanho() {
	return tamanho;
}
		
void Animal::setTamanho(float tamanho_) {
	tamanho = tamanho_;
}

string Animal::getDieta() {
	return dieta;
}

void Animal::setDieta(string dieta_) {
	dieta = dieta_;
}

string Animal::getVeterinario() {
	return veterinario;
}

void Animal::setVeterinario(string v) {

		veterinario = v;
}

string Animal::getTratador() {
	return tratador;
}

void Animal::setTratador(string t) {
	tratador = t;
}

string Animal::getBatismo() {
	return batismo;
}

void Animal::setBatismo(string batismo_) {
	batismo = batismo_;
}

string Animal::getNativoOUexotico() {
	return nativoOUexotico;
}


void Animal::setNativoOUexotico(string nat_){

	nativoOUexotico = nat_;
}





Anfibio::Anfibio() {}
Anfibio::~Anfibio() {}


int Anfibio::getTotalMudas() {
	return total_mudas;
}

void Anfibio::setTotalMUdas(int tm) {
	total_mudas = tm;
}

string Anfibio::getUltimaMuda() {
	return ultima_muda;
}

void Anfibio::setUltimaMuda(string um) {
	ultima_muda = um;
}











Mamifero::Mamifero() {}
Mamifero::~Mamifero() {}

string Mamifero::getCorPelo() {
	return cor_pelo;
}

void Mamifero::setCorPelo(string cp) {
	cor_pelo = cp;
}	














Reptil::Reptil() {}
Reptil::~Reptil() {

}

bool Reptil::getVenenoso() {
	return venenoso;
}


void Reptil::setVenenoso(bool v) {
	venenoso = v;
}

string Reptil::getTipoVeneno() {
	return tipo_veneno;
}

void Reptil::setTipoVeneno(string tv) {
	tipo_veneno = tv;
}










Ave::Ave() {}
Ave::~Ave() {}



int Ave::getTamanhoBico() {
	return tamanho_bico;
}

void Ave::setTamanhoBico(int tb) {
	tamanho_bico = tb;
}

int Ave::getEnvergadura() {
	return envergadura;
}

void Ave::setEnvergadura(int e) {
	envergadura = e;
}













AnfibioNativo::AnfibioNativo() {}
AnfibioNativo::~AnfibioNativo(){}


AnfibioExotico::AnfibioExotico(){}
AnfibioExotico::~AnfibioExotico(){}


MamiferoNativo::MamiferoNativo(){}
MamiferoNativo::~MamiferoNativo(){}


MamiferoExotico::MamiferoExotico(){}
MamiferoExotico::~MamiferoExotico(){}


ReptilNativo::ReptilNativo(){}
ReptilNativo::~ReptilNativo(){}


ReptilExotico::ReptilExotico(){}
ReptilExotico::~ReptilExotico(){}


AveNativo::AveNativo(){}
AveNativo::~AveNativo(){}


AveExotico::AveExotico(){}
AveExotico::~AveExotico(){}















AnimalSilvestre::AnimalSilvestre(){}
AnimalSilvestre::~AnimalSilvestre(){}



string AnimalSilvestre::getIbama(){

	return autorizacao_ibama;
}


void AnimalSilvestre::setIbama(string i) {
	autorizacao_ibama = i;
}














AnimalNativo::AnimalNativo(){}
AnimalNativo::~AnimalNativo(){}


string AnimalNativo::getUf_origem(){

	return uf_origem;
}


void AnimalNativo::setUf_origem(string uf) {
	uf_origem = uf;
}


string AnimalNativo::getAutorizacao(){

	return autorizacao_nativo;
}


void AnimalNativo::setAutorizacao(string auto_nativo) {
	autorizacao_nativo = auto_nativo;

}














AnimalExotico::AnimalExotico(){}
AnimalExotico::~AnimalExotico(){}


string AnimalExotico::getPais_origem(){
	return pais_origem;
}


void AnimalExotico::setPais_origem(string pais) {
	pais_origem = pais;
}


string AnimalExotico::getAutorizacao_exotico(){
	return autorizacao_exotico;
}


void AnimalExotico::setAutorizacao_exotico(string auto_exotico) {
	autorizacao_exotico = auto_exotico;
}




/*

ostream& operator<< (ostream &os, Animal &animals) {

	os << "Identificador do animal: " << animals.id << endl;
	os << "Classe do animal: " << animals.classe << endl;	
	os << "Nome do animal: " << animals.nome << endl;
	os << "Nome científico do animal: " << animals.cientifico << endl;
	os << "Sexo do animal: " << animals.sexo << endl;
	os << "Tamanho médio em metros: " << animals.tamanho << endl;
	os << "Dieta predominante: " << animals.dieta << endl;
	os << "Nome de batismo: " << animals.batismo << endl;
	os << endl;

   

	return os;
}

*/









void ConsultarAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos) {

//Listando somente animais da classe mamalia


	map<int, MamiferoNativo>:: iterator itMN;
	map<int, MamiferoExotico>:: iterator itME;


	for(auto itMN  = listaDeMamiferosNativos.begin(); itMN != listaDeMamiferosNativos.end(); itMN++){


		cout << "Id do animal: " << (itMN->second).getId() << endl;
		cout << "Classe do animal:" << (itMN->second).getClasse() << endl;
		cout << "Nome do animal:" << (itMN->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itMN->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itMN->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itMN->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itMN->second).getDieta() << endl;
		cout << "Nome do Veterinario: " << (itMN->second).getVeterinario() << endl;
		cout << "Nome do Tratador: " << (itMN->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itMN->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itMN->second).getNativoOUexotico() << endl;
		cout << endl;
	}	
	

	for(auto itME  = listaDeMamiferosExoticos.begin(); itME != listaDeMamiferosExoticos.end(); itME++){


		cout << "Id do animal: " << (itME->second).getId() << endl;
		cout << "Classe do animal:" << (itME->second).getClasse() << endl;
		cout << "Nome do animal:" << (itME->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itME->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itME->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itME->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itME->second).getDieta() << endl;
		cout << "Nome do Veterinario: " << (itME->second).getVeterinario() << endl;
		cout << "Nome do Tratador: " << (itME->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itME->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itME->second).getNativoOUexotico() << endl;
		cout << endl;





	}
}





















void RemoverAnimal(map<int, Animal*> &animais) {

	int id;

	cout << "Defina qual o id do animal que se busca: ";
	cin >> id;

    map<int, Animal*>::iterator itM_ =  animais.find(id);

	    if(itM_ != animais.end())
	    {
	        animais.erase(itM_);
	        cout << "Funcionário foi removido com sucesso" << endl;
	    }
	    else
	    {
	        cout << "Funcionario não encontrado" << endl;
	    }

}






void ListarAnimais (map<int, Animal*> &animais) {

	for(auto itM  = animais.begin(); itM != animais.end(); itM++){

		cout << "Identificador do animal: " << (itM->second)->getId() << endl;
		cout << "Classe do animal:" << (itM->second)->getClasse() << endl;
		cout << "Nome do animal:" << (itM->second)->getNome() << endl;
		cout << "Nome científico do animal:" << (itM->second)->getCientifico() << endl;
		cout << "Sexo do animal: " << (itM->second)->getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itM->second)->getTamanho() << endl;
		cout << "Dieta predominante: " << (itM->second)->getDieta() << endl;
		cout << "Nome de batismo: " << (itM->second)->getBatismo() << endl;
		cout << endl;
	}

}