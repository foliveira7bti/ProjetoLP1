#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include <vector>
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"
#include "animal.h"
#include "mamifero.h"
#include "anfibio.h"
#include "reptil.h"
#include "ave.h"
#include "animalsilvestre.h"
#include "mamiferoexotico.h"
#include "mamiferonativo.h"
#include "reptilnativo.h"
#include "reptilexotico.h"
#include "avenativo.h"
#include "aveexotico.h"
#include "anfibionativo.h"
#include "anfibioexotico.h"
#include "animalexotico.h"
#include "animalnativo.h"

using namespace std;

void carregarArquivos();

void ListarVeterinarios(map<int,Veterinario> &listaDeVeterinarios);
void ListarTratadores(map<int,Tratador> &listaDeTratadores);

void searchVeterinario();
void searchTratador();

void RemoverVeterinario(map<int, Veterinario> &listaDeVeterinarios);
void RemoverTratador(map<int,Tratador> &listaDeTratadores);

void listarMamiferosNativos(map<int, MamiferoNativo> &listaDeMamiferosNativos);
void listarMamiferosExoticos(map<int, MamiferoExotico> &listaDeMamiferosExoticos);

void listarRepteisNativos(map<int, ReptilNativo> &listaDeRepteisNativos);
void listarRepteisExoticos(map<int, ReptilExotico> &listaDeRepteisExoticos);

void listarAvesNativas(map<int, AveNativo> &listaDeAvesNativas);
void listarAvesExoticas(map<int, AveExotico> &listaDeAvesExoticas);

void listarAnfibiosNativos(map<int, AnfibioNativo> &listaDeAnfibiosNativos);
void listarAnfibiosExoticos(map<int, AnfibioExotico> &listaDeAnfibiosExoticos);

map<int, Veterinario> listaDeVeterinarios;
map<int, Tratador> listaDeTratadores;

map<int, MamiferoNativo> listaDeMamiferosNativos;
map<int, MamiferoExotico> listaDeMamiferosExoticos;
   
map<int, ReptilNativo> listaDeRepteisNativos;
map<int, ReptilExotico> listaDeRepteisExoticos;

map<int, AveNativo> listaDeAvesNativas;
map<int, AveExotico> listaDeAvesExoticas;

map<int, AnfibioNativo> listaDeAnfibiosNativos;
map<int, AnfibioExotico> listaDeAnfibiosExoticos;

