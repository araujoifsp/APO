#include <stdio.h>
#include <locale.h>

int main(){

    int n1,n2;

    setlocale(LC_ALL,"Portuguese");

    printf("Digite o primeiro valor: \n");
    scanf("%d",&n1);

    printf("Digite o segundo valor: \n");
    scanf("%d",&n2);

    if(n1 > n2){//estrutura de seleção encadeada
            printf("\n%d é maior que %d",n1,n2);
    }
    else if(n1 < n2){
        printf("\n%d é maior que %d",n2,n1);
    }
    else{
        printf("\nos valores são iguais");
    }

}
