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




class Veterinario : public Funcionario {
	private:
		string crmv;

	public:
		Veterinario();
		//Veterinario(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, string codigocrmv_);
		~Veterinario();
		string getcrmv();
		void setcrmv(string c);
};


class Tratador : public Funcionario {
	private:
		int nivel_de_seguranca;

	public:
		Tratador();
		//Tratador(int id_, string funcao_, string nome_, string cpf_, int idade_, string tipo_sanguineo_, string fatorRH_, string especialidade_, int nivel_de_seguranca_);
		~Tratador();
		int getNivelseguranca();
		void setNivelseguranca(int n);
};



/*
template <typename T, typename U>
			void imprimir(map<T, shared_ptr<U>> lista)
			{
				for(auto i = lista.begin(); i != lista.end(); i++)
				{
					cout << *(i->second);
				}
			}

*/



void RemoverFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);
void ConsultarFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);
void ListarFuncionarios (map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);

#endif