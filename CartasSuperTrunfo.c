#include <stdio.h>

    //variaveis para armazenar os dados das cartas
    //de super trunfo
    //cada carta tera os seguintes dados:
    // eatado, codigo, cidade, populacao,area, pib e pontos turisticos
    //as variaveis devem ser declaradas antes de serem usadas
    // e deve ser usado o tipo de dado correto para cada variavel
   
   
   
   
   int main( )  {
   
   
    int turismo1, turismo2;
	int populacao1, populacao2;
	char codigo1[10], codigo2[10];
	char cidade1[50],cidade2[50]; 
	char estado1[10], estado2[10];
	float area1, area2;
	float pib1, pib2;
	

    //Seja bem vindo ao cadastro de cartas do super trunfo!\n\n");
    // CADASTRO CARTA 1
    printf("Agora vamos a primeira carta!\n\n");
	//CARTA 1
	
	
	
    printf("Digite o nome do estado:\n");
    scanf("%s",estado1);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s",&codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s",&cidade1);
    
    printf("Digite a populacao da cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite a area da cidade em km2\n");
    scanf("%f",&area1);

    printf("Digite o pib da cidade:\n");
    scanf("%f",&pib1);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d",&turismo1);

    printf("Estado:%s\n",estado1);
    printf("Codigo da carta:%s\n",codigo1);
    printf("Nome da cidade:%s\n",cidade1);
    printf("populacao:%d\n",populacao1);
    printf("area:%.2f\n",area1);
    printf("pib:%.2f\n",pib1);
    printf("Numero de pontos turisticos:%d\n\n",turismo1);

    //CADASTRO CARTA 2
    printf("Agora vamos cadastrar a carta 2!\n\n");


    printf("Digite o nome do estado:\n");
    scanf("%s",estado2);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s",&cidade2);
    
    printf("Digite a populacao da cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a area da cidade em km2\n");
    scanf("%f",&area2);

    printf("Digite o pib da cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d",&turismo2);

    printf("Estado:%s\n",estado2);
    printf("Codigo da carta:%S\n",codigo2);
    printf("Nome da cidade:%s\n",cidade2);
    printf("populacao:%d\n",populacao2);
    printf("area:%.2f\n",area2);
    printf("pib:%.2f\n",pib2);
    printf("turismo:%d\n",turismo2);
    
    
    return 0;
             }    
    

