Projeto referente a unidade 3 da disciplina IMD0030 - Linguagem de Programação I
Alunos: FELIPE MENDONÇA GURGEL BANDEIRA - Matrícula: 20170003094
	FERNANDO BEZERRA DE OLIVEIRA - Matrícula: 20170126011

Projeto: PetFera - Cadastro de Animais de um Pet Shop

Objetivos:
    Cadastro de animais a serem comercializados;
    Cadastro de veterinários e tratadores envolvidos com os animais;
    Remoção de um animal da lista após a sua comercialização.
    Alteração dos dados cadastrais de um animal.
    Consulta aos dados cadastrais de um determinado animal ou por uma classe de animais.
    Consulta de animais sob a responsabilidade de um determinado Veterinário ou Tratador.


Como compilar/executar:
1) clone ou baixe os arquivos
2) Antes de compilar, por garantia, execute o comando: $ make clean
3) Para compilar utilize o comando make do makefile
4) o executável está localizado em ./bin/mainRun

Features desenvolvidas:

Armazenamento de Veterinarios, Tratadores e diversos tipos de animais em estrutura map;
Listagem de Veterinarios, Tratadores e diversos tipos de animais, usando iterator e sobrecarga do operador <<;
Remoção de Veterinarios ou Tratadores do programa;
Codigo ligeiramente comentado, com variáveis de nomes que fazem sentido e identação para facilitar a leitura
Arquivos .cpp e .h separados.


Bugs conhecidos:

Para todos os animais, os três primeiros campos do csv (id, nome, classe) estão sendo lidos, estão sendo atribuidos a variáveis corretamente (testados com cout posicionados após a atribuição) mas não estão sendo adicionados ao mapa no momento da criação dos objetos, embora os demais campos após os 3 primeiros estejam funcionando corretamente. Isso impossibilitou a criação de métodos para remover animais por id, já que o ID que está sendo passado está sendo sempre lixo de memória.

Observações de aprendizado:

Houve dois problemas que geraram bastante dor de cabeça porem resultaram no aprendizado de cuidados importantes para se ter no futuro. Um deles foi a duplicação de definição de um dos #ifndef nos arquivos .h. Fazer isso resulta em erros inconsistentes, como por exemplo o programador editar o código de um arquivo e outro arquivo que já estava compilando normalmente começar a apresentar erros de compilação sem você o ter editado ou sem que um arquivo dependa diretamente do outro. A duplicação desse comando faz áreas de código que deveriam ser compiladas apenas uma vez sejam compiladas mais de uma vez, causando problemas.

O segundo problema foi ambiguidade nos métodos das classes de animal, o que foi resolvido com definição de métodos virtuais onde cada classe filha sobrescrevia o método.
