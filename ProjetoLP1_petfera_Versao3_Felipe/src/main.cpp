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


void RemoverFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);
void ConsultarFuncionario(map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);
void ListarFuncionarios (map<int, Veterinario> &listaDeVeterinarios, map<int, Tratador> &listaDeTratadores);
void ConsultarAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos);
void ListarAnimais (map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos);
void RemoverAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos);

int main() {

	map<int, Veterinario> listaDeVeterinarios;
    map<int, Tratador> listaDeTratadores;



    map<int, MamiferoNativo> listaDeMamiferosNativos;
	map<int, MamiferoExotico> listaDeMamiferosExoticos;

    //map<int, Funcionario> funcionarios;
    //map<int, Animal*> animais;
   

	map<int, ReptilNativo> listaDeRepteisNativos;
	map<int, ReptilExotico> listaDeRepteisExoticos;

	//map<int, AveNativo> listaDeAvesNativas;
	//map<int, AveExotico> listaDeAvesExoticas;

	//map<int, AnfibioNativo> listaDeAnfibiosNativos;
	//map<int, AnfibioExotico> listaDeAnfibiosExoticos;


   
	ifstream funcionarios_arq;
	ifstream animais_arq;

	funcionarios_arq.open("data/funcionarios.csv");
	animais_arq.open("data/animais.csv");


	if(!funcionarios_arq || !animais_arq) {
		cerr << "O arquivo não foi encontrado" << endl;
		cerr << "O programa será encerrado" << endl;
		exit(1);
	}


string linha;
for (int i = 0; i < 10; i++) {


	getline(funcionarios_arq, linha);
                

	stringstream aux(linha);
    string id, funcao, nome, cpf, idade, tipo_sang, fator_rh, especialidade, codigocrmv, niveldeseguranca;
        
        getline(aux, id, ';');
        getline(aux, funcao, ';');
        getline(aux, nome, ';');
        getline(aux, cpf, ';');
        getline(aux, idade,';');
        getline(aux, tipo_sang, ';');
        getline(aux, fator_rh, ';');
        getline(aux, especialidade, ';'); 
        getline(aux, codigocrmv, ';');
		getline(aux, niveldeseguranca, ';');          
		

		if(codigocrmv!="-1"){
			Veterinario Vet;

			Vet.setId(stoi (id));
			Vet.setTipoFunc(funcao);
			Vet.setNome(nome);
			Vet.setCpf(cpf);
			Vet.setIdade(stoi (idade));
			Vet.setTipo_Sanguineo(tipo_sang);
			Vet.setFatorRH(fator_rh);
			Vet.setEspecialidade(especialidade); 
			Vet.setCRMV(codigocrmv);


			listaDeVeterinarios.insert(pair<int, Veterinario>(stoi(id), Vet));
		}

		else
		{ 
			Tratador Trat;

			Trat.setId(stoi (id));
			Trat.setTipoFunc(funcao);
			Trat.setNome(nome);
			Trat.setCpf(cpf);
			Trat.setIdade(stoi (idade));
			Trat.setTipo_Sanguineo(tipo_sang);
			Trat.setFatorRH(fator_rh);
			Trat.setEspecialidade(especialidade); 
			Trat.setNivelseguranca(stoi (niveldeseguranca));


			listaDeTratadores.insert(pair<int, Tratador>(stoi(id), Trat));
		}


}

funcionarios_arq.close();

   
string linha2;
for (int j = 0; j < 5; j++) {


	getline(animais_arq, linha2);
                

	stringstream aux(linha2);
    string id, classe, nome, nomeCientifico, sexo, tamanhoMedio, dieta, batismo, veterinarioAssociado, tratadorResponsavel, nomeBatismo, NativoOuExotico;


        getline(aux, id, ';');
		getline(aux, classe, ';');
		getline(aux, nome, ';');
		getline(aux, nomeCientifico, ';');
		getline(aux, sexo, ';');
		getline(aux, tamanhoMedio, ';');
		getline(aux, dieta, ';');
		getline(aux, veterinarioAssociado, ';');
		getline(aux, tratadorResponsavel, ';');
		getline(aux, nomeBatismo, ';');
		getline(aux, NativoOuExotico, '\n');     


		if(classe == "Mammalia" && NativoOuExotico == "Nativo")
		{

			MamiferoNativo MN;

			MN.setId(stoi (id));
			MN.setClasse(classe);
			MN.setNome(nome);
			MN.setCientifico(nomeCientifico);
			MN.setSexo( sexo);
			MN.setTamanho(stof (tamanhoMedio));
			MN.setDieta(dieta);
			//MN.setVeterinario(veterinarioAssociado); 
			//MN.setTratador(tratadorResponsavel);
			MN.setBatismo(nomeBatismo);
			MN.setNativoOUexotico(NativoOuExotico);



			listaDeMamiferosNativos.insert(pair<int, MamiferoNativo>(stoi(id), MN));
		}


		else if(classe == "Mammalia" && NativoOuExotico == "Exotico")
		{
			MamiferoExotico ME;

			ME.setId(stoi (id));
			ME.setClasse(classe);
			ME.setNome(nome);
			ME.setCientifico(nomeCientifico);
			ME.setSexo( sexo);
			ME.setTamanho(stof (tamanhoMedio));
			ME.setDieta(dieta);
			//ME.setVeterinario(veterinarioAssociado); 
			//ME.setTratador(tratadorResponsavel);
			ME.setBatismo(nomeBatismo);
			ME.setNativoOUexotico(NativoOuExotico);

			listaDeMamiferosExoticos.insert(pair<int, MamiferoExotico>(stoi(id), ME));
		}
		
		else if(classe == "Reptilia" && NativoOuExotico == "Nativo")
		{
			ReptilNativo ME;

			ME.setId(stoi (id));
			ME.setClasse(classe);
			ME.setNome(nome);
			ME.setCientifico(nomeCientifico);
			ME.setSexo( sexo);
			ME.setTamanho(stof (tamanhoMedio));
			ME.setDieta(dieta);
			//ME.setVeterinario(veterinarioAssociado); 
			//ME.setTratador(tratadorResponsavel);
			ME.setBatismo(nomeBatismo);
			ME.setNativoOUexotico(NativoOuExotico);

			listaDeRepteisNativos.insert(pair<int, ReptilNativo>(stoi(id), ME));
		}

		else if(classe == "Reptilia" && NativoOuExotico == "Exotico")
		{
			ReptilExotico ME;

			ME.setId(stoi (id));
			ME.setClasse(classe);
			ME.setNome(nome);
			ME.setCientifico(nomeCientifico);
			ME.setSexo( sexo);
			ME.setTamanho(stof (tamanhoMedio));
			ME.setDieta(dieta);
			//ME.setVeterinario(veterinarioAssociado); 
			//ME.setTratador(tratadorResponsavel);
			ME.setBatismo(nomeBatismo);
			ME.setNativoOUexotico(NativoOuExotico);

			listaDeRepteisExoticos.insert(pair<int, ReptilExotico>(stoi(id), ME));
		}
}

		





/*

		else if(classe == "Amphibia" && NativoOuExotico == "Nativo")
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



*/


 animais_arq.close();









cout << "<<PET FERA>>" << endl;

while(1) {

 		string op1;
 		int escolha;
 		

		
		cout <<	"	Digite 1 para consultar funcionario especifico cadastrado" << endl;
		cout <<	"	Digite 2 para consultar lista de funcionarios cadastrados" << endl;
		cout <<	"	Digite 3 para remover funcionario especifico cadastrado" << endl;

		cout << "	Digite 4 para consultar animal cadastrado" << endl;
		cout << "	Digite 5 para consultar lista de animais cadastrados" << endl;
		cout << "	Digite 6 para remover animal especifico cadastrado " << endl;

		cout << "	Digite 7 para sair do PetFera" << endl;

		cout << "Digite sua opção:\n";
		cin >> escolha;


 		//Funcionários
 		switch(escolha){


 			case 1:
 			
 				ConsultarFuncionario(listaDeVeterinarios, listaDeTratadores);

 				break;

 			case 2:
 			
 				ListarFuncionarios (listaDeVeterinarios, listaDeTratadores);

 				break;

 			case 3:	
 			
 				RemoverFuncionario(listaDeVeterinarios, listaDeTratadores);

 				break;
 		 	
 		 	case 4:

 		 		ConsultarAnimal(listaDeMamiferosNativos, listaDeMamiferosExoticos, listaDeRepteisNativos, listaDeRepteisExoticos);

 		 		break;
	

 			case 5:
 			
 				ListarAnimais (listaDeMamiferosNativos, listaDeMamiferosExoticos, listaDeRepteisNativos, listaDeRepteisExoticos);

 				break;

 			case 6:	
 			
 				RemoverAnimal(listaDeMamiferosNativos, listaDeMamiferosExoticos, listaDeRepteisNativos, listaDeRepteisExoticos);

 				break;

 			case 7:
 			 	return EXIT_SUCCESS;	
 		}
				


}

return 0;
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
		cout << "CRMV: " << (itV->second).getCRMV() << endl;
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
		cout << "CRMV: " << (itV->second).getCRMV() << endl;
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


void ListarAnimais (map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos) {

	map<int, MamiferoNativo>:: iterator itMN;
	map<int, MamiferoExotico>:: iterator itME;
	map<int, ReptilNativo>:: iterator itRN;
	map<int, ReptilExotico>:: iterator itRE;


	for(auto itME  = listaDeMamiferosExoticos.begin(); itME != listaDeMamiferosExoticos.end(); itME++){


		cout << "Id do animal: " << (itME->second).getId() << endl;
		cout << "Classe do animal:" << (itME->second).getClasse() << endl;
		cout << "Nome do animal:" << (itME->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itME->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itME->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itME->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itME->second).getDieta() << endl;
		//cout << "Nome do Veterinario: " << (itME->second).getVeterinario() << endl;
		//cout << "Nome do Tratador: " << (itME->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itME->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itME->second).getNativoOUexotico() << endl;
		cout << endl;
	}

	for(auto itMN  = listaDeMamiferosNativos.begin(); itMN != listaDeMamiferosNativos.end(); itMN++){


		cout << "Id do animal: " << (itMN->second).getId() << endl;
		cout << "Classe do animal:" << (itMN->second).getClasse() << endl;
		cout << "Nome do animal:" << (itMN->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itMN->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itMN->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itMN->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itMN->second).getDieta() << endl;
		//cout << "Nome do Veterinario: " << (itMN->second).getVeterinario() << endl;
		//cout << "Nome do Tratador: " << (itMN->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itMN->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itMN->second).getNativoOUexotico() << endl;
		cout << endl;
	}	

	for(auto itRN  = listaDeRepteisNativos.begin(); itRN != listaDeRepteisNativos.end(); itRN++){


		cout << "Id do animal: " << (itRN->second).getId() << endl;
		cout << "Classe do animal:" << (itRN->second).getClasse() << endl;
		cout << "Nome do animal:" << (itRN->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itRN->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itRN->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itRN->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itRN->second).getDieta() << endl;
		//cout << "Nome do Veterinario: " << (itRN->second).getVeterinario() << endl;
		//cout << "Nome do Tratador: " << (itRN->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itRN->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itRN->second).getNativoOUexotico() << endl;
		cout << endl;
	}

	for(auto itRE  = listaDeRepteisExoticos.begin(); itRE != listaDeRepteisExoticos.end(); itRE++){


		cout << "Id do animal: " << (itRE->second).getId() << endl;
		cout << "Classe do animal:" << (itRE->second).getClasse() << endl;
		cout << "Nome do animal:" << (itRE->second).getNome() << endl;
		cout << "Nome científico do animal:" << (itRE->second).getCientifico() << endl;
		cout << "Sexo do animal: " << (itRE->second).getSexo()<< endl;
		cout << "Tamanho médio em metros:  " << (itRE->second).getTamanho() << endl;
		cout << "Dieta predominante: " << (itRE->second).getDieta() << endl;
		//cout << "Nome do Veterinario: " << (itRE->second).getVeterinario() << endl;
		//cout << "Nome do Tratador: " << (itRE->second).getTratador() << endl;
		cout << "Nome de batismo: " << (itRE->second).getBatismo() << endl;
		cout << "Animal Exotico ou Nativo: " << (itRE->second).getNativoOUexotico() << endl;
		cout << endl;
	}

}



void ConsultarAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos) {


	map<int, MamiferoNativo>:: iterator itMN;
	map<int, MamiferoExotico>:: iterator itME;
	map<int, ReptilNativo>:: iterator itRN;
	map<int, ReptilExotico>:: iterator itRE;

	 int escolha;

 	cout << "	Escolha a classe do animal para consulta:" << endl;
 	cout << "1-Mammalia" << endl;
 	cout << "2-Reptilia" << endl;
 	cout << "3-Amphibia" << endl;
 	cout << "4- Aves" << endl;

	cin >> escolha;

	 switch(escolha){
		case 1:
			for(auto itMN  = listaDeMamiferosNativos.begin(); itMN != listaDeMamiferosNativos.end(); itMN++){


				cout << "Id do animal: " << (itMN->second).getId() << endl;
				cout << "Classe do animal:" << (itMN->second).getClasse() << endl;
				cout << "Nome do animal:" << (itMN->second).getNome() << endl;
				cout << "Nome científico do animal:" << (itMN->second).getCientifico() << endl;
				cout << "Sexo do animal: " << (itMN->second).getSexo()<< endl;
				cout << "Tamanho médio em metros:  " << (itMN->second).getTamanho() << endl;
				cout << "Dieta predominante: " << (itMN->second).getDieta() << endl;
				//cout << "Nome do Veterinario: " << (itMN->second).getVeterinario() << endl;
				//cout << "Nome do Tratador: " << (itMN->second).getTratador() << endl;
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
				//cout << "Nome do Veterinario: " << (itME->second).getVeterinario() << endl;
				//cout << "Nome do Tratador: " << (itME->second).getTratador() << endl;
				cout << "Nome de batismo: " << (itME->second).getBatismo() << endl;
				cout << "Animal Exotico ou Nativo: " << (itME->second).getNativoOUexotico() << endl;
				cout << endl;

			}
			 					
		break;
		

		case 2:			 				

			for(auto itRN  = listaDeRepteisNativos.begin(); itRN != listaDeRepteisNativos.end(); itRN++){


				cout << "Id do animal: " << (itRN->second).getId() << endl;
				cout << "Classe do animal:" << (itRN->second).getClasse() << endl;
				cout << "Nome do animal:" << (itRN->second).getNome() << endl;
				cout << "Nome científico do animal:" << (itRN->second).getCientifico() << endl;
				cout << "Sexo do animal: " << (itRN->second).getSexo()<< endl;
				cout << "Tamanho médio em metros:  " << (itRN->second).getTamanho() << endl;
				cout << "Dieta predominante: " << (itRN->second).getDieta() << endl;
				//cout << "Nome do Veterinario: " << (itRN->second).getVeterinario() << endl;
				//cout << "Nome do Tratador: " << (itRN->second).getTratador() << endl;
				cout << "Nome de batismo: " << (itRN->second).getBatismo() << endl;
				cout << "Animal Exotico ou Nativo: " << (itRN->second).getNativoOUexotico() << endl;
				cout << endl;
			}

			for(auto itRE  = listaDeRepteisExoticos.begin(); itRE != listaDeRepteisExoticos.end(); itRE++){


				cout << "Id do animal: " << (itRE->second).getId() << endl;
				cout << "Classe do animal:" << (itRE->second).getClasse() << endl;
				cout << "Nome do animal:" << (itRE->second).getNome() << endl;
				cout << "Nome científico do animal:" << (itRE->second).getCientifico() << endl;
				cout << "Sexo do animal: " << (itRE->second).getSexo()<< endl;
				cout << "Tamanho médio em metros:  " << (itRE->second).getTamanho() << endl;
				cout << "Dieta predominante: " << (itRE->second).getDieta() << endl;
				//cout << "Nome do Veterinario: " << (itRE->second).getVeterinario() << endl;
				//cout << "Nome do Tratador: " << (itRE->second).getTratador() << endl;
				cout << "Nome de batismo: " << (itRE->second).getBatismo() << endl;
				cout << "Animal Exotico ou Nativo: " << (itRE->second).getNativoOUexotico() << endl;
				cout << endl;
			}
		break;	
	}
}






