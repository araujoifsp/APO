#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");
	
	system("color b");
	float num,metade;
	
	printf("Digite o numero: ");
	scanf("%f",&num);
	
	metade = num/2;
	
	if(metade >= 50){
	    printf("\nA metade do n�mero %.2f � %.2f e � maior que 50",num,metade);
	}
	else{
	    printf("\nA metade do n�mero %.2f � %.2f e � menor que 50",num,metade);
	}
	
	return 0;

}
