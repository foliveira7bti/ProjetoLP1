#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <memory>
#include <vector>
#include "funcionario.h"
#include "animal.h"


/*
#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"
#include "animal.h"
#include "mamifero"
#include "anfibio"
#include "reptil"
#include "ave"
#include "animalsilvestre.h"
#include "mamiferoexotico.h"
#include "reptilnativo.h"
#include "reptilexotico.h"
#include "avenativo.h"
#include "aveexotico.h"
#include "anfibionativo.h"
#include "anfibioexotico.h"
#include "animalexotico.h"
#include "animalnativo.h"
*/

using namespace std;


int main() {

    //map<int, Funcionario> funcionarios;
    //map<int, Animal*> animais;
    map<int, Veterinario> listaDeVeterinarios;
    map<int, Tratador> listaDeTratadores;



    map<int, MamiferoNativo> listaDeMamiferosNativos;
	map<int, MamiferoExotico> listaDeMamiferosExoticos;

	//map<int, ReptilNativo> listaDeRepteisNativos;
	//map<int, ReptilExotico> listaDeRepteisExoticos;

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
			Vet.setcrmv(codigocrmv);


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
			MN.setVeterinario(veterinarioAssociado); 
			MN.setTratador(tratadorResponsavel);
			MN.setBatismo(nomeBatismo);
			MN.setNativoOUexotico(NativoOuExotico);

			//map<int, Veterinario>::iterator itV = listaDeVeterinarios.find(id);
			//MN.setVeterinario(itV->second)

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
			ME.setVeterinario(veterinarioAssociado); 
			ME.setTratador(tratadorResponsavel);
			ME.setBatismo(nomeBatismo);
			ME.setNativoOUexotico(NativoOuExotico);

			listaDeMamiferosExoticos.insert(pair<int, MamiferoExotico>(stoi(id), ME));
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
	 		 	int escolha2;


	 		 	cout << "	Escolha a classe do animal para consulta:" << endl;
	 		 	cout << "1-Mammalia" << endl;
	 		 	cout << "2-Amphibia" << endl;
	 		 	cout << "3-Reptilia" << endl;
	 		 	cout << "4- Aves" << endl;

				cin >> escolha2;

	 		 		switch(escolha2){
			 		 		case 1:
			 			
			 				ConsultarAnimal(listaDeMamiferosNativos, listaDeMamiferosExoticos);

			 				break;
			 		}		



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

