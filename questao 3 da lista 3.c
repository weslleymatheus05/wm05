#include <stdio.h>

int main(void){
	
	int i, contador = 0;
	char txt1[100];
	char txt2[100];
	
	printf("Digite um texto para ser comparado com o segundo texto: \n");
	gets(txt1);
		
	printf("Digite o segundo texto; \n");
	gets(txt2);
		
	for(i=0; txt1[i] != '\0' && i<sizeof(txt1); i++){
		if(txt1[i] != txt2[i]){
			contador++;
			break;
		}
	}
	if(txt1[i] != txt2[i]){
		contador++;
	}
	
	if (contador==0){
		printf("Os textos sao iguais");
	}
	else{
		printf("Os textos sao diferentes");
	}
}
