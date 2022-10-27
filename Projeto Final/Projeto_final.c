#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");

	//vareiaveis de cadastro
	char nome[100];
	char endereco[100];
	char email[50];
	int telefone;

	int opcao;
	int i,j;
	int qtde = 0,qt = 0;
	int disp[10];
	int servico;

	float orcamento = 0;
	float total;

	//Cadastro do usuario
	printf("****** Cadastro *******\n");

	printf("\nDigite seu nome: ");
	gets(nome);
	printf("\nDigite seu endereco: ");
	gets(endereco);
	printf("\nDigite seu email: ");
	gets(email);
	printf("\nDigite seu telefone: ");
	scanf("%d",&telefone);


	system("cls");
	printf("Cadastro Concluido!!!\n");
    printf("Bem Vindo %s",nome);

	do{

    opcao = menu();

	    switch(opcao){
	        case 1:
	        	system("cls");
	        	if(qtde == 0){
		        	printf("Quantos Dispositos serao adicioandos?\n");
					scanf("%d",&qtde);

		        	for(i = 0;i<qtde;i++){
		        		disp[i]=adicionarDisp(qtde);
					}
	       	   }
	       	   else{
	       	   		printf("Alguns dispositivos j� foram adicionados: \n Para excliur v� ao men� e escolha a op��o 2");
	       	   			for(i=0;i<qtde;i++){
	       	   				printf("\nN�: %d ",i+1);
	       	   				if(disp[i]==1){
	       	   					printf("Notebook");
							}
							else{
								printf("Desktop");
							}
						}
				  }
	        	break;
	        case 2:
	        	system("cls");
	        	for(i=0;i<qtde;i++){
	        		disp[i] = 0;
	        	}
	        	qtde = 0;
	        	printf("\nDispositivos excluidos com sucesso!");
	            break;
	        case 3:
	        	system("cls");
	        	if(qtde == 0){
	        		printf("Nenhum Dispositivo foi adicionado");
				}
				else{
					printf("Dispotivo");
					for(i=0;i<qtde;i++){
                        orcamento = listarServico(disp[i]);
					}
				}
	            break;
	        case 4:
                if(orcamento == 0){
                    printf("Nenhum servi�o adicionado!! Adicione um servi�o para encerrar o pedido");
                    opcao = 0;
                }
	        	break;
	    }

    }while(opcao != 4);

    system("cls");
    system("color 02");

            printf("********Pedido Finalizado!!********\n\n");
            printf("Valor total: %.2f\n",orcamento);
            printf("Apos o pagamento um tecnico ser� enviado para o endereco: %s",endereco);
            printf("\nCaso necesserio entraremos em contado atrav�s do telefone %d",telefone);

	return 0;
}

int menu(){
    int opcao;

    printf("\n\n\n MENU DE OP��ES \n\n");
    printf("1 - Adicionar Dispositivo\n");
    printf("2 - Excluir Dispositivo\n");
    printf("3 - Adicionar Servi�o\n");
    printf("4 - Finalizar Pedido\n");


    scanf("%d",&opcao);

    return opcao;
}

int adicionarDisp(qtde){
	int tipo;

	    printf("Qual o seu dispositivo? \n");
	    printf("1 - Notebook\n");
	    printf("2 - Desktop\n");

		scanf("%d",&tipo);

		return tipo;
}

int listarServico(tipo){
	int serv;
    float preco,total;

	if(tipo == 2){

		printf("Servi�os Desktop\n\n");
		printf("N�:1 Formata��o sem backup R$ 85,00\n");
		printf("N�:2 Formata��o com backup de arquivos - At� 05 GB R$ 120,00\n");
		printf("N�:3 Formata��o com backup de arquivos - At� 20 GB R$ 150,00\n");
		printf("N�:4 Formata��o com backup de arquivos - At� 40 GB R$ 160,00\n");
		printf("N�:5 Formata��o com backup de arquivos - acima de 40 GB R$ 180,00\n");
		printf("N�:6 Preventiva de Hardware - Teste/Limpeza/Lubrifica��o R$ 60,00\n");
		printf("N�:7 Instala��o de Drivers (cada) R$ 45,00\n");
		printf("N�:8 Verifica��o e Remo��o de V�rus R$ 120,00\n");
		printf("N�:9 Substitui��o de Fonte R$ 45,00\n");
		printf("N�:10 Instala��o de kit Mem�ria/Processador/Placa M�e R$ 150,00\n");
		printf("N�:11 Instala��o de Mem�ria ou Processador ou Placa M�e R$ 120,00");
		scanf("%d",&serv);

		while(serv != 0){
            switch(serv){
            case 1:
                preco = 85;
                break;
            case 2:
                preco = 120;
                break;
            case 3:
                preco = 150;
                break;
            case 4:
                preco = 160;
                break;
            case 5:
                preco = 180;
                break;
            case 6:
                preco = 60;
                break;
            case 7:
                preco = 45;
                break;
            case 8:
                preco = 120;
                break;
            case 9:
                preco = 45;
                break;
            case 10:
                preco = 150;
                break;
            case 11:
                preco = 120;
                break;
            }
            total = total + preco;
            scanf("%d",&serv);
        }


	}
	else{
		printf("Servi�os Notebook\n\n");
		printf("N�:1 Abertura Completa para Limpeza e Diagn�stico R$ 80,00\n");
		printf("N�:2 Substitui��o de Tela R$ 100,00\n");
		printf("N�:3 Substitui��o de Teclado (grampeado) R$ 100,00\n");
		printf("N�:4 Remanufatura do Cooler R$ 50,00\n");
		printf("N�:5 Formata��o sem backup R$ 85,00\n");
		printf("N�:6 Notebook - Formata��o com backup de arquivos - At� 05 GB R$ 120,00\n");
		printf("N�:7 Notebook - Formata��o com backup de arquivos - At� 20 GB R$ 150,00\n");
		printf("N�:8 Notebook - Formata��o com backup de arquivos - At� 40 GB R$ 160,00\n");
		printf("N�:9 Notebook - Formata��o com backup de arquivos - acima de 40 GB R$ 180,00\n");
		printf("N�:10 Notebook - Verifica��o e Remo��o de V�rus \n");
		scanf("%d",&serv);

            while(serv != 0){
            switch(serv){
            case 1:
                preco = 80;
                break;
            case 2:
                preco = 100;
                break;
            case 3:
                preco = 100;
                break;
            case 4:
                preco = 50;
                break;
            case 5:
                preco = 50;
                break;
            case 6:
                preco = 85;
                break;
            case 7:
                preco = 120;
                break;
            case 8:
                preco = 150;
                break;
            case 9:
                preco = 160;
                break;
            case 10:
                preco = 180;
                break;
            case 11:
                preco = 120;
                break;
            }
            total = total + preco;
            scanf("%d",&serv);
        }
	}
	return total;
}
