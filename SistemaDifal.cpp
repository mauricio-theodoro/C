#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	struct Main
{
	char Name[30];
	char LastName[30];
	int Pw;
	float C[1];
	float Imp[2], F[3], T[3];
	float FCP[3];
	float VI[2];
};
int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	
	struct Main Main;
	int Num, Selec;
	float Val;
	
	Num=9;
	Selec=9;
	printf("Bem-vindo(a) ao sistema DIFAL. \nDesenvolvido por Mauricio Theodoro. \n");
	printf("Versão: 1.0.\n");
	printf("Digite seu nome e seu sobrenome..........: ");
	scanf("%s%s",Main.Name,Main.LastName );
	system("cls");
	printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	printf("Informe a senha para abrir o sistema: \n");
	scanf("%d", &Main.Pw);
	
	if (Main.Pw == 12345678)
	{
		do
		{
			system("cls");
		    printf("\n \n  --------------------------------------------------");
		    printf("\n \n |                                                  |");
		    printf("\n \n |  ...........Calculadora MG  DIFAL .............  | ");
		    printf("\n \n |                                                  |");
		    printf("\n \n  -------------------------------------------------- \n\n");
		    printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
		    printf("Selecione o estado desejado para efetuar o calcúlo do Difal: \n");
		    printf(" [1] AL.            [2] BA.\n [3] GO.            [4] MS.\n [5] PA.            [6] PB.\n [7] PE.            [8] PI. \n");
		    printf(" [9] PR.            [10] RS.\n [11] SC.           [12] SE.\n [13] SP.           [14] TO\n [0] Sair. \n");
		    scanf("%d", &Num);
		    
		    switch (Num)
		    {
		    	case 1:
		    		system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: ALAGOAS. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
				        		system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Estado: ALAGOAS. \n");
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.15;
				        			Main.FCP[0] = Main.T[0] * 0.01;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: ALAGOAS. \n");
				        			printf("Informe se as Mecadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: ALAGOAS. \n");
				        			printf("Informe se as Mecadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
			        		case 2:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Estado: ALAGOAS. \n");
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.12;
				        			Main.FCP[0] = Main.T[0] * 0.01;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: ALAGOAS. \n");
				        			printf("Informe se as Mecadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: ALAGOAS. \n");
				        			printf("Informe se as Mecadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Estado: ALAGOAS. \n");
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Estado: ALAGOAS. \n");
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.80;
		                    		Main.F[0] = Main.T[0] * 0.15;
		                    		Main.FCP[0] = Main.T[0] * 0.01;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.80;
		                    		Main.F[1] = Main.T[1] * 0.12;
		                    		Main.FCP[1] = Main.T[1] * 0.01;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Estado: ALAGOAS. \n");
	                    			printf("Informe se as Mecadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: ALAGOAS. \n");
				        			printf("Informe se as Mecadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Estado: ALAGOAS. \n");
	                    			printf("Informe se as Mecadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 2:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: BAHIA. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.15;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.12;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.81;
		                    		Main.F[0] = Main.T[0] * 0.15;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.81;
		                    		Main.F[1] = Main.T[1] * 0.12;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 3:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: GOIÁS. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.13;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.10;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.83;
		                    		Main.F[0] = Main.T[0] * 0.13;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1] = Main.VI[1] / 0.83;
		                    		Main.F[1] = Main.T[1] * 0.10;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 4:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: MATO GROSSO DO SUL. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.13;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.10;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.83;
		                    		Main.F[0] = Main.T[0] * 0.13;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.83;
		                    		Main.F[1] = Main.T[1] * 0.10;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 5:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: PARÁ. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.15;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.12;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.81;
		                    		Main.F[0] = Main.T[0] * 0.15;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1] = Main.VI[1] / 0.81;
		                    		Main.F[1] = Main.T[1] * 0.12;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 6:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: PARAÍBA. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.14;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.11;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.82;
		                    		Main.F[0] = Main.T[0] * 0.14;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.82;
		                    		Main.F[1] = Main.T[1] * 0.11;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 7:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: PERNABUCO. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.14;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.11;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.82;
		                    		Main.F[0] = Main.T[0] * 0.14;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.82;
		                    		Main.F[1] = Main.T[1] * 0.11;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 8:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: PIAUÍ. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.79;
				        			Main.F[0] = Main.T[0] * 0.17;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.79;
				        			Main.F[0] = Main.T[0] * 0.14;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.79;
		                    		Main.F[0] = Main.T[0] * 0.17;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.79;
		                    		Main.F[1] = Main.T[1] * 0.14;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 9:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: PARANÁ \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.15;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.81;
				        			Main.F[0] = Main.T[0] * 0.12;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.81;
		                    		Main.F[0] = Main.T[0] * 0.15;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.81;
		                    		Main.F[1] = Main.T[1] * 0.12;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 10:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: RIO GRANDE DO SUL. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.13;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.10;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.83;
		                    		Main.F[0] = Main.T[0] * 0.13;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1] = Main.VI[1] / 0.83;
		                    		Main.F[1] = Main.T[1] * 0.10;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 11:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: SANTA CATARINA. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.13;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.83;
				        			Main.F[0] = Main.T[0] * 0.10;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.83;
		                    		Main.F[0] = Main.T[0] * 0.13;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1] = Main.VI[1] / 0.83;
		                    		Main.F[1] = Main.T[1] * 0.10;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 12:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado:SERGIPE.\n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.15;
				        			Main.FCP[0] = Main.T[0] * 0.01;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.12;
				        			Main.FCP[0] = Main.T[0] * 0.01;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.80;
		                    		Main.F[0] = Main.T[0] * 0.15;
		                    		Main.FCP[0] = Main.T[0] * 0.01;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1] = Main.VI[1] / 0.80;
		                    		Main.F[1] = Main.T[1] * 0.12;
		                    		Main.FCP[1] = Main.T[1] * 0.01;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 13:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: SÃO PAULO. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Estado: SÃO PAULO. \n");
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.14;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Estado: SÃO PAULO. \n");
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: SÃO PAULO. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Estado: SÃO PAULO. \n");
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.82;
				        			Main.F[0] = Main.T[0] * 0.11;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: SÃO PAULO. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: SÃO PAULO. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Estado: SÃO PAULO. \n");
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.82;
		                    		Main.F[0] = Main.T[0] * 0.14;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.82;
		                    		Main.F[1] = Main.T[1] * 0.11;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf("Estado: SÃO PAULO. \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: SÃO PAULO. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf("Estado: SÃO PAULO. \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
				case 14:
					system("cls");
			        printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
			        printf("Estado: TOCANTINS. \n");
			        printf("Informe se as Mecadorias são: \n");
			        printf(" [1] Importada. \n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			        scanf("%d", &Selec);
			        do
			        {
			        	switch (Selec)
			        	{
			        		case 1:
			        			system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Estado: TOCANTINS. \n");
				        		printf("Informe os valores das mercadorias [Importadas]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.16;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: TOCANTINS. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 2:
								system("cls");
				        		printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        		printf("Informe os valores das mercadorias [Nacionais]: \n");
				        		scanf("%f", &Val);
				        		if(Val>0)
				        		{
				        			Main.T[0] = Val / 0.80;
				        			Main.F[0] = Main.T[0] * 0.13;
				        			Main.FCP[0] = Main.T[0] * 0.00;
				        			Main.Imp[0] = Main.T[0] * Main.FCP[0];
				        			system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: TOCANTINS. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[0]);
			               			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[0]);
			               			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[0]);
			               			scanf("%d", &Selec);
			               			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 3:
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Estado: TOCANTINS. \n");
								printf("Informe os valores das mercadorias [Importadas]: \n");
								scanf("%f", &Main.VI[0]);
								system("cls");
								printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
								printf("Informe os valores das mercadorias [Nacionais]: \n");
								scanf("%f", &Main.VI[1]);
								if(Main.VI[0] && Main.VI[1] >0)
								{
									Main.T[0] = Main.VI[0] / 0.80;
		                    		Main.F[0] = Main.T[0] * 0.16;
		                    		Main.FCP[0] = Main.T[0] * 0.00;
		                    		Main.Imp[0] = Main.T[0] * Main.FCP[0];

		                    		Main.T[1]= Main.VI[1] / 0.80;
		                    		Main.F[1] = Main.T[1] * 0.13;
		                    		Main.FCP[1] = Main.T[1] * 0.00;
		                    		Main.Imp[1] = Main.T[1] * Main.FCP[1];
		                    				
		                    		Main.T[2] = Main.T[0] + Main.T[1];
		                    		Main.F[2] = Main.F[0] + Main.F[1];
		                    		Main.FCP[2] = Main.FCP[0] + Main.FCP[1];
		                    		system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Valor do Difal a ser PAGO: R$:%.2f \n", Main.F[2]);
	                    			printf("Valor  da Base de cálculo - UF de origem: R$:%.2f \n", Main.T[2]);
	                    			printf("Valor do Fundo de Combate à Pobreza: R$:%.2f \n", Main.FCP[2]);
	                    			scanf("%d", &Selec);
	                    			break;
								}
								else
								{
									system("cls");
				        			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
				        			printf("Mercadorias são: \n");
				        			printf("Estado: TOCANTINS. \n");
			               			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
			               			printf("Valores negativos são permitidos! \n");
									scanf("%d", &Selec);
									break;
								}
							case 4:
								if(Selec == 4)
								break;
							default:
	                    			system("cls");
	                    			printf("Senhor(a): %s %s \n",Main.Name, Main.LastName);
	                    			printf("Mercadorias são: \n");
	                    			printf("Estado: TOCANTINS. \n");
	                    			printf(" [1] Importada.\n [2] Nacional.\n [3] Importada e Nacional \n [4] Voltar.\n");
	                    			printf("Opção inválida!\n");
									scanf("%d", &Selec);
								break;
						}
					}while (Selec >=1 && Selec <=3 || Selec!=4);
					break;
			}
		}while (Num>=1 && Num<=14 || Num!=0);
	}
}
