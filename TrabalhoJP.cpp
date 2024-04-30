#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char Nome[30], Sobrenome[30];
	
	float Estoque[2]={100,50};
	float Val;
	int Num, Selec;
	
	Num=9;
	Selec=9;
	printf("\n \n  --------------------------------------------------");
	printf("\n \n |                                                  |");
	printf("\n \n |.........Bem-vindo(a) A Jatiboca / Pontal.........| ");
	printf("\n \n |                                                  |");
	printf("\n \n  -------------------------------------------------- \n");
	printf("Digite seu nome e seu sobrenome..........: ");
	scanf("%s%s", Nome, Sobrenome);
	
		do
		{
			system("cls");
			printf("\n \n  --------------------------------------------------");
			printf("\n \n |                                                  |");
			printf("\n \n |.............Sistema Jatiboca /Pontal.............| ");
			printf("\n \n |                                                  |");
			printf("\n \n  -------------------------------------------------- \n");
			printf("Senhor(a) %s %s \n",Nome, Sobrenome);
			printf("Selecione a opção desejada: \n");
			printf(" [1] Entrada de Estoque.\n [2] Retirada de Estoque.\n [3] Transferência de Estoque.\n [4] Consulta de Estoque.\n [5] Finalizar. \n");
			scanf("%d", &Num);
			switch (Num)
			{
				case 1:
					system("cls");
					printf("Senhor(a) %s %s \n",Nome, Sobrenome);
					printf("Entrada de estoque selecione a filial desejada..........: \n");
					printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
					do
					{
						scanf("%d", &Selec);
						switch (Selec)
						{
							case 1:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Por favor, informe a quantidade de Kg de açúcar que deseja entrar em Jatiboca:..........: \n");
								scanf("%f", &Val);
								if(Val>=0)
								{
									*Estoque+=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Entrada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Estoque atualizado para: %.3f Kg \n", *Estoque);
									break;
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Entrada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Não é possivel entrar com o estoque negativo! \n");
									break;
								}
							case 2:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Por favor, informe a quantidade de Kg de açúcar que deseja entrar em Pontal:..........: \n");
								scanf("%f", &Val);
								if(Val>=0)
								{
									Estoque[1]+=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Entrada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Estoque atualizado para: %.3f Kg \n", Estoque[1]);
									break;
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Entrada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Não é possivel entrar com o estoque negativo! \n");
									break;
								}
							case 3:
								if(Selec==3)
								break;
							default:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Entrada de estoque selecione a filial desejada..........: \n");
								printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
								printf("Opção inválida. \n");
							break;
						}
					}while(Selec>=1 && Selec<=2 || Selec!=3);
					break;
				case 2:
					system("cls");
					printf("Senhor(a) %s %s \n",Nome, Sobrenome);
					printf("Retirada de estoque selecione a filial desejada..........: \n");
					printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
					do
					{
						scanf("%d", &Selec);
						switch (Selec)
						{
							case 1:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Informe os quilos de açúcar que deseja retirar de Jatiboca..........: \n");
								scanf("%f", &Val);
								if (Val<=*Estoque && *Estoque>=0 && Val>=0)
								{
									*Estoque-=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("O estoque restante é: %.3f Kg \n", *Estoque);
								}
								else if(Val<0)
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Não é possivel entrar com o estoque negativo! \n");
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("O estoque não pode ficar negativo. \n");
								}
								break;
								
							case 2:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Informe os Kg de açúcar que deseja retirar de Pontal..........: \n");
								scanf("%f", &Val);
								
								if (Val<=Estoque[1] && Estoque[1]>=0 && Val>=0)
								{
									Estoque[1]-=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("O estoque restante é: %.3f Kg \n", Estoque[1]);
								}
								else if(Val<0)
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("Não é possivel entrar com o estoque negativo! \n");
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Retirada de estoque selecione a filial desejada..........: \n");
									printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
									printf("O estoque não pode ficar negativo. \n");
								}
								break;
							case 3:
								if(Selec==3)
								system("cls");
								break;
							default:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Retirada de estoque selecione a filial desejada..........: \n");
								printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar. \n");
								printf("Opção inválida. \n");
								break;
						}
					}while(Selec>=1 && Selec<=2 || Selec!=3);
					break;
				case 3:
					system("cls");
					printf("Senhor(a) %s %s \n",Nome, Sobrenome);
					printf("Transfêrencia de estoque selecione a filial desejada: \n");
					printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
					do
					{
						scanf("%d", &Selec);
						switch (Selec)
						{
							case 1:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Informe os Kg de açúcar que deseja transferir para Pontal:..........: \n");
								scanf("%f", &Val);
								
								if (*Estoque>=Val && Val>=0)
								{
									*Estoque-=Val;
									Estoque[1]+=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Transferência realizada com sucesso! \n");
									printf("Estoque atualizado de Jatiboca é: %.3f Kg \n", *Estoque);
									printf("Estoque atualizado de Pontal é: %.3f Kg \n", Estoque[1]);
									break;
								}
								else if (Val<0)
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Não é possivel transferir estoque negativo! \n");
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Não é possível realizar a transferência de Jatiboca para Pontal devido à insuficiência de estoque! \n");
								}
								break;
							case 2:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Informe os Kg de açúcar que deseja transferir para Jatiboca:..........: \n");
								scanf("%f", &Val);
								
								if (Estoque[1]>=Val && Val>=0)
								{
									*Estoque+=Val;
									Estoque[1]-=Val;
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Transferência realizada com sucesso! \n");
									printf("Estoque atualizado de Jatiboca é:%.3f Kg \n", *Estoque);
									printf("Estoque atualizado de Pontal é:%.3f Kg \n", Estoque[1]);
									break;
								}
								else if(Val<0)
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Não é possivel transferir estoque negativo! \n");
								}
								else
								{
									system("cls");
									printf("Senhor(a) %s %s \n",Nome, Sobrenome);
									printf("Transfêrencia de estoque selecione a filial desejada: \n");
									printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
									printf("Não é possível realizar a transferência de Pontal para Jatiboca devido à insuficiência de estoque! \n");
									break;
								}
								break;
							case 3:
								if(Selec==3)
								system("cls");
								break;
							default:
								system("cls");
								printf("Senhor(a) %s %s \n",Nome, Sobrenome);
								printf("Transfêrencia de estoque selecione a filial desejada: \n");
								printf(" [1] Jatiboca para Pontal. \n [2] Pontal para Jatiboca. \n [3] Voltar. \n");
								printf("Opção inválida. \n");
								break;
						}
					}while(Selec>=1 && Selec<=2 || Selec!=3);
					break;
				case 4:
					system("cls");
					printf("Selecione a filial que deseja consultar o estoque: \n");
					printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar \n");
					do
					{
						scanf("%d", &Selec);
						switch (Selec)
						{
							case 1:
								system("cls");
								printf("Selecione a filial que deseja consultar o estoque: \n");
								printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar \n");
								printf("O estoque da empresa Jatiboca é: %.3f Kg \n", *Estoque);
								break;
							case 2:
								system("cls");
								printf("Selecione a filial que deseja consultar o estoque: \n");
								printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar \n");
								printf("O estoque da empresa Pontal é: %.3f Kg \n", Estoque[1]);
								break;
							case 3:
								if(Selec==3)
								break;
							default:
								system("cls");
								printf("Selecione a filial que deseja consultar o estoque: \n");
								printf(" [1] Jatiboca. \n [2] Pontal. \n [3] Voltar \n");
								printf("Opção inválida. \n");
							break;
						}
					}while(Selec>=1 && Selec<=2 || Selec!=3);
					break;
			}
		} while(Num>=1 && Num<=4 || Num!=5);
		system("cls");
		printf("Senhor(a) %s %s \n",Nome, Sobrenome);
		printf("Programa finalizado. Jatiboca / Pontal agradece a sua preferência, tenha um excelente dia! \n");
}
