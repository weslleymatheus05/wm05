#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h> 
#include <string.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");	
	
	int i = 0;
	
	do {	//MENU
			printf("\n\nDigite 1 para saber se um numero e par ou impar\n\n"
					"Digite 2 para saber a potencia de um numero\n\n"
					"Digite 3 para saber a raiz de um numero\n\n"
					"Digite 4 para saber se um ano e bissexto ou não bissexto\n\n"
					"Digite 5 para calcular medias\n\n"
					"Digite 6\n\n"
					"Digite 7\n\n"
					"Digite 8\n\n"
					"Digite 9\n\n"
					"Digite 10\n\n"
					"Digite 0 para sair\n\n"
					"Digite aqui: ");
			scanf("%d", &i);
	
		switch(i){
	
			case 1:
			int num1;
				printf("\n\nDigite o numero aqui: ");
				scanf("%d", &num1);
			
			if(num1 % 2 == 0){
				printf("\n%d é par\n\n", num1);
			}else{
				printf("\n%d é impar\n\n", num1);
			}		
			break;
		
			case 2:
				float a,p;
				int b;
				
				printf("\n\nEntre com o numero: ");
				scanf("%f",&a);
				
				printf("\nEntre com outro numero: ");
				scanf("%d", &b);
			
				p=pow(a,b); 
			
				printf("\nO resultado fica %e\n\n",p);
			
			break;
		
			case 3:
				float a1,p1;
				int b1;
				printf("\n\nEntre com um numero: ");
				scanf("%f", &a1);
				
				printf("\nEntre com outro numero: ");
				scanf("%d", &b1);
				b1 = 1.0*b1;
				p=pow(a,b1);
				
				printf("\nO resultado fica %e\n\n", p1);
			
			break;
		
			case 4:
				int ano;
  			
				printf("\n\nDigite o ano: ");
 			 	scanf("%d", &ano);
 			 
  			if (ano % 4 == 0) {
   				printf("\nAno bissexto\n\n");
  
 			}else {
    			printf("\nAno nao bissexto\n\n");
  
 			}
			break;
		
			case 5:
				float n1, n2, n3, media;
			
				printf("\n\nDigite as notas aqui \n");
			
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
				printf("Nota 1: ");
				scanf("%f", &n1);
			
				printf("Nota 2: ");
				scanf("%f", &n2);
			
				media = (n1*n2)/2;
		
			if(n1,n2>= 0,0 && n1,n2<=10.0){
				printf("\nSua media é: %.2f\n\n", media);
		
			}else{
				printf("\nA nota nao possui um valor valido\n\n");
			}
			break;
		
			case 7:
				
			break;
		
			case 8:
				
			break;
		
			case 9:
				
			break;
			
			case 10:
			char nome[61];
			int mtc;
			
			printf("Digite seu nome: ");
			scanf("%s", &nome);
			
			printf("Digite aqui sua matricula: ");
			scanf("%d", &mtc);
			
			printf("Ola %s sua matricula em Hexadecimal é: %2X", nome, mtc);
			break;
	}
	
	}while (i != 0 && i<=9);
	
	getch();
	
}
