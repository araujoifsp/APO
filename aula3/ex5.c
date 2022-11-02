#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL,"Portuguese");

    char nome[61];
    float alt;
    int idade;

    printf("Digite o nome: ");
    scanf("%s",&nome);

    printf("Digite a idade: ");
    scanf("%d",&idade);

    printf("Digite a altura: ");
    scanf("%f",&alt);

    if(alt > 1.7 && idade > 17){
        printf("Nome: %s",nome);

    }
    
    return 0;
}
