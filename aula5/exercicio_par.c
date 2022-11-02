#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    int cod,qtd;
    float total;

    system("color 0f");
    printf("*******Cardapio*********");
    printf("\n\nCachorro quente | Código: 100 | Preço: R$: 1,10 ");
    printf("\n Bauru Simples | Código: 101 | Preço: R$: 1,30 ");
    printf("\n Bauru com Ovo | Código: 102 | Preço: R$: 1,50 ");
    printf("\n Hamburger     | Código: 103 | Preço: R$: 1,10 ");
    printf("\n Cheeseburger  | Código: 104 | Preço: R$: 1,30 ");
    printf("\n Refrigerante  | Código: 105 | Preço: R$: 1,00 \n");
    printf("\nDigite o Código de um produto: ");
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
            printf("produto inválido");
        break;
    }

    printf("\nResultado = R$: %.2f",total);

	return 0;
}
