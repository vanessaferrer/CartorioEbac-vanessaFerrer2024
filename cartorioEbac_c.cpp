	#include <stdio.h>//bliblioteca comunicaçao de usuario
    #include <stdlib.h>//alocaçao de espaço
    #include <locale.h>//biblioteca de alocaçao por regiao
    #include <string.h> //biblioteca responsavel por cuidar das strings
    int registro()  //funcao responsavael para cadastrar usuario
    {
     	setlocale(LC_ALL,"portuguese");//definindo a linguagem
     	
    char arquivo[40];	//variavel inicio da criacao/strings
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    // final da variaveis
    
     printf("Digite o CPF a ser cadastrado:");//coletando informacao do usuario
     scanf("%s",cpf);
     
     strcpy(arquivo,cpf); //responsavel por copiar os valores das string
     
     FILE*file;
     file = fopen(arquivo,"w"); // w de write.Cria o arquivo
     fprintf(file,cpf); //salva o valor da variavel
     fclose(file);//fecha o arquivo
     
     file = fopen(arquivo,"a");
     fprintf(file,",");
     fclose(file); //virgula
     
     printf("Digite o nome a ser cadastrado:");
     scanf("%s",nome); //porcento s refere a string
     
     file = fopen(arquivo,"a"); //abre o arquivo
     fprintf(file,nome);
     fclose(file);
     
     file = fopen(arquivo,"a");
     fprintf(file,",");
     fclose(file); //virgula
     
     printf("Digite o sobrenome a ser cadastrado:");
     scanf("%s",sobrenome);
     
     file=fopen(arquivo,"a");
     fprintf(file,sobrenome);
     fclose(file);
     
      file = fopen(arquivo,"a");
     fprintf(file,",");
     fclose(file); //virgula
     
     printf("Digite o cargo a ser cadastrado:");
     scanf("%s",cargo);
     
      file = fopen(arquivo,"a");
     fprintf(file,cargo);
     fclose(file); 
     
     system("pause");
     
     
	}
	int consultar()
	{
			setlocale(LC_ALL,"portuguese");//definindo a linguagem
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE * file;
	file =fopen(cpf,"r");// r de read
	
	if(file==NULL)
	{	
	printf("Nao foi possivel abrir o arquivo,nao localizado!.\n");
    }

    while(fgets(conteudo,200,file)!=NULL)
    {
	printf("\nEssas sao as informacoes do usuario:");
	printf("%s",conteudo);
	printf("\n\n");
	
    }
system("pause");
	
	}
	

	
	int deletar()
	{
	char cpf[40];
	
	printf("Digite o cpf do usuario ser deletado;");//deletar cpf
	scanf("%s",cpf); //salvar numero na variavel com string porcento s
	
	
	
	remove(cpf); //para deletar o arquivo
	
	FILE*file; //chamar o arquivo
	file = fopen(cpf,"r");
	 
	 if(file ==NULL)//arquivo nulo
	 {
    	printf("deletado com sucesso.\n");
	 system("pause");	 
	}
}
	
    int main()
    {
	int opcao=0;//definindo variavel	
	
	int laco=1;
	for(laco=1;laco=1;)
	{
		system("cls");

	setlocale(LC_ALL, "portuguese");//definindo a linguagem
	
	printf("### cartorio da Ebac \n\n");//inicio do menu 
	printf("escolha a opçao desejada do menu:\n\n");
	printf("\t1-registrar nomes\n");
    printf("\t2-consultar nomes\n");
    printf("\t3-deletar nomes\n\n");//fim do menu
	
	scanf("%d",&opcao);//armazenando escolha do usuario
	
	system("cls"); 
	switch(opcao) //inicio da selecao de menu e chamar funcao
	{
		case 1:
		registro();
		break;
		
		case 2 :
    consultar();
	break;
	
	case 3:
		deletar();
	break;

	default:
		printf("essa opcao nao esta disponivel!\n");
		system("pause");
		break;
		
;	}
}}
	
	

    
