#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");
	
	int num,dob;
	
	printf("Numero: ");
	scanf("%d",&num);
	
	dob = num*2;
	
	if(num > 90 && num <100){
	        printf("Número: %d dobro: %d",num,dob);
	
	}

	return 0;
	
}

