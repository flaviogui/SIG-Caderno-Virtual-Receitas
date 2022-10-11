// VERSÃO 7 DO PROJETO
#include <stdio.h>
#include <stdlib.h>
#include "Assinaturas/menus.h"
#include "Assinaturas/assin_ingredientes.h"
#include "Assinaturas/assin_receitas.h"
#include "Assinaturas/assin_chefe.h"
#include "Assinaturas/assin_cardapio.h"
#include "Assinaturas/assin_relatorios.h"
#include "Assinaturas/assin_informacao.h"



int main(void){
    char opcao;

    do {
        opcao = tela_principal();
        switch(opcao) {
            case '1':   moduloIngredientes();
                        break;
            case '2':   moduloReceitas();
                        break;
            case '3':   moduloChefe();
                        break;
            case '4':   moduloCardapio();
                        break;
            case '5':   moduloRelatorio();
                        break;
            case '6':   moduloInformacao();
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
getchar();
printf( " \t\t\t >>>  /// Aperte ENTER ///                           \n");
getchar();
return opcao;
}
