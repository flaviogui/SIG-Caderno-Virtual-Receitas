// SUB MENU MODO PREPARO
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_modopreparo.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"

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
printf("|-=-=-=-        INGREDIENTES E MODO DE PRAPARO     -=-=-=-=-|\n");
printf("|-=-=-=-=(1) ADICIONAR INGREDIENTE E MODO DE PRAPARO-=-=-=-=|\n");
printf("|-=-=-=-=(3) VERIFICAR INGREDIENTE E MODO DE PRAPARO-=-=-=-=|\n");
printf("|-=-=-=-=(4) EDITAR INGREDIENTE E MODO DE PREPARO-=-=-=-=-=-|\n");
printf("|-=-=-=-=(4) EXCLUIR INGREDIENTE E MODO DE PREPARO-=-=--=-=-|\n");
printf("|-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao2);
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao2;
}

// AREA DO CREATE
void cadastrar_modo(void){
char id_receita[4];
char modo_preparo[800];
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=-  CADASTRAR INGREDIENTE E MODO DE PREPARO  -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE AQUI OS INGREDIENTES E MODO DE PREPARO DA RECEITA |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA:                                    |\n");
scanf("%s", id_receita);
validadorID_receita = validarID(id_receita);
} while(validadorID_receita == 0);

printf("|DIGITE O MODO DE PREPARO DA RECEITA:                       |\n");
scanf("%s",modo_preparo);
getchar();
printf( " \t\t\t >>> MODO DE PREPARO CADASTRADO COM SUCESSO!!!       \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO READ
void verificar_modo(void){
char id_receita[4];
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=    VERIFICAR INGREDIENTES DE MODO DE PREPARO    -=-=|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELOS INGREDIENTES E MODO DE PREPARO DESEJADO E   |\n");
printf("|VEJA SE OS MESMOS ESTAO DISPONIVEIS!                       |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE DESEJA VERIFICAR:           |\n");
scanf("%s", id_receita);
validadorID_receita = validarID(id_receita);
} while(validadorID_receita == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO UPDATE
void editar_modo(void){
char id_receita[4];
int validadorID_receitas;
system ("clear||cls ");
printf("|-=-=-=-     EDITAR INGREDIENTES E MODO DE PREPARO      -=-=|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR OS INGREDIENTES E   |\n");
printf("|MODO DE PREPARO                                            |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE SERA EDITADA:               |\n");
scanf("%s", id_receita);
validadorID_receitas = validarID(id_receita);
} while(validadorID_receitas == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO DELETE
void excluir_modo(void){
char id_receita[4];
int validadorID_receitas;
system ("clear||cls ");
printf("|-=-=-=-   EXCLUIR INGREDIENTES E MODO DE PREPARO      -=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI OS INGREDIENTES E MODO DE PREPARO POR COMPLETO.|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE SERA EXCLUIDA:              |\n");
scanf("%s", id_receita);
validadorID_receitas = validarID(id_receita);
} while(validadorID_receitas == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