int main() 
{

	carregarArquivos();

	cout << "<<PET FERA>>" << endl;

		while(1) 
		{

 			string op1;
 			int escolha;
 		

		
			cout <<	"	Digite 1 para consultar os Veterinarios" << endl;
			cout <<	"	Digite 2 para consultar os Tratadores" << endl;
			cout <<	"	Digite 3 para remover funcionario especifico cadastrado" << endl;
			cout << "	Digite 4 para consultar animais" << endl;

			cout << "	Digite 5 para consultar lista de animais cadastrados" << endl;
			cout << "	Digite 6 para remover animal especifico cadastrado " << endl;

			cout << "	Digite 7 para sair do PetFera" << endl;

			cout << "Digite sua opção:\n";
			cin >> escolha;


 			switch(escolha)
 			{


 				case 1:
 					int consultVeterinariosOption;
 					cout << "	Que tipo de consulta deseja realizar?" << endl;
 					cout << "1-Listar Veterinarios" << endl;
 					cout << "2-Consultar Veterinarios por id" << endl;
 					cout << "	Digite sua opção: ";
 					cin >> consultVeterinariosOption;

 					switch(consultVeterinariosOption)
 					{
 						case 1:
 							ListarVeterinarios(listaDeVeterinarios);
 							break;
 						case 2:
 							searchVeterinario();
 							break;
 					}

 					break;

 				case 2:

 					int consultTratadoresOption;
 					cout << "	Que tipo de consulta deseja realizar?" << endl;
 					cout << "1-Listar Tratadores" << endl;
 					cout << "2-Consultar Tratadores por id" << endl;
 					cout << "	Digite sua opção: ";
 					cin >> consultTratadoresOption;

 					switch(consultTratadoresOption)
 					{
 						case 1:
 							ListarTratadores(listaDeTratadores);
 							break;
 						case 2:
 							searchTratador();
 							break;
 					}

 					break;

 				case 3:	
 					int removeFuncOption;
 					cout << "	Que tipo de funcionario deseja remover?" << endl;
 					cout << "1-Veterinario" << endl;
 					cout << "2-Tratador" << endl;
 					cout << "	Digite sua opção: ";
 					cin >> removeFuncOption;

 					switch(removeFuncOption)
 					{
 						case 1:

 							RemoverVeterinario(listaDeVeterinarios);
 							break;

 						case 2:

 							RemoverTratador(listaDeTratadores);
 							break;
 					}
 					break;
 		 	
 		 		case 4:
	 		 		int animalOption;


	 		 		cout << "	Escolha a classe do animal para listagem:" << endl;
	 		 		cout << "1-Mammalia" << endl;
	 		 		cout << "2-Amphibia" << endl;
	 		 		cout << "3-Reptilia" << endl;
	 		 		cout << "4-Aves" << endl;

					cin >> animalOption;

	 		 		switch(animalOption)
	 		 		{
			 		 		case 1:
			 				
			 					int mamiferoListingOption;
			 					cout << "	Que tipo de mamifero deseja listar?" << endl;
			 					cout <<"1-Mamifero Nativo" << endl;
			 					cout <<"2-Mamifero Exotico" <<endl;
			 					cout << "	Digite sua opção: ";
 								cin >> mamiferoListingOption;

 								switch(mamiferoListingOption)
 								{
 									case 1:
 										listarMamiferosNativos(listaDeMamiferosNativos);
 										break;
 									case 2:
 										listarMamiferosExoticos(listaDeMamiferosExoticos);
 										break;
 								}
			 					break;

			 				case 2:
			 				
			 					int anfibioListingOption;
			 					cout << "	Que tipo de anfibio deseja listar?" << endl;
			 					cout <<"1-Anfibio Nativo" << endl;
			 					cout <<"2-Anfibio Exotico" <<endl;
			 					cout << "	Digite sua opção: ";
 								cin >> anfibioListingOption;

 								switch(anfibioListingOption)
 								{
 									case 1:
 										listarAnfibiosNativos(listaDeAnfibiosNativos);
 										break;
 									case 2:
 										listarAnfibiosExoticos(listaDeAnfibiosExoticos);
 										break;
 								}
			 					break;

			 				case 3:
			 				
			 					int reptilListingOption;
			 					cout << "	Que tipo de reptil deseja listar?" << endl;
			 					cout <<"1-Reptil Nativo" << endl;
			 					cout <<"2-Reptil Exotico" <<endl;
			 					cout << "	Digite sua opção: ";
 								cin >> reptilListingOption;

 								switch(reptilListingOption)
 								{
 									case 1:
 										listarRepteisNativos(listaDeRepteisNativos);
 										break;
 									case 2:
 										listarRepteisExoticos(listaDeRepteisExoticos);
 										break;
 								}
			 					break;
			 				case 4:
			 				
			 					int aveListingOption;
			 					cout << "	Que tipo de ave deseja listar?" << endl;
			 					cout <<"1-Ave Nativo" << endl;
			 					cout <<"2-Ave Exotico" <<endl;
			 					cout << "	Digite sua opção: ";
 								cin >> aveListingOption;

 								switch(aveListingOption)
 								{
 									case 1:
 										listarAvesNativas(listaDeAvesNativas);
 										break;
 									case 2:
 										listarAvesExoticas(listaDeAvesExoticas);
 										break;
 								}
			 					break;
			 		}
			 		break;

 				case 5:
 			
 						//ListarAnimais (animais);

 						break;

 				case 6:	
 			
 					//RemoverAnimal(animais);

 					break;

 				case 7:
 			 		return EXIT_SUCCESS;	
 			}
		}
	return 0;
}


