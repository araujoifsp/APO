#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int idade;

    system("color 0f");

    printf("Digite a Idade: ");
    scanf("%d",&idade);

    switch (idade){
        case 1:
            printf("\nPeso provavel Meninos: 8.5 a 12.5kg\n");
            printf("Peso provavel Meninas: 7.5 a 11.5kg");
            break;
        case 2:
            printf("\nPeso provavel Meninos: 10.1 a 15.2kg\n");
            printf("Peso provavel Meninas: 9.8 a 14.5kg");
            break;
        case 3:
            printf("\nPeso provavel Meninos: 11.7 a 18.5kg\n");
            printf("Peso provavel Meninas: 11.4 a 17.950kg");
            break;
        default:
            printf("Idade Invalida");
            break;
    }
    
	return 0;
}
