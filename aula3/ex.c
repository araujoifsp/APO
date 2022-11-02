#include <stdio.h>
#include <locale.h>

main(){

    int x,y,z;

    system("color 0b");
    setlocale(LC_ALL,"Portuguese");

    printf("Valor X: ");
    scanf("%d",&x);

    printf("Valor Y: ");
    scanf("%d",&y);

    z = x;
    x = y;
    y = z;

    printf("\n******** TROCANDO VALORES ************\n");
    printf("\nX = %d \nY = %d",x,y);

}
