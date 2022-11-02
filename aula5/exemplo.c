#include <stdio.h>
#include <locale.h>

int main(){
	int origem;
	float preco;
	
	system("color 0B");
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Digite o preço: ");
	scanf("%f",&preco);
	printf("Digite a origem: ");
	scanf("%d",&origem);
	
	
	switch(origem){
	    case 1:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do sul");
	    break;
	
	    case 2:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Norte");
	    break;
	
	    case 3:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Leste");
	    break;
	
	    case 4:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Oeste");
	    break;
	
	    case 7 ... 9:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Sudeste");
	    break;
	
	    case 10 ... 20:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Centro-Oeste");
	    break;
	
	    case 5 ... 6:
	    case 25 ... 30:
	        printf("\nPreço: %.2f: ",preco);
	        printf(" - Produto do Nordeste");
	    break;
	
	}
	printf("\n*****FIM*****");
	
	return 0;
}
