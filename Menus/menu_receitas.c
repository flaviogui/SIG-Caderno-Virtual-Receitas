// MENU RECEITAS
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_receitas.h"
#include "../Assinaturas/menus.h"

void moduloReceitas(void){
    char escolha;

    do {
        escolha = tela_menu_receitas();
        switch(escolha) {
            case '1':   verificar_receitas();
                        break;
            case '2':   cadastrar_receitas();
                        break;
            case '3':   editar_receitas();
                        break;
            case '4':   excluir_receitas();
                        break;
            case '0':   tela_principal();
                        break;
        } 	
    } while (escolha != '0');


}

char tela_menu_receitas(void){
char opcao2;
system ("clear||cls ");
printf("|-=-=-=-        MENU DE RECEITAS CULINARIAS        -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) VERIFICAR RECEITA-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ADICIONAR RECEITA-=-=-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR RECEITA-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR RECEITA-=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao2);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao2;
}

void verificar_receitas(void){
char codigo_receitas1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE RECEITAS           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELA RECEITA DESEJADA E VEJA SE O MESMO ESTA      |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE DESEJA VERIFICAR:           |\n");
scanf("%s", &codigo_receitas1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cadastrar_receitas(void){
char codigo_receitas2[60];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR DE RECEITAS           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE A SUA NOVA RECEITA AQUI                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA NOVA RECEITA:                           |\n");
scanf("%s", &codigo_receitas2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_receitas(void){
char codigo_receitas3[60];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR RECEITA               -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR RECEITAS            |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EDITADA:               |\n");
scanf("%s", &codigo_receitas3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_receitas(void){
char codigo_receita4[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR RECEITAS                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI AS RECEITAS POR COMPLETO.                      |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EXCLUIDA:              |\n");
scanf("%s", &codigo_receita4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
