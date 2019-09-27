#include <stdio.h>
#include <locale.h>
int main(){
	
	char s[20];
	int i;
	
		printf("Digite seu nome: ");
		gets(s);
	for(i=0; s[i] != '\0' && i<sizeof(s); i++);
	
		printf("O nome tem %d caracteres", i);

}
