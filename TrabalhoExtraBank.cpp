#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

	struct Cliente
{
	char Nome[30];
	char Sobrenome[30];
	int Conta[2];
	float Saldo[2];
	
};


int main()
{
	setlocale(LC_ALL, "Portuguese");
	

	struct Cliente Cliente;
	int Num, Selec;
	float Val;
	
	Num=9;
	Selec=9;
	printf("\n \n  --------------------------------------------------");
	printf("\n \n |                                                  |");
	printf("\n \n |..........Cadastro de Cliente NewtonBank..........| ");
	printf("\n \n |                                                  |");
	printf("\n \n  -------------------------------------------------- \n\n");
	printf("Digite seu nome e seu sobrenome..........: ");
	scanf("%s%s",Cliente.Nome,Cliente.Sobrenome );
	printf("Entre com o n�mero da conta corrente (sem o digito)..: ");
	scanf("%d", &Cliente.Conta[0]);
	printf("Entre com o n�mero da conta poupan�a (sem o digito)..: ");
	scanf("%d", &Cliente.Conta[1]);
	printf("Entre com o saldo inicial da conta corrente..: ");
	scanf("%f", &Cliente.Saldo[0]);
	printf("Entre com o saldo inicial da conta poupan�a..: ");
	scanf("%f", &Cliente.Saldo[1]);
	system("cls");
	do
	{
		system("cls");
		printf("\n \n  --------------------------------------------------");
		printf("\n \n |                                                  |");
		printf("\n \n |  ..........Bem-vindo(a) A NewtonBank..........   | ");
		printf("\n \n |                                                  |");
		printf("\n \n  -------------------------------------------------- \n\n");
		printf("Senhor(a): %s %s \n",Cliente.Nome, Cliente.Sobrenome);
		printf("Selecione a op��o desejada: \n");
		printf(" [1] Creditar.\n [2] Debitar.\n [3] Transferir.\n [4] Saldo.\n [5] Sair. \n");
		scanf("%d", &Num);
		switch (Num)
		{
			case 1:
				system("cls");
				printf("\n \n  --------------------------------------------------");
				printf("\n \n |                                                  |");
				printf("\n \n |  .............Creditar NewtonBank.............   | ");
				printf("\n \n |                                                  |");
				printf("\n \n  -------------------------------------------------- \n\n");
				printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
				printf("Selecione a conta que deseja creditar: \n");
				printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
				do
				{
					scanf("%d", &Selec);
					switch (Selec)
					{
						case 1:
						system("cls");
						printf("\n \n  --------------------------------------------------");
						printf("\n \n |                                                  |");
						printf("\n \n |  .............Creditar NewtonBank.............   | ");
						printf("\n \n |                                                  |");
						printf("\n \n  -------------------------------------------------- \n\n");
						printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
						printf("Digite o valor deseja creditar na conta corrente..: %d \n", Cliente.Conta[0]);
						scanf("%f", &Val);
						if(Val>=0)
						{
							Cliente.Saldo[0]+=Val;
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Creditar NewtonBank.............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Selecione a conta que deseja creditar: \n");
							printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
							printf("Saldo atual da conta corrente..: %d - R$:%.2f \n",Cliente.Conta[0],Cliente.Saldo[0]);
							break;
						}
						else
						{
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Creditar NewtonBank.............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Selecione a conta que deseja creditar: \n");
							printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
							printf("N�o � possivel creditar valores negativos. \n");
							break;
						}
						case 2:
						system("cls");
						printf("\n \n  --------------------------------------------------");
						printf("\n \n |                                                  |");
						printf("\n \n |  .............Creditar NewtonBank.............   | ");
						printf("\n \n |                                                  |");
						printf("\n \n  -------------------------------------------------- \n\n");
						printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
						printf("Digite o valor deseja creditar na conta poupan�a..: %d \n", Cliente.Conta[1]);
						scanf("%f", &Val);
						if(Val>=0)
						{
							Cliente.Saldo[1]+=Val;
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Creditar NewtonBank.............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
							printf("Saldo atual na conta poupan�a..: %d - R$:%.2f \n",Cliente.Conta[1],Cliente.Saldo[1]);
							break;
						}
						case 3:
							if(Selec==3)
							break;
						default:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Creditar NewtonBank.............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Selecione a conta que deseja creditar: \n");
							printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
							printf("Op��o inv�lida!\n");
						break;
					}
				}while(Selec>=1 && Selec<=2 || Selec!=3);
				break;
			case 2:
				system("cls");
				printf("\n \n  --------------------------------------------------");
				printf("\n \n |                                                  |");
				printf("\n \n |  .............Debitar NewtonBank..............   | ");
				printf("\n \n |                                                  |");
				printf("\n \n  -------------------------------------------------- \n\n");
				printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
				printf("Selecione a conta que deseja debitar: \n");
				printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
				do
				{
					scanf("%d", &Selec);
					switch (Selec)
					{
						case 1:
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Digite o valor deseja debitar ma conta corrente: %d \n",Cliente.Conta[0]);
								scanf("%f", &Val);
							if(Val>=0)
							{
								Cliente.Saldo[0]-=Val;
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta que deseja debitar: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
								printf("Saldo atual da conta corrente: %d - R$:%.2f \n",Cliente.Conta[0],Cliente.Saldo[0]);
							}
							else
							{
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta que deseja debitar: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
								printf("N�o � possivel debitar valores negativos. \n");
							}
							break;
						case 2:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Debitar NewtonBank..............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Digite o valor deseja debitar na conta poupan�a: %d \n", Cliente.Conta[1]);
							scanf("%f", &Val);
							if (Cliente.Saldo[1]>=Val && Val>=0)
							{
								Cliente.Saldo[1]-=Val;
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta que deseja debitar: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
								printf("Saldo atual da conta poupan�a:%d - R$:%.2f \n",Cliente.Conta[1],Cliente.Saldo[1]);
							}
							else if(Val<0)
							{
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta que deseja debitar: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
								printf("N�o � possivel debitar valores negativos. \n");
							}
							else
							{
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  .............Debitar NewtonBank..............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta que deseja debitar: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
								printf("Saldo insuficiente. \n");
							}
							break;
						case 3:
							if(Selec==3)
							break;
						default:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  .............Debitar NewtonBank..............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Selecione a conta que deseja debitar: \n");
							printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar. \n");
							printf("Op��o inv�lida!\n");
						break;
					}
				}while(Selec>=1 && Selec<=2 || Selec!=3);
				break;
			case 3:
				system("cls");
				printf("\n \n  --------------------------------------------------");
				printf("\n \n |                                                  |");
				printf("\n \n |  ............Transferir NewtonBank............   | ");
				printf("\n \n |                                                  |");
				printf("\n \n  -------------------------------------------------- \n\n");
				printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
				printf("Selecione a conta para qual deseja transferir: \n");
				printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
				do
				{
					scanf("%d", &Selec);
					switch (Selec)
					{
						case 1:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  ............Transferir NewtonBank............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Qual valor deseja transferir para conta poupan�a..: %d \n", Cliente.Conta[1]);
							scanf("%f", &Val);
							if(Val>=0)
							{
								Cliente.Saldo[0]-=Val;
								Cliente.Saldo[1]+=Val;
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ............Transferir NewtonBank............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para qual deseja transferir: \n");
								printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
								printf("Transfer�ncia realizada com sucesso! \n");
								printf("Saldo atual da conta corrente..: %d - R$:%.2f \n",Cliente.Conta[0], Cliente.Saldo[0]);
								printf("Saldo atual da conta poupan�a..: %d - R$:%.2f \n", Cliente.Conta[1], Cliente.Saldo[1]);
							break;
							}
							else
							{
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ............Transferir NewtonBank............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para qual deseja transferir: \n");
								printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
								printf("N�o � possivel realizar tranfer�ncia. \n");
							}
							break;
						case 2:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  ............Transferir NewtonBank............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Qual valor deseja transferir para conta corrente..: %d \n", Cliente.Conta[0]);
							scanf("%f", &Val);
							if(Cliente.Saldo[1]>=Val && Val>=0)
							{
								Cliente.Saldo[1]-=Val;
								Cliente.Saldo[0]+=Val;
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ............Transferir NewtonBank............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para qual deseja transferir: \n");
								printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
								printf("Transfer�ncia realizada com sucesso! \n");
								printf("Saldo atual da conta corrente..: %d - R$:%.2f \n", Cliente.Conta[0], Cliente.Saldo[0]);
								printf("Saldo atual da conta poupan�a..: %d - R$:%.2f \n", Cliente.Conta[1], Cliente.Saldo[1]);
							break;
							}
							else
							{
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ............Transferir NewtonBank............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para qual deseja transferir: \n");
								printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
								printf("N�o � possivel realizar tranfer�ncia. \n");
							}
							break;
						case 3:
							if(Selec==3)
							break;
						default:
							system("cls");
							printf("\n \n  --------------------------------------------------");
							printf("\n \n |                                                  |");
							printf("\n \n |  ............Transferir NewtonBank............   | ");
							printf("\n \n |                                                  |");
							printf("\n \n  -------------------------------------------------- \n\n");
							printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
							printf("Selecione a conta para qual deseja transferir: \n");
							printf(" [1] Conta Corrente para Conta Poupan�a. \n [2] Conta Poupan�a para Conta Corrente. \n [3] Voltar \n");
							printf("Op��o inv�lida!\n");
							break;
					}
				}while(Selec>=1 && Selec<=2 || Selec!=3);
				break;
			case 4:
					system("cls");
					printf("\n \n  --------------------------------------------------");
					printf("\n \n |                                                  |");
					printf("\n \n |  ..............Saldo NewtonBank...............   | ");
					printf("\n \n |                                                  |");
					printf("\n \n  -------------------------------------------------- \n\n");
					printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
					printf("Selecione a conta para consultar o saldo: \n");
					printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar \n");
					do
					{
						scanf("%d", &Selec);
						switch(Selec)
						{
							case 1:
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ..............Saldo NewtonBank...............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para consultar o saldo: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar \n");
								printf("O Saldo da conta corrente: %d - R$:%.2f \n",Cliente.Conta[0],Cliente.Saldo[0]);
							break;
							case 2:
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ..............Saldo NewtonBank...............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para consultar o saldo: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar \n");
								printf("O Saldo da conta poupan�a: %d - R$:%.2f \n",Cliente.Conta[1],Cliente.Saldo[1]);
							break;
							case 3:
								if(Selec==3)
							break;
							default:
								system("cls");
								printf("\n \n  --------------------------------------------------");
								printf("\n \n |                                                  |");
								printf("\n \n |  ..............Saldo NewtonBank...............   | ");
								printf("\n \n |                                                  |");
								printf("\n \n  -------------------------------------------------- \n\n");
								printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
								printf("Selecione a conta para consultar o saldo: \n");
								printf(" [1] Conta Corrente. \n [2] Conta Poupan�a. \n [3] Voltar \n");
								printf("Op��o inv�lida. \n");
							break;
						}
					}while(Selec>=1 && Selec<=2 || Selec!=3);
				break;
		}	
	} while(Num>=1 && Num<=4 || Num!=5);
	system("cls");
	printf("\n \n  --------------------------------------------------");
	printf("\n \n |                                                  |");
	printf("\n \n |  ............Finalizado NewtonBank............   | ");
	printf("\n \n |                                                  |");
	printf("\n \n  -------------------------------------------------- \n\n");
	printf("Senhor(a) %s %s \n",Cliente.Nome,Cliente.Sobrenome);
	printf("Programa finalizado. A NewtonBank agradece a sua prefer�ncia, tenha um excelente dia! \n \n");
}

