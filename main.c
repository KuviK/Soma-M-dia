#include <stdio.h>
#include <stdlib.h>

/* Função: aplicação que solicita a idade de 5 pessoas e apresenta a média e a soma das idades que estejam acima dos 20 anos.
   Autor:  Luís Filipe */

int main(int argc, char *argv[]) {
	
	//Variaveis
	int idade1,idade2,idade3,idade4,idade5, soma;
	float media;
	
	//Limpa Consola
	system("cls");
	
	//Instruções
	
	//Recolher as 5 idades
	printf("Insira a primeira idade: ");
	scanf("%d", &idade1);
	if (idade1 > 20)             //Verifica se a 1ª idade introduzida é maior que 20 e, caso o seja, adiciona-a à variavel soma
		soma += idade1;
	
	puts("");
	printf("Insira a segunda idade: ");
	scanf("%d", &idade2);
	if (idade2 > 20)              //Verifica se a 2ª idade introduzida é maior que 20 e, caso o seja, adiciona-a à variavel soma
		soma += idade2;

	
	puts("");
	printf("Insira a terceira idade: ");
	scanf("%d", &idade3);
	if (idade3 > 20)              //Verifica se a 3ª idade introduzida é maior que 20 e, caso o seja, adiciona-a à variavel soma
		soma += idade3;

	
	puts("");
	printf("Insira a quarta idade: ");
	scanf("%d", &idade4);
	if (idade4 > 20)              //Verifica se a 4ª idade introduzida é maior que 20 e, caso o seja, adiciona-a à variavel soma
		soma += idade4;
	
	
	puts("");
	printf("Insira a quinta idade: ");
	scanf("%d", &idade5);        //Verifica se a 5ª idade introduzida é maior que 20 e, caso o seja, adiciona-a à variavel soma
	if (idade5 > 20)
		soma += idade5;
	
	
	//Apresentar a média das 5 idades
	puts("");
	media = (idade1 + idade2 + idade3 + idade4 + idade5 ) / 5;  //calculo da media
	printf("A media das 5 idades e: %.0f\n ", media );
	
	//Apresentar a soma idades superiores a 20
	puts("");
	printf("A soma das idades superiores a 20 e: %d\n ", soma );
	
	//pausa	
	getchar();
	
}
