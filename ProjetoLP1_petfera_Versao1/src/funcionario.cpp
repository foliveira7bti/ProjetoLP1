#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include "funcionario.h"


using namespace std;

Funcionario::Funcionario() {}
Funcionario::~Funcionario() {}

int Funcionario::getId() {
	return id;
}

void Funcionario::setId(int i) {
	id = i;
}


string Funcionario::getTipoFunc() {
	return tipofunc;
}

void Funcionario::setTipoFunc(string t) {
	tipofunc = t;
}


string Funcionario::getNome() {
	return nome;
}

void Funcionario::setNome(string n) {
	nome = n;
}

string Funcionario::getCpf() {
	return cpf;
}

void Funcionario::setCpf(string c) {
	cpf = c;
}

int Funcionario::getIdade() {
	return idade;
}

void Funcionario::setIdade(int i) {
	idade = i;
}

string Funcionario::getTipo_Sanguineo() {
	return tipo_sanguineo;
}

void Funcionario::setTipo_Sanguineo(string ts) {
	tipo_sanguineo = ts;
}

string Funcionario::getFatorRH() {
	return fatorRH;
}

void Funcionario::setFatorRH(string rh) {
	fatorRH = rh;
}

string Funcionario::getEspecialidade() {
	return especialidade;
}

void Funcionario::setEspecialidade(string e) {
	especialidade = e;
}





/*
Veterinario::Veterinario(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, string codigocrmv_) {

	setId(id_);
	setTipoFunc(funcao_);
	setNome(nome_);
	setCpf(cpf_);
	setIdade(idade_);
	setTipo_Sanguineo(tipo_sanguineo_);
	setFatorRH(fatorRH_);
	setEspecialidade(especialidade_);
	setcrmv(codigocrmv_);

}
*/

Veterinario::Veterinario() {}
Veterinario::~Veterinario() {}

void Veterinario::setcrmv(string c) {
	crmv = c;
}
string Veterinario::getcrmv() {
	return crmv;
}







/*
Tratador::Tratador(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, int nivel_de_seguranca_) {

	setId(id_);
	setTipoFunc(funcao_);
	setNome(nome_);
	setCpf(cpf_);
	setIdade(idade_);
	setTipo_Sanguineo(tipo_sanguineo_);
	setFatorRH(fatorRH_);
	setEspecialidade(especialidade_);
	setNivelseguranca(nivel_de_seguranca_);
}
*/
Tratador::Tratador() {}
Tratador::~Tratador() {}

void Tratador::setNivelseguranca(int n) {
	nivel_de_seguranca = n;
}
int Tratador::getNivelseguranca() {
	return nivel_de_seguranca;
}

	











void ConsultarFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores) {

	int id;

	cout << "Defina qual o id do funcionário que se busca: ";
	cin >> id;

	map<int, Veterinario>::iterator itV = listaDeVeterinarios.find(id);
	map<int, Tratador>::iterator itT = listaDeTratadores.find(id);

	if (itV != listaDeVeterinarios.end()){


		cout << "Identificador do funcionário: " << (itV->second).getId() << endl;
		cout << "Função: " << (itV->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itV->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itV->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itV->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itV->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itV->second).getFatorRH() << endl;
		cout << "Especialidade: " << (itV->second).getEspecialidade() << endl;
		cout << "CRMV: " << (itV->second).getcrmv() << endl;
		cout << endl;
	}

	if (itT != listaDeTratadores.end()){


		cout << "Identificador do funcionário: " << (itT->second).getId() << endl;
		cout << "Função: " << (itT->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itT->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itT->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itT->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itT->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itT->second).getFatorRH() << endl;
		cout << "Nivel de Seguranca: " << (itT->second).getNivelseguranca() << endl;
		cout << endl;
	}
}




void RemoverFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores) {

	int id;

	cout << "Defina qual o id do funcionário que se busca: ";
	cin >> id;



    map<int, Veterinario>::iterator itV =  listaDeVeterinarios.find(id);

	    if(itV != listaDeVeterinarios.end())
	    {
	        listaDeVeterinarios.erase(itV);
	        cout << "Funcionário foi removido com sucesso" << endl;
	    }


	

    map<int, Tratador>::iterator itT =  listaDeTratadores.find(id);

		if(itT != listaDeTratadores.end())
		{
		    listaDeTratadores.erase(itT);
		    cout << "Funcionário foi removido com sucesso" << endl;
		}



}






void ListarFuncionarios (map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores) {




	map<int, Veterinario>::iterator itV;
	map<int, Tratador>::iterator itT;

	for(auto itV  = listaDeVeterinarios.begin(); itV != listaDeVeterinarios.end(); itV++){


		cout << "Identificador do funcionário: " << (itV->second).getId() << endl;
		cout << "Função: " << (itV->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itV->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itV->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itV->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itV->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itV->second).getFatorRH() << endl;
		cout << "Especialidade: " << (itV->second).getEspecialidade() << endl;
		cout << "CRMV: " << (itV->second).getcrmv() << endl;
		cout << endl;
	}

	for(auto itT  = listaDeTratadores.begin(); itT != listaDeTratadores.end(); itT++){


		cout << "Identificador do funcionário: " << (itT->second).getId() << endl;
		cout << "Função: " << (itT->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itT->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itT->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itT->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itT->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itT->second).getFatorRH() << endl;
		cout << "Especialidade: " << (itT->second).getEspecialidade() << endl;
		cout << "Nivel de Seguranca: " << (itT->second).getNivelseguranca() << endl;
		cout << endl;
	}

}	








/*
istream& operator>> (istream &is, Funcionario &func) {
	string linha,escolha_funcionario;
	int i;
	getline(is, linha);
	istringstream iss(linha);

	iss >> i;	
	iss.ignore();
	getline(iss, escolha_funcionario, ';');

	func.id = i;
	func.tipofunc = escolha_funcionario;
	getline(iss, func.nome, ';');			
    getline(iss, func.cpf, ';');	
    iss >> func.idade;						
    iss.ignore();
    getline(iss, func.tipo_sanguineo, ';');					
    iss >> func.fatorRH;		
	iss.ignore();					
    getline(iss, func.especialidade, ';');  


	

 cout << "entrou no isssssssssssssss" << endl;

 return is;
}
*/


 /*

	string id, idade;

	getline(is, id, ';');
		func.id = stoi (id);
	getline(is, func.tipofunc, ';');
	getline(is, func.nome, ';');	
	getline(is, func.cpf, ';');	
	getline(is, idade, ';');	
		func.idade = stoi (idade);
	getline(is, func.tipo_sanguineo, ';');	
	getline(is, func.fatorRH, ';');	
	getline(is, func.especialidade, ';');	

*/


/*


	string linha,escolha_funcionario;
	int i;
	getline(is, linha);
	istringstream iss(linha);

	iss >> i;	
	iss.ignore();
	getline(iss, escolha_funcionario, ';');

	func.id = i;
	func.tipofunc = escolha_funcionario;
	getline(iss, func.nome, ';');			
    getline(iss, func.cpf, ';');	
    iss >> func.idade;						
    iss.ignore();						
    getline(iss, func.tipo_sanguineo, ';');
    getline (iss,func.fatorRH, ';');						
    getline(iss, func.especialidade, ';');  


    return is;
}*/

/*

ostream& operator<< (ostream &os, Funcionario &func) {

	os << "Identificador do funcionário: " << func.id << endl;
	os << "Função: " << func.tipofunc << endl;
	os << "Nome do funcionário: " << func.nome << endl;
	os << "CPF do funcionário: " << func.cpf << endl;
	os << "Idade do funcionário: " << func.idade << endl;
	os << "Tipo Sanguíneo: " << func.tipo_sanguineo << endl;
	os << "Fator RH: " << func.fatorRH << endl;
	os << "Especialidade: " << func.especialidade << endl;
	cout << endl;

	return os;
}

*/
