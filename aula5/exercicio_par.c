#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int cod,qtd;
    float total;

    system("color 0f");
    printf("*******Cardapio*********");
    printf("\n\nCachorro quente | C�digo: 100 | Pre�o: R$: 1,10 ");
    printf("\n Bauru Simples | C�digo: 101 | Pre�o: R$: 1,30 ");
    printf("\n Bauru com Ovo | C�digo: 102 | Pre�o: R$: 1,50 ");
    printf("\n Hamburger     | C�digo: 103 | Pre�o: R$: 1,10 ");
    printf("\n Cheeseburger  | C�digo: 104 | Pre�o: R$: 1,30 ");
    printf("\n Refrigerante  | C�digo: 105 | Pre�o: R$: 1,00 \n");
    printf("\nDigite o C�digo de um produto: ");
    scanf("%d",&cod);

    printf("Digite a quantidade desse produto: ");
    scanf("%d",&qtd);

    switch(cod){
        case 100:
            total = 1.10 * qtd;
        break;

        case 101:
            total = 1.30 * qtd;
        break;

        case 102:
            total = 1.50 * qtd;
        break;

        case 103:
            total = 1.10 * qtd;
        break;

        case 104:
            total = 1.30 * qtd;
        break;

        case 105:
            total = 1 * qtd;
        break;

        default:
            printf("produto inv�lido");
        break;
    }

    printf("\nResultado = R$: %.2f",total);

	return 0;
}
