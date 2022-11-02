#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int n1,n2,n3;
    float media;

    printf("Digite a primeira nota \n");
    scanf("%d",&n1);

    printf("Digite a primeira nota \n");
    scanf("%d",&n2);

    printf("Digite a primeira nota \n");
    scanf("%d",&n3);

    media = (n1+n2+n3)/3;

    if(media >= 6){
        printf("\nAluno aprovado, com a média %.2f",media);
    }
    else if(media < 4){
            printf("\nAluno reprovado, com a média %.2f",media);
    }
    else{
        printf("\nAluno em exame, coma a média %.2f",media);
    }

}
