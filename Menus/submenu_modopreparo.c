// SUB MENU MODO PREPARO
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_modopreparo.h"
#include "../Assinaturas/menus.h"

void modoPreparo(void){
    char escolha;

    do {
        escolha = tela_submenu_modopreparo();
        switch(escolha) {
            case '1':   cadastrar_modo();
                        break;
            case '2':   verificar_modo();
                        break;
            case '3':   editar_modo();
                        break;
            case '4':   excluir_modo();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_submenu_modopreparo(void){
char opcao2;
system ("clear||cls ");
printf("|-=-=-=-              MODO DE PRAPARO              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) ADICIONAR MODO DE PRAPARO-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) VERIFICAR MODO DE PRAPARO-=-=-=-=-=--=-|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR MODO DE PREPARO-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR MODO DE PREPARO -=-=--=-=-=-==-|\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao2);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao2;
}



void cadastrar_modo(void){
char codigo_receitas2[60];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR MODO DE PREPARO       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE A SUA NOVA RECEITA AQUI                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA NOVA RECEITA:                           |\n");
scanf("%s", codigo_receitas2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_modo(void){
char codigo_receitas1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE MODO DE PREPARO    -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELA RECEITA DESEJADA E VEJA SE O MESMO ESTA      |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE DESEJA VERIFICAR:           |\n");
scanf("%s", codigo_receitas1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_modo(void){
char codigo_receitas3[60];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR MODO DE PREPARO       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR RECEITAS            |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EDITADA:               |\n");
scanf("%s", codigo_receitas3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_modo(void){
char codigo_receita4[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR MODO DE PREPARO         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI AS RECEITAS POR COMPLETO.                      |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EXCLUIDA:              |\n");
scanf("%s", codigo_receita4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
