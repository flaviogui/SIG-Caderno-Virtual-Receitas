// VERSÃO 4 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>
#include "Assinaturas/menus.h"




int main(void){
    char opcao;

    do {
        opcao = tela_principal();
        switch(opcao) {
            case '1':   tela_menu_ingredientes();
                        break;
            case '2':   tela_menu_receitas();
                        break;
            case '3':   tela_menu_chefe();
                        break;
            case '4':   tela_menu_cardapio();
                        break;
            case '5':   tela_menu_relatorios();
                        break;
            case '6':   tela_informacoes();
                        break;
        } 	
    } while (opcao != '0');

    return 0;
}
    

char tela_principal(void){
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
return opcao;
}
