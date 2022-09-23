// VERSÃO 4 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>
#include "Assinaturas/assin_ingredientes.h"
#include "Assinaturas/assin_receitas.h"
#include "Assinaturas/assin_chefe.h"
#include "Assinaturas/assin_cardapio.h"
#include "Assinaturas/assin_relatorios.h"
#include "Assinaturas/assin_informacao.h"


int main(void){
    tela_principal();
    
    tela_menu_ingredientes();
    verificar_alimento();
    cadastrar_alimento();
    editar_alimento();
    excluir_alimento();

    tela_menu_receitas();
    verificar_receitas();
    cadastrar_receitas();
    editar_receitas();
    excluir_receitas();

    tela_menu_chefe();
    cadastrar_chefe();
    verificar_chefe();
    editar_chefe();
    excluir_chefe();
    
    tela_menu_cardapio();
    cafe();
    almoco();
    sobremesa();
    janta();

    tela_menu_relatorios();
    relatorio_ingredientes();
    relatorio_receitas();
    relatorio_chefe();

    tela_informacoes();
    tela_sobre();
    tela_equipe();
    tela_infor();
    

    return 0;    
}

void tela_principal(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-BEM VINDO AO CADERNO ELETRONICO DE RECEITAS-=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) MENU INGREDIENTES-=-=-==-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(2) MENU RECEITAS-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(3) MENU CHEFE-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(4) MENU CARDAPIO DIGITAL-=--=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(5) MENU RELATORIOS-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(6) INFORMACOES GERAIS-=-==-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(0) SAIR-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha a opcao desejada:                                  |\n");
scanf (" %c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
}
