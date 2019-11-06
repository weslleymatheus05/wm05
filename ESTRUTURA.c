#include <stdio.h>

struct pessoa{
	char nome [100];
	int idade;
	char endereco;
};
struct endereco{
	char rua [100];
	int numero,cep;
	struct pessoa endereco;		
};

int main(){
	

	struct pessoa dados;
	struct endereco local;

	//RECEBER DADOS
	printf("Digite seu nome: ");
	gets(dados.nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &dados.idade);
	fflush(stdin);
	
	printf("Digite o nome da sua rua: ");
	gets(local.rua);
	
	printf("Digite o numero da casa: ");
	scanf("%d", &local.numero);
	fflush(stdin);
	
	printf("Digite seu cep: ");
	scanf("%d", &local.cep);
	fflush(stdin);
	
	printf("Seu nome: %s\n", dados.nome);
	printf("Sua idade: %d\n",dados.idade);
	printf("Sua rua: %s\n", local.rua);
	printf("Seu numero: %d\n", local.numero);
	printf("Seu cep: %d\n", local.cep);

}
