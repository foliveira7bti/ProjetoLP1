#include <iostream>
#include "funcionario.h"
#include "animal.h"
#include <string>
#include <map>
#include <fstream>
#include <iterator>
/*
#include "MamiferoNativo.h"
#include "MamiferoExotico.h"
#include "ReptilNativo.h"
#include "ReptilExotico.h"
#include "AveNativo.h"
#include "AveExotico.h"
#include "AnfibioNativo.h"
#include "AnfibioExotico.h"
#include "AnimalExotico.h"
#include "AnimalNativo.h"*/

using namespace std;

int main()
{
	map<int, Veterinario> listaDeVeterinarios;
	map<int, Tratador> listaDeTratadores;
/*
	map<int, MamiferoNativo> listaDeMamiferosNativos;
	map<int, MamiferoExotico> listaDeMamiferosExoticos;

	map<int, ReptilNativo> listaDeRepteisNativos;
	map<int, ReptilExotico> listaDeRepteisExoticos;

	map<int, AveNativo> listaDeAvesNativas;
	map<int, AveExotico> listaDeAvesExoticas;

	map<int, AnfibioNativo> listaDeAnfibiosNativos;
	map<int, AnfibioExotico> listaDeAnfibiosExoticos;*/

	ifstream csvFuncionarios;
	ifstream csvAnimais;

	csvFuncionarios.open("data/funcionarios.csv");
	csvAnimais.open("data/animais.csv");

	if(!csvFuncionarios.is_open())
	{
		cerr << "Arquivo de funcionarios não foi aberto";
		exit(0);
	}
	if(!csvAnimais.is_open())
	{
		cerr << "Arquivo de animais não foi aberto";
		exit(0);
	}

	/*
		Preenchendo o mapa de funcionarios. Enquanto não ouver nenhum erro de stream, vai ler o arquivo. Lê-se até chegar no eof(end of file).
		Cria-se variáveis representando os dados na mesma ordem do csv (consulte readme) e criamos objetos com os dados armazenados
		nessas variáveis e por fim o adicionamos ao mapa.
	*/

	string id;
	string funcao;
	string nome;
	string cpf;
	string idade;
	string tipo_sanguineo;
	string fatorRH;
	string especialidade;
	string codigocrmv;
	string niveldeseguranca;

	while (csvFuncionarios.good())
	{
		getline(csvFuncionarios, id, ';');
		getline(csvFuncionarios, funcao, ';');
		getline(csvFuncionarios, nome, ';');
		getline(csvFuncionarios, cpf, ';');
		getline(csvFuncionarios, idade, ';');
		getline(csvFuncionarios, tipo_sanguineo, ';');
		getline(csvFuncionarios, fatorRH, ';');
		getline(csvFuncionarios, especialidade, ';');
		getline(csvFuncionarios, codigocrmv, ';');
		getline(csvFuncionarios, niveldeseguranca, '\n');

		if(codigocrmv!="-1")
		{ 
			listaDeVeterinarios.insert(make_pair(stoi(id), Veterinario(stoi(id),funcao,nome,cpf,stoi(idade),tipo_sanguineo,fatorRH,especialidade,codigocrmv)));
		}
		else
		{ 
			listaDeTratadores.insert(make_pair(stoi(id), Tratador(stoi(id),funcao,nome,cpf,stoi(idade),tipo_sanguineo,fatorRH,especialidade,stoi(niveldeseguranca))));
		}
	}

	csvFuncionarios.close();

/*
	Prenchendo o mapa de Animais. Enquanto não ouver nenhum erro de stream, vai ler o arquivo até chegar no eof(end of file). Similarmente
	ao caso dos funcionários, vamos criar variáveis, e inserir os objetos no mapa.
*/

	/*
	string id;
	string classe;
	string nome;
	string nomeCientifico;
	string sexo;
	string tamanhoMedio;
	string dieta;
	string veterinarioAssociado;
	string tratadorResponsavel;
	string nomeBatismo;
	string NativoOuExotico;

	while (csvAnimais.good())
	{
		getline(csvAnimais, id, ';');
		getline(csvAnimais, classe, ';');
		getline(csvAnimais, nome, ';');
		getline(csvAnimais, nomeCientifico, ';');
		getline(csvAnimais, sexo, ';');
		getline(csvAnimais, tamanhoMedio, ';');
		getline(csvAnimais, dieta, ';');
		getline(csvAnimais, veterinarioAssociado, ';');
		getline(csvAnimais, tratadorResponsavel, ';');
		getline(csvAnimais, nomeBatismo, ';');
		getline(csvAnimais, NativoOuExotico, '\n');

		if(classe == Mammalia && NativoOuExotico == "Nativo")
		{
			listaDeMamiferosNativos.insert(make_pair(stoi(id), MamiferoNativo() );
		}

		else if(classe == Mammalia && NativoOuExotico == "Exotico")
		{
			listaDeMamiferosExoticos.insert(make_pair(stoi(id), );
		}

		else if(classe == Amphibia && NativoOuExotico == "Nativo")
		{
			listaDeAnfibiosNativos.insert(make_pair(stoi(id), );
		}
		
		else if(classe == Amphibia && NativoOuExotico == "Exotico")
		{
			listaDeAnfibiosExoticos.insert(make_pair(stoi(id), );
		}

		else if(classe == Ave && NativoOuExotico == "Nativo")
		{
			listaDeAvesNativas.insert(make_pair(stoi(id), );
		}

		else if(classe == Ave && NativoOuExotico == "Exotico")
		{
			listaDeAvesExoticas.insert(make_pair(stoi(id), );
		}

		else if(classe == Reptilia && NativoOuExotico == "Nativo")
		{
			listaDeRepteisNativos.insert(make_pair(stoi(id), );
		}

		else if(classe == Reptilia && NativoOuExotico == "Exotico")
		{
			listaDeRepteisExoticos.insert(make_pair(stoi(id), );
		}
	}
	*/




	
	for(auto it = listaDeVeterinarios.begin(); it != listaDeVeterinarios.end(); it++)
	{
		cout << it->first << it->second << endl;
	}

	for(auto it = listaDeTratadores.begin(); it != listaDeTratadores.end(); it++)
	{
		cout << it->first << it->second << endl;
	}

	return 0;
}