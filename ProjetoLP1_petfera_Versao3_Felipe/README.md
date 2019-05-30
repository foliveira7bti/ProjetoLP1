Projeto referente a unidade 3 da disciplina IMD0030 - Linguagem de Programação I
Alunos: FELIPE MENDONÇA GURGEL BANDEIRA - Matrícula: 20170003094
	FERNANDO BEZERRA DE OLIVEIRA - Matrícula: 20170126011

Projeto: PetFera - Cadastro de Animais de um Pet Shop

Objetivos:
    Cadastro de animais a serem comercializados;
    Cadastro de veterinários e tratadores envolvidos com os animais;
    Remoção de um animal da lista após a sua comercialização.
    #Alteração dos dados cadastrais de um animal.
    Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais.
    #Consulta de animais sob a responsabilidade de um determinado Veterinário ou Tratador.


Como compilar:
Antes de iniciar, por garantia, execute o comando:
$ make clean

Para gerar todos os diretórios necessários para compilação e compilar o programa para o Linux, digite no terminal:
$ make 

O makefile está configurado para compilar com todas as flags de warnings e ao final gera um arquivo executável no diretório /bin.
Como executar:
No terminal, digite:
$ ./bin/mainRun


Observações:
1) Todas as funcionalidades, exceto data de admissão e listagem de usuários contratados há menos de 90 dias, foram implementadas
2) Não há um menu com switch-case permitindo o usuário interagir e criar seus própios objetos
3) As definições foram feitas em arquivos .h e as implementações nos arquivos .cpp
4) O projeto está organizado em diretórios:
   build(criada pelo makefile) para os arquivos .o
   src para os arquivos .cpp
   bin(criada pelo makefile) para o executável
   include para os arquivos .h
5) Não há muitas checagems para as entradas dos métodos 
   (por exemplo checar se o usuário entrou com uma string em formato de CNPJ 
   ou entrou com um valor sensato no método de realizar aumento em %)









Dificuldades

  

