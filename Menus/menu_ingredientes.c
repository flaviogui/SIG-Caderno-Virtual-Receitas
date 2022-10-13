// MENU INGREDIENTES
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_ingredientes.h"
#include "../Assinaturas/menus.h"

void moduloIngredientes(void){
    char escolha;

    do {
        escolha = tela_menu_ingredientes();
        switch(escolha) {
            case '1':   cadastrar_alimento();
                        break;
            case '2':   verificar_alimento();
                        break;
            case '3':   editar_alimento();
                        break;
            case '4':   excluir_alimento();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_menu_ingredientes(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU INGREDIENTES             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) ADICIONAR INGREDIENTE-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) VERIFICAR INGREDIENTE-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR INGREDIENTE-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR INGREDIENTE -=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao;
}


void cadastrar_alimento(void){
char nome_alimento2[20];
char id_receita[3];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS ALIMENTOS NECESSARIOS PARA ELABORAR SUA RECEITA|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("DIGITE O ID DA RECEITA QUE OS INGREDIENTES SERAO ADICIONADOS \n");
scanf("%s", id_receita);
printf("DIGITE O NOME DO ALIMENTO QUE SERA ADICIONADO:               \n");
scanf("%s", nome_alimento2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_alimento(void){
char nome_alimento1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE INGREDIENTE        -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO ALIMENTO DESEJADO E VEJA SE O MESMO ESTA     |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE DESEJA VERIFICAR:            |\n");
scanf("%s", nome_alimento1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_alimento(void){
char nome_alimento3[20];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR INGREDIENTES        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO INGREDIENTE QUE SERA MODIFICADO:          |\n");
scanf("%s", nome_alimento3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_alimento(void){
char nome_alimento4[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR INGREDIENTE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA EXCLUIDO:               |\n");
scanf("%s", nome_alimento4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}