void carregarArquivos()
{
	/*
		Abertura inicial de todos os arquivos csv
	*/
   
	ifstream veterinarios_arq;
	ifstream tratadores_arq;

	ifstream mamiferosexoticos_arq;
	ifstream mamiferosnativos_arq;

	ifstream repteisexoticos_arq;
	ifstream repteisnativos_arq;

	ifstream avesexoticas_arq;
	ifstream avesnativas_arq;

	ifstream anfibiosexoticos_arq;
	ifstream anfibiosnativos_arq;

	veterinarios_arq.open("data/veterinarios.csv");
	tratadores_arq.open("data/tratadores.csv");

	mamiferosexoticos_arq.open("data/mamiferosexoticos.csv");
	mamiferosnativos_arq.open("data/mamiferosnativos.csv");

	repteisexoticos_arq.open("data/repteisexoticos.csv");
	repteisnativos_arq.open("data/repteisnativos.csv");

	avesexoticas_arq.open("data/avesexoticas.csv");
	avesnativas_arq.open("data/avesnativas.csv");

	anfibiosexoticos_arq.open("data/anfibiosexoticos.csv");
	anfibiosnativos_arq.open("data/anfibiosnativos.csv");




	if(!veterinarios_arq)
	{
		cerr << "O arquivo veterinarios.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!tratadores_arq)
	{
		cerr << "O arquivo tratadores.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!mamiferosexoticos_arq)
	{
		cerr << "O arquivo mamiferosexoticos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!mamiferosnativos_arq)
	{
		cerr << "O arquivo mamiferosnativos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}

	if(!repteisexoticos_arq)
	{
		cerr << "O arquivo repteisexoticos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!repteisnativos_arq)
	{
		cerr << "O arquivo repteisnativos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}

	if(!avesexoticas_arq)
	{
		cerr << "O arquivo avesexoticas.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!avesnativas_arq)
	{
		cerr << "O arquivo avesnativas.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}

	if(!anfibiosexoticos_arq)
	{
		cerr << "O arquivo anfibiosexoticos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}
	if(!anfibiosnativos_arq)
	{
		cerr << "O arquivo anfibiosnativos.csv não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}

	/*
	Leitura do arquivo csv para Veterinarios
	*/

	string linha, temp;
	string vetorCamposVeterinario[9];

	while (getline(veterinarios_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposVeterinario[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposVeterinario[8] = temp;
		temp.erase();

		Veterinario Vet;

		Vet.setId(stoi(vetorCamposVeterinario[0]));
		Vet.setTipoFunc(vetorCamposVeterinario[1]);
		Vet.setNome(vetorCamposVeterinario[2]);
		Vet.setCpf(vetorCamposVeterinario[3]);
		Vet.setIdade(stoi(vetorCamposVeterinario[4]));
		Vet.setTipo_Sanguineo(vetorCamposVeterinario[5]);
		Vet.setFatorRH(vetorCamposVeterinario[6]);
		Vet.setEspecialidade(vetorCamposVeterinario[7]); 
		Vet.setCRMV(vetorCamposVeterinario[8]);


		listaDeVeterinarios.insert(pair<int, Veterinario>(Vet.getId(), Vet));

	}

	veterinarios_arq.close();


	/*
		Leitura do arquivo csv para Tratadores
	*/

	string vetorCamposTratador[9];

	while (getline(tratadores_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposTratador[cont] = temp;
					temp.erase();
					cont++;
				}
			}
	
		vetorCamposTratador[8] = temp;
		temp.erase();

		Tratador Trat;

		Trat.setId(stoi(vetorCamposTratador[0]));
		Trat.setTipoFunc(vetorCamposTratador[1]);
		Trat.setNome(vetorCamposTratador[2]);
		Trat.setCpf(vetorCamposTratador[3]);
		Trat.setIdade(stoi (vetorCamposTratador[4]));
		Trat.setTipo_Sanguineo(vetorCamposTratador[5]);
		Trat.setFatorRH(vetorCamposTratador[6]);
		Trat.setEspecialidade(vetorCamposTratador[7]); 
		Trat.setNivelseguranca(stoi(vetorCamposTratador[8]));
	
		listaDeTratadores.insert(pair<int, Tratador>(Trat.getId(), Trat));
	
	}

	tratadores_arq.close();

	/*
		Leitura do arquivo csv para Mamíferos Exoticos
	*/

	string vetorCamposMamiferoExotico[14];

	int id, vete, trat;
	string c, name, cient, sex, diet, bat, cor, autI, po, aut; 
	float tam;

	while (getline(mamiferosexoticos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposMamiferoExotico[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposMamiferoExotico[13] = temp;
		temp.erase();

		id = stoi(vetorCamposMamiferoExotico[0]);
		c = vetorCamposMamiferoExotico[1];
		name = vetorCamposMamiferoExotico[2];
		cient = vetorCamposMamiferoExotico[3];
		sex = vetorCamposMamiferoExotico[4];
		tam = stof(vetorCamposMamiferoExotico[5]);
		diet = vetorCamposMamiferoExotico[6];
		vete = stoi(vetorCamposMamiferoExotico[7]);
		trat = stoi(vetorCamposMamiferoExotico[8]);
		bat = vetorCamposMamiferoExotico[9];
		cor = vetorCamposMamiferoExotico[10];
		autI = vetorCamposMamiferoExotico[11];
		po = vetorCamposMamiferoExotico[12];
		aut = vetorCamposMamiferoExotico[13];


		listaDeMamiferosExoticos.insert(pair<int, MamiferoExotico>(id, MamiferoExotico(id,c,name,cient,sex,tam,diet,vete,trat,bat,cor,autI,po,aut)));
	}

	mamiferosexoticos_arq.close();

	/*
		Leitura do arquivo csv para Mamiferos Nativos
	*/

	string vetorCamposMamiferoNativo[14];

	string uf;

	while (getline(mamiferosnativos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposMamiferoNativo[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposMamiferoNativo[13] = temp;
		temp.erase();

		id = stoi(vetorCamposMamiferoNativo[0]);
		c = vetorCamposMamiferoNativo[1];
		name = vetorCamposMamiferoNativo[2];
		cient = vetorCamposMamiferoNativo[3];
		sex = vetorCamposMamiferoNativo[4];
		tam = stof(vetorCamposMamiferoNativo[5]);
		diet = vetorCamposMamiferoNativo[6];
		vete = stoi(vetorCamposMamiferoNativo[7]);
		trat = stoi(vetorCamposMamiferoNativo[8]);
		bat = vetorCamposMamiferoNativo[9];
		cor = vetorCamposMamiferoNativo[10];
		autI = vetorCamposMamiferoNativo[11];
		uf = vetorCamposMamiferoNativo[12];
		aut = vetorCamposMamiferoNativo[13];


		listaDeMamiferosNativos.insert(pair<int, MamiferoNativo>(id, MamiferoNativo(id,c,name,cient,sex,tam,diet,vete,trat,bat,cor,autI,uf,aut)));
	}

	mamiferosnativos_arq.close();

	/*
		Leitura do arquivo csv para Repteis Exoticos
	*/

	string vetorCamposReptilExotico[15];

	bool ven;
	string tipo;

	while (getline(repteisexoticos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposReptilExotico[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposReptilExotico[14] = temp;
		temp.erase();

		id = stoi(vetorCamposReptilExotico[0]);
		c = vetorCamposReptilExotico[1];
		name = vetorCamposReptilExotico[2];
		cient = vetorCamposReptilExotico[3];
		sex = vetorCamposReptilExotico[4];
		tam = stof(vetorCamposReptilExotico[5]);
		diet = vetorCamposReptilExotico[6];
		vete = stoi(vetorCamposReptilExotico[7]);
		trat = stoi(vetorCamposReptilExotico[8]);
		bat = vetorCamposReptilExotico[9];
		if(vetorCamposReptilExotico[10] == "true")
			{
				ven = true;
			}
		else
			{
				ven = false;
			}
		tipo = vetorCamposReptilExotico[11];
		autI = vetorCamposReptilExotico[12];
		po = vetorCamposReptilExotico[13];
		aut = vetorCamposReptilExotico[14];


		listaDeRepteisExoticos.insert(pair<int, ReptilExotico>(id, ReptilExotico(id,c,name,cient,sex,tam,diet,vete,trat,bat,ven,tipo,autI,po,aut)));
	}

	repteisexoticos_arq.close();

	/*
		Leitura do arquivo csv para Repteis Nativos
	*/

	string vetorCamposReptilNativo[15];

	while (getline(repteisnativos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposReptilNativo[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposMamiferoNativo[14] = temp;
		temp.erase();

		id = stoi(vetorCamposReptilNativo[0]);
		c = vetorCamposReptilNativo[1];
		name = vetorCamposReptilNativo[2];
		cient = vetorCamposReptilNativo[3];
		sex = vetorCamposReptilNativo[4];
		tam = stof(vetorCamposReptilNativo[5]);
		diet = vetorCamposReptilNativo[6];
		vete = stoi(vetorCamposReptilNativo[7]);
		trat = stoi(vetorCamposReptilNativo[8]);
		bat = vetorCamposReptilNativo[9];
		if(vetorCamposReptilNativo[10] == "true")
			{
				ven = true;
			}
		else
			{
				ven = false;
			}
		tipo = vetorCamposReptilNativo[11];
		autI = vetorCamposReptilNativo[12];
		uf = vetorCamposReptilNativo[13];
		aut = vetorCamposReptilNativo[14];


		listaDeRepteisNativos.insert(pair<int, ReptilNativo>(id, ReptilNativo(id,c,name,cient,sex,tam,diet,vete,trat,bat,ven,tipo,autI,uf,aut)));
	}

	repteisnativos_arq.close();

	/*
		Leitura do arquivo csv para Aves Exoticas
	*/

	string vetorCamposAveExotico[15];

	int bico, env;

	while (getline(avesexoticas_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposAveExotico[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposAveExotico[14] = temp;
		temp.erase();

		id = stoi(vetorCamposAveExotico[0]);
		c = vetorCamposAveExotico[1];
		name = vetorCamposAveExotico[2];
		cient = vetorCamposAveExotico[3];
		sex = vetorCamposAveExotico[4];
		tam = stof(vetorCamposAveExotico[5]);
		diet = vetorCamposAveExotico[6];
		vete = stoi(vetorCamposAveExotico[7]);
		trat = stoi(vetorCamposAveExotico[8]);
		bat = vetorCamposAveExotico[9];
		bico = stoi(vetorCamposAveExotico[10]);
		env = stoi(vetorCamposAveExotico[11]);
		autI = vetorCamposAveExotico[12];
		po = vetorCamposAveExotico[13];
		aut = vetorCamposAveExotico[14];


		listaDeAvesExoticas.insert(pair<int, AveExotico>(id, AveExotico(id,c,name,cient,sex,tam,diet,vete,trat,bat,bico,env,autI,po,aut)));
	}

	avesexoticas_arq.close();

	/*
		Leitura do arquivo csv para Aves Nativos
	*/

	string vetorCamposAveNativo[15];

	while (getline(avesnativas_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposAveNativo[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposAveNativo[14] = temp;
		temp.erase();

		id = stoi(vetorCamposAveNativo[0]);
		c = vetorCamposAveNativo[1];
		name = vetorCamposAveNativo[2];
		cient = vetorCamposAveNativo[3];
		sex = vetorCamposAveNativo[4];
		tam = stof(vetorCamposAveNativo[5]);
		diet = vetorCamposAveNativo[6];
		vete = stoi(vetorCamposAveNativo[7]);
		trat = stoi(vetorCamposAveNativo[8]);
		bat = vetorCamposAveNativo[9];
		bico = stoi(vetorCamposAveNativo[10]);
		env = stoi(vetorCamposAveNativo[11]);
		autI = vetorCamposAveNativo[12];
		uf = vetorCamposAveNativo[13];
		aut = vetorCamposAveNativo[14];


		listaDeAvesNativas.insert(pair<int, AveNativo>(id, AveNativo(id,c,name,cient,sex,tam,diet,vete,trat,bat,bico,env,autI,uf,aut)));
	}

	avesnativas_arq.close();

		/*
		Leitura do arquivo csv para Anfibios Exoticos
		*/

	string vetorCamposAnfibioExotico[15];

	int mudas;
	string data;

	while (getline(anfibiosexoticos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposAnfibioExotico[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposAnfibioExotico[14] = temp;
		temp.erase();

		id = stoi(vetorCamposAnfibioExotico[0]);
		c = vetorCamposAnfibioExotico[1];
		name = vetorCamposAnfibioExotico[2];
		cient = vetorCamposAnfibioExotico[3];
		sex = vetorCamposAnfibioExotico[4];
		tam = stof(vetorCamposAnfibioExotico[5]);
		diet = vetorCamposAnfibioExotico[6];
		vete = stoi(vetorCamposAnfibioExotico[7]);
		trat = stoi(vetorCamposAnfibioExotico[8]);
		bat = vetorCamposAnfibioExotico[9];
		mudas = stoi(vetorCamposAnfibioExotico[10]);
		data = vetorCamposAnfibioExotico[11];
		autI = vetorCamposAnfibioExotico[12];
		po = vetorCamposAnfibioExotico[13];
		aut = vetorCamposAnfibioExotico[14];


		listaDeAnfibiosExoticos.insert(pair<int, AnfibioExotico>(id, AnfibioExotico(id,c,name,cient,sex,tam,diet,vete,trat,bat,mudas,data,autI,po,aut)));
	}

	anfibiosexoticos_arq.close();

	/*
		Leitura do arquivo csv para Anfibios Nativos
	*/

	string vetorCamposAnfibioNativo[15];

	while (getline(anfibiosnativos_arq, linha))
	{
		int cont = 0;
			for(unsigned int i=0; i < linha.length();i++)
			{
				if(linha[i] != ';')
				{
					temp.push_back(linha[i]);
				}
				else
				{
					vetorCamposAnfibioNativo[cont] = temp;
					temp.erase();
					cont++;
				}
			}
		vetorCamposAnfibioNativo[14] = temp;
		temp.erase();

		id = stoi(vetorCamposAnfibioNativo[0]);
		c = vetorCamposAnfibioNativo[1];
		name = vetorCamposAnfibioNativo[2];
		cient = vetorCamposAnfibioNativo[3];
		sex = vetorCamposAnfibioNativo[4];
		tam = stof(vetorCamposAnfibioNativo[5]);
		diet = vetorCamposAnfibioNativo[6];
		vete = stoi(vetorCamposAnfibioNativo[7]);
		trat = stoi(vetorCamposAnfibioNativo[8]);
		bat = vetorCamposAnfibioNativo[9];
		mudas = stoi(vetorCamposAnfibioNativo[10]);
		data = vetorCamposAnfibioNativo[11];
		autI = vetorCamposAnfibioNativo[12];
		uf = vetorCamposAnfibioNativo[13];
		aut = vetorCamposAnfibioNativo[14];


		listaDeAnfibiosNativos.insert(pair<int, AnfibioNativo>(id, AnfibioNativo(id,c,name,cient,sex,tam,diet,vete,trat,bat,mudas,data,autI,uf,aut)));
	}

	anfibiosnativos_arq.close();
}


void searchVeterinario()
{
	int id;

	cout << "	Digite o id que deseja buscar: ";
	cin >> id;

	map<int, Veterinario>::iterator itV = listaDeVeterinarios.find(id);

	if (itV != listaDeVeterinarios.end())
	{
		cout << "Identificador do funcionário: " << (itV->second).getId() << endl;
		cout << "Função: " << (itV->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itV->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itV->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itV->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itV->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itV->second).getFatorRH() << endl;
		cout << "Especialidade: " << (itV->second).getEspecialidade() << endl;
		cout << "CRMV: " << (itV->second).getCRMV() << endl;
		cout << endl;
	}
}

void searchTratador()
{
	int id;

	cout << "	Digite o id que deseja buscar: ";
	cin >> id;
	
	map<int, Tratador>::iterator itT = listaDeTratadores.find(id);

	if (itT != listaDeTratadores.end())
	{
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

void RemoverVeterinario(map<int,Veterinario> &listaDeVeterinarios)
{
	int id;
	cout << "Digite o ID a ser removido: ";
	cin >> id;

	map<int, Veterinario>::iterator itV =  listaDeVeterinarios.find(id);

	    if(itV != listaDeVeterinarios.end())
	    {
	        listaDeVeterinarios.erase(itV);
	        cout << "Veterinario " << id << " foi removido com sucesso" << endl;
	    }
}

void RemoverTratador(map<int,Tratador> &listaDeTratadores)
{
	int id;
	cout << "Digite o ID a ser removido: ";
	cin >> id;

	map<int, Tratador>::iterator itV =  listaDeTratadores.find(id);

	    if(itV != listaDeTratadores.end())
	    {
	        listaDeTratadores.erase(itV);
	        cout << "Tratador " << id << " foi removido com sucesso" << endl;
	    }
}


void RemoverFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores) 
{
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

void ListarVeterinarios (map<int, Veterinario> &listaDeVeterinarios)
{

	map<int, Veterinario>::iterator itV;

	for(auto itV  = listaDeVeterinarios.begin(); itV != listaDeVeterinarios.end(); itV++)
	{
		cout << "Identificador do funcionário: " << (itV->second).getId() << endl;
		cout << "Função: " << (itV->second).getTipoFunc() << endl;
		cout << "Nome do funcionário: " << (itV->second).getNome() << endl;
		cout << "CPF do funcionário: " << (itV->second).getCpf() << endl;
		cout << "Idade do funcionário: " << (itV->second).getIdade()<< endl;
		cout << "Tipo Sanguíneo: " << (itV->second).getTipo_Sanguineo() << endl;
		cout << "Fator RH: " << (itV->second).getFatorRH() << endl;
		cout << "Especialidade: " << (itV->second).getEspecialidade() << endl;
		cout << "CRMV: " << (itV->second).getCRMV() << endl;
		cout << endl;
	}
}

void ListarTratadores(map<int,Tratador> &listaDeTratadores)
{
	for(auto itT  = listaDeTratadores.begin(); itT != listaDeTratadores.end(); itT++)
	{
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

void listarMamiferosNativos(map<int, MamiferoNativo> &listaDeMamiferosNativos)
{
	map<int,MamiferoNativo>:: iterator itMN;

	for(auto itMN = listaDeMamiferosNativos.begin();itMN != listaDeMamiferosNativos.end();itMN++)
	{
		cout << itMN->second << endl;
	}

}

void listarMamiferosExoticos(map<int, MamiferoExotico> &listaDeMamiferosExoticos)
{
	map<int,MamiferoExotico>:: iterator itME;

	for(auto itME = listaDeMamiferosExoticos.begin();itME != listaDeMamiferosExoticos.end();itME++)
	{
		cout << itME->second << endl;
	}
}

void listarRepteisNativos(map<int, ReptilNativo> &listaDeRepteisNativos)
{
	map<int,ReptilNativo>:: iterator itRN;

	for(auto itRN = listaDeRepteisNativos.begin();itRN != listaDeRepteisNativos.end();itRN++)
	{
		cout << itRN->second << endl;
	}
}

void listarRepteisExoticos(map<int, ReptilExotico> &listaDeRepteisExoticos)
{
	map<int,ReptilExotico>:: iterator itRE;

	for(auto itRE = listaDeRepteisExoticos.begin();itRE != listaDeRepteisExoticos.end();itRE++)
	{
		cout << itRE->second << endl;
	}
}

void listarAvesNativas(map<int, AveNativo> &listaDeAvesNativas)
{
	map<int,AveNativo>:: iterator itAN;

	for(auto itAN = listaDeAvesNativas.begin();itAN != listaDeAvesNativas.end();itAN++)
	{
		cout << itAN->second << endl;
	}
}

void listarAvesExoticas(map<int, AveExotico> &listaDeAvesExoticas)
{
	map<int,AveExotico>:: iterator itAE;

	for(auto itAE = listaDeAvesExoticas.begin();itAE != listaDeAvesExoticas.end();itAE++)
	{
		cout << itAE->second << endl;
	}
}


void listarAnfibiosNativos(map<int, AnfibioNativo> &listaDeAnfibiosNativos)
{
	map<int,AnfibioNativo>:: iterator itANFN;

	for(auto itANFN = listaDeAnfibiosNativos.begin();itANFN != listaDeAnfibiosNativos.end();itANFN++)
	{
		cout << itANFN->second << endl;
	}
}

void listarAnfibiosExoticos(map<int, AnfibioExotico> &listaDeAnfibiosExoticos)
{
	map<int,AnfibioExotico>:: iterator itANFE;

	for(auto itANFE = listaDeAnfibiosExoticos.begin();itANFE != listaDeAnfibiosExoticos.end();itANFE++)
	{
		cout << itANFE->second << endl;
	}
}