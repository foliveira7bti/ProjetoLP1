#ifndef ANIMAL_H
#define ANIMAL_H

#include "funcionario.h"
#include <string>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Animal {
	protected:
		int id;
		string classe;
		string nome;
		string cientifico;
		string sexo;
		float tamanho;
		string dieta;
		string veterinario;
		string tratador;
		string batismo;
		string nativoOUexotico;
	public:
		Animal();
		~Animal();

		int getId();
		void setId(int id_);
		string getClasse();
		void setClasse(string classe_);
		string getNome();
		void setNome(string nome_);
		string getCientifico();
		void setCientifico(string cientifico_);
		string getSexo();
		void setSexo(string sexo_);
		float getTamanho();
		void setTamanho(float tamanho_);
		string getDieta();
		void setDieta(string dieta_);
		string getVeterinario();
		void setVeterinario(string  v);
		string getTratador();
		void setTratador(string t);
		string getBatismo();
		void setBatismo(string batismo_);
		string getNativoOUexotico();
		void setNativoOUexotico(string nat_);

		
		//friend istream& operator>> (istream &is, Animal &animals);
		//friend ostream& operator<< (ostream &os, Animal &animals);
};







class Anfibio : public Animal {
	protected:
		int total_mudas;
		string ultima_muda;
	public:
		Anfibio();
		~Anfibio();
	
		int getTotalMudas();
		void setTotalMUdas(int tm);
		string getUltimaMuda();
		void setUltimaMuda(string um);



};


class Mamifero : public Animal {
	protected:
		string cor_pelo;
	public:
		Mamifero();
		~Mamifero();

		string getCorPelo();
		void setCorPelo(string cp);


};


class Reptil : public Animal {
	protected:
		bool venenoso;
		string tipo_veneno;
	public:
		Reptil();
		~Reptil();

		bool getVenenoso();
		void setVenenoso(bool v);
		string getTipoVeneno();
		void setTipoVeneno(string tv);

};


class Ave : public Animal {
	protected:
		int tamanho_bico;
		int envergadura;
	public:
		Ave();
		~Ave();

		int getTamanhoBico();
		void setTamanhoBico(int tb);
		int getEnvergadura();
		void setEnvergadura(int e);

};



class AnimalSilvestre
{
	protected:
		string autorizacao_ibama;
	public:
		AnimalSilvestre();
		~AnimalSilvestre();

		string getIbama();
		void setIbama(string i);
};


class AnimalNativo : public AnimalSilvestre
{
	protected:
		string uf_origem;
		string autorizacao_nativo;
	public:
		AnimalNativo();
		~AnimalNativo();

		string getUf_origem();
		void setUf_origem(string uf);
		string getAutorizacao();
		void setAutorizacao(string auto_nativo);
};



class AnimalExotico : public AnimalSilvestre
{
	protected:
		string pais_origem;
		string autorizacao_exotico;
	public:
		AnimalExotico();
		~AnimalExotico();


		string getPais_origem();
		void setPais_origem(string pais);
		string getAutorizacao_exotico();
		void setAutorizacao_exotico(string auto_exotico);
};




class AnfibioNativo : public Anfibio, AnimalNativo
{
	public:
		AnfibioNativo();
		~AnfibioNativo();
};



class AnfibioExotico : public Anfibio, AnimalExotico
{
	public:
		AnfibioExotico();
		~AnfibioExotico();
};

class MamiferoNativo : public Mamifero, AnimalNativo
{
	public:
		MamiferoNativo();
		~MamiferoNativo();
};

class MamiferoExotico : public Mamifero, AnimalExotico
{
	public:
		MamiferoExotico();
		~MamiferoExotico();
};


class ReptilNativo : public Reptil, AnimalNativo
{
	public:
		ReptilNativo();
		~ReptilNativo();
};

class ReptilExotico : public Reptil, AnimalExotico
{
	public:
		ReptilExotico();
		~ReptilExotico();
};

class AveNativo : public Ave, AnimalNativo
{
	public:
		AveNativo();
		~AveNativo();
};

class AveExotico : public Ave, AnimalExotico
{
	public:
		AveExotico();
		~AveExotico();
};










void RemoverAnimal(map<int, Animal*> &animais); 
void ConsultarAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos);
void ListarAnimais (map<int, Animal*> &animais);


#endif