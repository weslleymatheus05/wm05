#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h> 

int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int i = 0;
	
	
	do {
			printf(" Digite 1 para saber se um numero e par ou impar\n\n Digite 2 para saber a potencia de um numero\n\n Digite 3 para saber a raiz de um numero\n\n Digite 4 para saber se um ano e bissexto ou não bissexto\n\n Digite 5 para calcular medias\n\n Digite 6\n\n Digite 7\n\n Digite 8\n\n Digite 0 para sair\n\n Digite aqui: ");
			scanf("%d", &i);
	
		switch(i){
	
			case 1:
			int num1;
				printf("\n\nDigite o numero aqui\n\n");
				scanf("%d", &num1);
			
			if(num1 % 2 == 0){
				printf("%d é par\n\n", num1);
			}else{
				printf("%d é impar\n\n", num1);
			}		
			break;
		
			case 2:
				float a,p;
				int b;
				
				printf("\n\n Entre com o numero: ");
				scanf("%f",&a);
				
				printf("\n\n Entre com outro numero: ");
				scanf("%d", &b);
			
				p=pow(a,b); 
			
				printf("\n\n O resultado fica %e\n\n",p);
			
			break;
		
			case 3:
				printf("Numero 3\n");
		
			break;
		
			case 4:
				int ano;
  			
				printf("\n\nDigite o ano: ");
 			 	scanf("%d", &ano);
 			 
  			if (ano % 4 == 0) {
   				printf("\n\nAno bissexto\n\n");
  
 			}else {
    			printf("\n\nAno nao bissexto\n\n");
  
 			}
			break;
		
			case 5:
				float n1, n2, n3, media;
			
				printf("\n\n Digite as notas aqui \n");
			
				printf("\nNota 1: ");
    			scanf("%f", &n1);
    
				printf("\nNota 2: ");
    			scanf("%f", &n2);
    		
   				printf("\nNota 3: ");
   				scanf("%f", &n3);
    
				media = ((n1*1) + (n2*1) + (n3*2))/3;
			
			if (media >=60){
        		printf("\nSua media foi: %.2f\n" , media);
       			printf("\nParabens voce foi aprovado\n\n");
       		
    		} else {
        	
				printf("\nSua media foi: %.2f" , media);
       			printf("\nInfelizmente voce foi reprovado, estude mais um pouco!\n\n");
    		}
		
			break;
		
			case 6:
				printf("Numero 6\n");
			
				printf("Nota 1: ");
				scanf("%f", &n1);
			
				printf("Nota 2: ");
				scanf("%f", &n2);
			
				media = (n1*n2)/2;
		
			if(n1,n2>= 0,0 && n1,n2<=10.0){
				printf("Sua media é: %.2f", media);
		
			}else{
				printf("A nota nao possui um valor valido ");
			}
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
	
	}while (i != 0 && i<=9);
	
	getch();
	
}
