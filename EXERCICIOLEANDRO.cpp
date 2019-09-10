#include <stdio.h>
#include <conio.h>
#include <locale.h>


int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int i = 0;

	do {
		printf(" Digite 1 para saber se e par ou impar\n\n Digite 2\n\n Digite 3\n\n Digite 4\n\n Digite 5\n\n Digite 6\n\n Digite 7\n\n Digite 8\n\n Digite 0 para sair\n\n Digite aqui: ");
		scanf("%d", &i);
	
	switch(i){
	
		case 1:
			printf("\nDigite um numero para saber se e par ou impar: ");
				scanf("%d", &i);
			if(i % 2 == 0){
				printf("\n%d é par\n\n\n\n", i);
		}else{
			printf("%d é impar\n\n", i );
		}		
		break;
		
		case 2:
			printf("Numero 2\n");
		break;
		
		case 3:
			printf("Numero 3\n");
		break;
		
		case 4:
			printf("Numero 4\n");
		break;
		
		case 5:
			printf("Numero 5\n");
		break;
		
		case 6:
			printf("Numero 6\n");
		break;
		
		case 7:
			printf("Numero 7\n");
		break;
		
		case 8:
			printf("Numero 8\n");
		break;
		
		case 9:
			printf("Numero 9\n");
		break;
	}
	
	}while (i != 0);
	
	getch();
	
}
