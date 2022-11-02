#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"portuguese");

	int qte,i;
	float r,total;
	
	printf("Calculando a media\n");
	printf("Digite quantos numeros que deseja somar: ");
	scanf("%d",&qte);
	
	int n[qte];//esse vetor terá a quantindade de casas equivalente a quantidades de numeros que serao somados
	
	for(i=0; i < qte; i++){ //esse for serve para armazenar cada numero digitado em uma diferente casa do vetor n
	
	printf("Digite o valor %d : ",i+1);
	scanf("%d",&n[i]);
	r = (r+n[i]);//nessa variavel sera somado o valor da atual casa do vetor com o valor da propia varial, assim no final teremos a soma de todas as casas do vetor
	}
	
	total = r/qte; // a soma de todas as casa dividida pela quantidade de numeros inseridos resulta na média aritimetica
	
	printf("Resultado da media: %.2f" ,total);

	return 0;
}
