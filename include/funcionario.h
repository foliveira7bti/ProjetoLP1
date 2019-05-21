#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

using namespace std;

#include <string>


class Funcionario 
{
	protected:
		int id;
		string funcao;
		string nome;
		string cpf;
		int idade;
		string tipo_sanguineo;
		string fatorRH;
		string especialidade;
	public:
		Funcionario();
		~Funcionario();

		//Getters e Setters
		int getId();
		void setId(int id_);

		string getNome() const;
		void setNome(string nome_);

		string getCpf();
		void setCpf(string cpf_);

		int getIdade();
		void setIdade(int idade_);

		string getTipo_Sanguineo();
		void setTipo_Sanguineo(string tipo_sanguineo_);

		string getFatorRH();
		void setFatorRH(string fatorRH_);

		string getEspecialidade();
		void setEspecialidade(string especialidade_);
};


#endif