// MENU CARDAPIO DIGITAL
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_cardapio.h"
#include "../Assinaturas/menus.h"
#include "../Assinaturas/assin_dadosReceita.h"

void moduloCardapio(void){
    char escolha;

    do {
        escolha = tela_menu_cardapio();
        switch(escolha) {
            case '1':   cafe();
                        break;
            case '2':   almoco();
                        break;
            case '3':   sobremesa();
                        break;
            case '4':   janta();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_menu_cardapio(void){
char opcao4;
system ("clear||cls ");
printf("|-=-=-=-             MENU CARDAPIO DIGITAL         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) CAFE DA MANHA-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ALMOCO-=-=-=-=-=-=-=--=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) SOBREMESA-=-=-=-=--=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) JANTA-=-=-=-=-=-=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao4);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao4; 
}

// CAFÉ DA MANHÃ
void cafe(void) {
  FILE* fp;
  Dados* aln;
  char opcao;
  fp = fopen("dados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  printf("\n\n");
  system ("clear||cls ");
  printf("|-=-=-=            HORA DO CAFE DA MANHA           -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM LANCHE PARA O SEU |\n");
  printf("|CAFE DA MANHA!                                             |\n");
  printf("|                                                           |\n");
  opcao = 'C'; 
  aln = (Dados*) malloc(sizeof(Dados));
  while(fread(aln, sizeof(Dados), 1, fp)) {
    if ((aln->opcao == opcao) && (aln->status == 'C')) {
      exibeDadosInter(aln);
    }
  }
  fclose(fp);
  free(aln);
}

// ALMOÇO
void almoco(void){
  FILE* fp;
  Dados* aln;
  char opcao;
  fp = fopen("dados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  system ("clear||cls ");
  printf("|-=-=-=               HORA DO ALMOCO               -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
  printf("|ALMOCO!                                                    |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  opcao = 'A';
  aln = (Dados*) malloc(sizeof(Dados));
  while(fread(aln, sizeof(Dados), 1, fp)) {
    if ((aln->opcao == opcao) && (aln->status == 'C')) {
      exibeDadosInter(aln);
    }
  }
  fclose(fp);
  free(aln);
}

// SOBREMESA
void sobremesa(void){
  FILE* fp;
  Dados* aln;
  char opcao;
  fp = fopen("dados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  system ("clear||cls ");
  printf("|-=-=-=               HORA DA SOBREMESA            -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM SOBREMESA!        |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  opcao = 'S';
  aln = (Dados*) malloc(sizeof(Dados));
  while(fread(aln, sizeof(Dados), 1, fp)) {
    if ((aln->opcao == opcao) && (aln->status == 'C')) {
      exibeDadosInter(aln);
    }
  }
  fclose(fp);
  free(aln);
}

// JANTA
void janta(void){
  FILE* fp;
  Dados* aln;
  char opcao;
  fp = fopen("dados.dat", "rb");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  system ("clear||cls ");
  printf("|-=-=-=               HORA DA JANTA                -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
  printf("|JANTA!                                                     |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-(0) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  opcao = 'J';  
  aln = (Dados*) malloc(sizeof(Dados));
  while(fread(aln, sizeof(Dados), 1, fp)) {
    if ((aln->opcao == opcao) && (aln->status == 'C')) {
      exibeDadosInter(aln);
    }
  }
  fclose(fp);
  free(aln);
}