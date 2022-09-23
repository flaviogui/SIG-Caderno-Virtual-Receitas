// MENU RELATORIO
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_relatorios.h"
void tela_menu_relatorios(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU RELATORIO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) RELATORIO DE TODOS OS INGREDIENTES-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(2) RELATORIO DE TODAS AS RECEITAS-=-=-=-==|\n");
printf("|-=-=-=-=-=-=-=-=(3) RELATORIO DE TODOS OS CHEFES=-=-=-=-==-|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_ingredientes(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS INGREDIENTES   -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_receitas(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODAS AS RECEITAS       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_chefe(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS CHEFES         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}