void RemoverAnimal(map<int, MamiferoNativo> &listaDeMamiferosNativos, map<int, MamiferoExotico> &listaDeMamiferosExoticos, 
	map<int, ReptilNativo> &listaDeRepteisNativos, map<int, ReptilExotico> &listaDeRepteisExoticos) {

	int id;

	cout << "Defina qual o id do animal que se busca: ";
	cin >> id;


	    map<int, MamiferoNativo>::iterator itMN =  listaDeMamiferosNativos.find(id);

	    if(itMN != listaDeMamiferosNativos.end())
	    {
	        listaDeMamiferosNativos.erase(itMN);
	        cout << "Animal foi removido com sucesso" << endl;
	    }

	  	map<int, MamiferoExotico>::iterator itME =  listaDeMamiferosExoticos.find(id);

	    if(itME != listaDeMamiferosExoticos.end())
	    {
	        listaDeMamiferosExoticos.erase(itME);
	        cout << "Animal foi removido com sucesso" << endl;
	    }

	    map<int, ReptilNativo>::iterator itRN =  listaDeRepteisNativos.find(id);

	    if(itRN != listaDeRepteisNativos.end())
	    {
	        listaDeRepteisNativos.erase(itRN);
	        cout << "Animal foi removido com sucesso" << endl;
	        
	    }

	    map<int, ReptilExotico> ::iterator itRE =  listaDeRepteisExoticos.find(id);

	    if(itRE != listaDeRepteisExoticos.end())
	    {
	        listaDeRepteisExoticos.erase(itRE);
	        cout << "Animal foi removido com sucesso" << endl;

	    }

/*
	    else 
	    {
	        cout << "Animal nao encontrado" << endl;
	    }
*/
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