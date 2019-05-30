#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>




using namespace std;


class Funcionario {

	protected:


		int id;
		string tipofunc;
		string nome;
		string cpf;
		int idade;
		string tipo_sanguineo;
		string fatorRH;
		string especialidade;
	public:
		Funcionario();
		~Funcionario();

		int getId();
		void setId(int a);
		string getTipoFunc();
		void setTipoFunc(string b);
		string getNome();
		void setNome(string c);
		string getCpf();
		void setCpf(string d);
		int getIdade();
		void setIdade(int e);
		string getTipo_Sanguineo();
		void setTipo_Sanguineo(string f);
		string getFatorRH();
		void setFatorRH(string g);
		string getEspecialidade();
		void setEspecialidade(string h);
		



		//friend istream& operator>> (istream &is, Funcionario &func);
		//friend ostream& operator<< (ostream &os, Funcionario &func);
};






#endif