// MENU CHEFE
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_chefe.h"
#include "../Assinaturas/menus.h"

void moduloChefe(void){
    char escolha;

    do {
        escolha = tela_menu_chefe();
        switch(escolha) {
            case '1':   cadastrar_chefe();
                        break;
            case '2':   verificar_chefe();
                        break;
            case '3':   editar_chefe();
                        break;
            case '4':   excluir_chefe();
                        break;
            case '0':   tela_principal();
                        break;
        } 	
    } while (escolha != '0');


}

char tela_menu_chefe(void){
char opcao3;
system ("clear||cls ");
printf("|-=-=-=-         MENU CHEFE DE COZINHA             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) CADASTRAR CHEFE  -=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) VERIFICAR CHEFE  -=-=-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR CHEFE  -=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR CHEFE  -=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao3);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao3;
}

void cadastrar_chefe(void){
char nome_chefe[20];
system ("clear||cls ");
printf("|-=-=-=-               CADASTRAR CHEFE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE AQUI O CHEFE(USUARIO) RESPONSAVEL PELA ELABORACAO |\n");
printf("|DA(S) RECEITA(S) CULINARIAS.                               |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO CHEFE:                                   |\n");
scanf("%s", &nome_chefe);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_chefe(void){
char email_chefe[30];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE CHEFE              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO CHEFE DESEJADA E VEJA SE O MESMO ESTA        |\n");
printf("|CADASTRADO!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O EMAIL DO CHEFE QUE DESEJA VERIFICAR:              |\n");
scanf("%s", &email_chefe);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_chefe(void){
char email_chefe[30];
system ("clear||cls ");
printf("|-=-=-=-           EDITAR INFORMACOES DO CHEFE     -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR INFORMACOES DO CHEFE             |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O EMAIL DO CHEFE QUE SERA EDITADO:                  |\n");
scanf("%s", &email_chefe);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_chefe(void){
char email_chefe[30];
system ("clear||cls ");
printf("|-=-=-=-              EXCLUIR CHEFE                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI TODAS AS INFORMACOES DO CHEFE QUE DESEJAR      |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O EMAIL DO CHEFE QUE SERA EXCLUIDO:                 |\n");
scanf("%s", &email_chefe);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
