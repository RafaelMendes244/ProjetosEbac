#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


   int registro()
   {
      char arquivo[100];
      char cpf[20];
      char nome[50];
      char sobrenome[200];
      char cargo[100];
      
      printf("Digite o CPF(apenas numeros) para Continuar: ");
      scanf("%s", cpf);
      
      strcpy(arquivo, cpf);
      
      FILE *file;
      file = fopen(arquivo, "r");
      if (file != NULL)
      {
      	fclose(file);
      	printf("CPF JA CADASTRADO");
      	getchar();
      	return 1;
      }
      
      file = fopen(arquivo, "w");
      if(file == NULL)
      {
      	printf("ERRO AO CRIAR ARQUIVO");
      	return 1;
      }
      fprintf(file,cpf);
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file, "|");
      fclose(file);
      
      printf("Digite seu Nome: ");
      scanf("%s",nome);
      
      file = fopen(arquivo, "a");
      fprintf(file,nome);
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file, " ");
      fclose(file);
      
      printf("Digite seu Sobrenome: ");
      scanf("%s",sobrenome);
      
      file = fopen(arquivo, "a");
      fprintf(file,sobrenome);
      fclose(file);
      
      file = fopen(arquivo, "a");
      fprintf(file, "|");
      fclose(file);
      
      printf("Escolha seu Cargo: ");
      scanf("%s",cargo);
      
      file = fopen(arquivo, "a");
      fprintf(file,cargo);
      fclose(file);  
      
      printf("USUARIO CADASTRADO COM SUCESSO");
      getchar();
      return 0;
   }
    
   int consulta()
   {
       char cpf[20];
       char conteudo[100];
       
       printf("Digite o CPF(apenas numeros) que vai Consultar: ");
       scanf("%s",cpf);
       
       FILE *file;
       file = fopen(cpf, "r");
       
       if(file == NULL)
       {
       	printf("Usuario Inexistente!!\n");
       	getchar();
       	return 1;
       }
       
       while(fgets(conteudo, 100, file) != NULL)
       {
       	printf("Informacoes\n");
       	printf("%s", conteudo);
       	printf("\n\n");
       }
       getchar();
       
   }
   
   int apagar()
   {
       char cpf[20];
       char yes[4];
       char suce[] = "123";
       
       printf("Delete um CPF(apenas numeros): ");
       scanf("%s", cpf);
       
       printf("Digite a Senha para excluir: ");
       scanf("%s", &yes);
       
       if((strcmp(yes, suce) == 0))
       {
       if(remove(cpf) == 0)
       {
       	printf("CPF DELETADO!");
       }
       else
       {
       	printf("CPF NAO LOCALIZADO");
       }
       }
       else
       {
       	printf("SENHA INVALIDA!!");
       }
       getchar();
       return 0;
   }
   
   int escolha()
	{
		int esco=1;
		printf("Digite 1 para Continuar\n");
		printf("Digite 2 para retornar\n\n");
		printf("Escolha: ");
		scanf("%d", &esco);
		
		switch(esco)
		{
			case 1:
			registro();
			break;
			
			case 2:
			return 0;
			break;
		}
	}

int main()
{
    int opcao=0;
    int x=1;
    
    for(x=1;x=1;)
   {
       
    system("clear");
    
    setlocale(LC_ALL, "Portuguese");
    
    printf("\t## Sejam Bem Vindos ##\n");
    printf("\t## Cartório Da EBAC ##\n\n");
    printf("Escolha a Opção no MENU:\n\n");
    printf("\t1 - Registrar Nome\n");
    printf("\t2 - Consultar Nome\n");
    printf("\t3 - Deletar Nome\n");
    printf("\t4 - Ver Creditos e SAIR\n\n");
    printf("Digite sua Opcao: ");
    scanf("%d", &opcao);
    
    system("clear");
    
    switch(opcao)
    {
        case 1:
        escolha();
        break;
        
        case 2:
        consulta();
        break;
        
        case 3:
        apagar();
        break;
        
        case 4:
        printf("COPYRIGHT R.MENDES\n");
        printf("SAINDO...\n");
        return 0;
        
        default:
        printf("Opção Indisponível!\n");
        getchar();
        break;
    }
    getchar();
   }
   return 0;
}

/*USEI UMAS FUNCOES DIFERENTE POIS ESTOU CRIANDO TUDO PELO CELULAR E ALGUMAS COISAS NAO RODA NO S.O DO CELULAR, IMPLEMENTEI ALGUMAS FUNCOES,JA TIVE AULAS DE PASCALZIM E JA TENTEI MECHER COM PAWN E VISUAL BASIC ENTAO TENHO UM POUCO DE NOCAO, ESPERO QUE NAO TENHA ME EQUIVOCADO E QUE GOSTEM...*/