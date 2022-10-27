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
	       	   		printf("Alguns dispositivos já foram adicionados: \n Para excliur vá ao menú e escolha a opção 2");
	       	   			for(i=0;i<qtde;i++){
	       	   				printf("\nNº: %d ",i+1);
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
                    printf("Nenhum serviço adicionado!! Adicione um serviço para encerrar o pedido");
                    opcao = 0;
                }
	        	break;
	    }

    }while(opcao != 4);

    system("cls");
    system("color 02");

            printf("********Pedido Finalizado!!********\n\n");
            printf("Valor total: %.2f\n",orcamento);
            printf("Apos o pagamento um tecnico será enviado para o endereco: %s",endereco);
            printf("\nCaso necesserio entraremos em contado através do telefone %d",telefone);

	return 0;
}

int menu(){
    int opcao;

    printf("\n\n\n MENU DE OPÇÕES \n\n");
    printf("1 - Adicionar Dispositivo\n");
    printf("2 - Excluir Dispositivo\n");
    printf("3 - Adicionar Serviço\n");
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

		printf("Serviços Desktop\n\n");
		printf("Nº:1 Formatação sem backup R$ 85,00\n");
		printf("Nº:2 Formatação com backup de arquivos - Até 05 GB R$ 120,00\n");
		printf("Nº:3 Formatação com backup de arquivos - Até 20 GB R$ 150,00\n");
		printf("Nº:4 Formatação com backup de arquivos - Até 40 GB R$ 160,00\n");
		printf("Nº:5 Formatação com backup de arquivos - acima de 40 GB R$ 180,00\n");
		printf("Nº:6 Preventiva de Hardware - Teste/Limpeza/Lubrificação R$ 60,00\n");
		printf("Nº:7 Instalação de Drivers (cada) R$ 45,00\n");
		printf("Nº:8 Verificação e Remoção de Vírus R$ 120,00\n");
		printf("Nº:9 Substituição de Fonte R$ 45,00\n");
		printf("Nº:10 Instalação de kit Memória/Processador/Placa Mãe R$ 150,00\n");
		printf("Nº:11 Instalação de Memória ou Processador ou Placa Mãe R$ 120,00");
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
		printf("Serviços Notebook\n\n");
		printf("Nº:1 Abertura Completa para Limpeza e Diagnóstico R$ 80,00\n");
		printf("Nº:2 Substituição de Tela R$ 100,00\n");
		printf("Nº:3 Substituição de Teclado (grampeado) R$ 100,00\n");
		printf("Nº:4 Remanufatura do Cooler R$ 50,00\n");
		printf("Nº:5 Formatação sem backup R$ 85,00\n");
		printf("Nº:6 Notebook - Formatação com backup de arquivos - Até 05 GB R$ 120,00\n");
		printf("Nº:7 Notebook - Formatação com backup de arquivos - Até 20 GB R$ 150,00\n");
		printf("Nº:8 Notebook - Formatação com backup de arquivos - Até 40 GB R$ 160,00\n");
		printf("Nº:9 Notebook - Formatação com backup de arquivos - acima de 40 GB R$ 180,00\n");
		printf("Nº:10 Notebook - Verificação e Remoção de Vírus \n");
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
