// MENU INGREDIENTES
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_ingredientes.h"
#include "../Assinaturas/menus.h"

void moduloIngredientes(void){
    char escolha;

    do {
        escolha = tela_submenu_ingredientes();
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

char tela_submenu_ingredientes(void){
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
char id_chefe[4];
char id_receita[4];
char nome_receita[50];
char tempo_preparo[10];
char nivel_dif[25];
char porcoes[4];
char ingredientes[300];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS ALIMENTOS NECESSARIOS PARA ELABORAR SUA RECEITA|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("DIGITE O ID DO CHEFE:                                        \n");
scanf("%s", id_chefe);
printf("AGORA, DIGITE O ID DA RECEITA:                               \n");
scanf("%s", id_receita);
printf("DIGITE O NOME DA RECEITA:                                    \n");
scanf("%s", nome_receita);
printf("DIGITE O TEMPO DE PREPARO DA RECEITA:                        \n");
scanf("%s", tempo_preparo);
printf("DIGITE O NIVEL DE DIFICULDADE DA RECEITA :                   \n");
scanf("%s", nivel_dif);
printf("DIGITE A QUANTIDADE DE PORCOES DO PRATO:                     \n");
scanf("%s", porcoes);
printf("AGORA DIGITE OS INGREDIENTES PRESENTES NA RECEITA:           \n");
scanf("%s", ingredientes);
getchar();
printf( " \t\t\t >>> INGREDIENTES CADASTRADOS COM SUCESSO!!!         \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_alimento(void){
char id_receita[4];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE INGREDIENTE        -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO ALIMENTO DESEJADO E VEJA SE O MESMO ESTA     |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O ID DA RECEITA QUE DESEJA VERIFICAR:               |\n");
scanf("%s", id_receita);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_alimento(void){
char id_receita[4];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR INGREDIENTES        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O ID DA RECEITA QUE SERA MODIFICADO:                |\n");
scanf("%s", id_receita);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_alimento(void){
char id_receita[4];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR INGREDIENTE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O ID DA RECEITA QUE SERA EXCLUIDO:                  |\n");
scanf("%s", id_receita); 
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}