// MENU RELATORIO
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_relatorios.h"
#include "../Assinaturas/menus.h"
#include "../Assinaturas/assin_chefe.h"
#include "../Assinaturas/assin_dadosReceita.h"
#include "../Assinaturas/assin_modopreparo.h"

void moduloRelatorio(void){
    char escolha;

    do {
        escolha = tela_menu_relatorios();
        switch(escolha) {
            case '1':   relatorio_chefe();
                        break;
            case '2':   relatorio_dados();
                        break;
            case '3':   relatorio_receitas();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_menu_relatorios(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-                 MENU RELATORIO            -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=(1) RELATORIO DE TODOS OS CHEFES-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-(2) RELATORIO DE TODOS OS DADOS DA RECEITA-=-=|\n");
printf("|-=-=-=-=-=-=-(3) RELATORIO DE TODAS AS RECEITAS=-=-=-=-==-=|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao; 
}

//RELATORIO CHEFE
void relatorio_chefe(void) {
  FILE* fp;
  Chefe* aln;
  fp = fopen("chefe.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  system ("clear||cls ");
  printf("|-=-=-=       RELATORIO DE TODOS OS CHEFES         -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|                                                           |\n");
  aln = (Chefe*) malloc(sizeof(Chefe));
  while(fread(aln, sizeof(Chefe), 1, fp)) {
    if (aln->status == 'C') {
      exibeChefe(aln);
    }
  }
  fclose(fp);
  free(aln);
}


//RELATÓRIO DADOS DA RECEITA
void relatorio_dados(void) {
  FILE* fp;
  Dados* aln;
  fp = fopen("dados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  system ("clear||cls ");
  printf("|-=-=-=   RELATORIO DE TODOS OS DADOS DA RECEITA   -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|                                                           |\n");
  aln = (Dados*) malloc(sizeof(Dados));
  while(fread(aln, sizeof(Dados), 1, fp)) {
    if (aln->status == 'C') {
      exibeDados(aln);
    }
  }
  fclose(fp);
  free(aln);
}

//RELATÓRIO DAS RECEITAS
void relatorio_receitas(void){
FILE* fp;
Ingremodo* aln;
char lixo[20];   
system ("clear||cls ");
printf("|-=-=   RELATORIO DOS INGREDIENTE E MODO DE PREPARO    -=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");

aln = (Ingremodo*) malloc(sizeof(Ingremodo));
fp = fopen("receita.txt", "ra");
if (fp == NULL){
  printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
  printf("Não é possível continuar este programa...\n");
  exit(1);
  }

while(!feof(fp)) {
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->id_receita);
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->ingrediente);
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->modo);
    exibeReceita(aln);
}
  fclose(fp);
  free(aln);
}

