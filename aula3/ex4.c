#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	int num1,num2,r;
	
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
		
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	
	r = num1 - num2;
	
	if(num1 > num2){
	    printf("\n %d",r);
	}

	return 0;
}
