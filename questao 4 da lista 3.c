#include <stdio.h>

int main(){
	
	int i;
	char txt1[100];
	char txt2[100];
	
		printf("Digite o texto para ser armazenado em outra variavel: \n");
		gets(txt1);
	
	for(i=0;txt1[i] != '\0' && i<sizeof(txt1); i++){
		txt2[i]=txt1[i];
	}
		printf("O texto que foi armazenado em outra variavel e:\n %s",txt2);
}

