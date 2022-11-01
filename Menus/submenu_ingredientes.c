// MENU INGREDIENTES
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_ingredientes.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"

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
struct infor_receita
{
   char id_chefe[4];
   char id_receita[4];
   char nome_receita[50];
   char tempo_preparo[10];
   char nivel_dif[25];
   char porcoes[4];
};

struct ingredientes{
  char ingredientes[300];
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

// AREA DO CREATE
void cadastrar_alimento(void){
struct infor_receita Infor_receita;
struct ingredientes Ingredientes;
int validadorNome;
int validadorID_chefe;
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS ALIMENTOS NECESSARIOS PARA ELABORAR SUA RECEITA|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");

do{
printf("DIGITE O ID DO CHEFE:                                        \n");
fgets(Infor_receita.id_chefe,4,stdin);
for (int x = 0; Infor_receita.id_chefe[x] != '\0'; x++) {
    if (Infor_receita.id_chefe[x] == '\n') {
      Infor_receita.id_chefe[x] = '\0';
    }
validadorID_chefe = validarID(Infor_receita.id_chefe);
} while(validadorID_chefe == 0);

do{
printf("AGORA, DIGITE O ID DA RECEITA:                               \n");
fgets(Infor_receita.id_receita,4,stdin);
for (int x = 0; Infor_receita.id_receita[x] != '\0'; x++) {
    if (Infor_receita.id_receita[x] == '\n') {
      Infor_receita.id_receita[x] = '\0';
    }
validadorID_receita = validarID(Infor_receita.id_receita);
} while(validadorID_receita == 0);

do{
printf("DIGITE O NOME DA RECEITA:                                    \n");
fgets(Infor_receita.nome_receita,50,stdin);
for (int x = 0; Infor_receita.nome_receita[x] != '\0'; x++) {
    if (Infor_receita.nome_receita[x] == '\n') {
      Infor_receita.nome_receita[x] = '\0';
    }
validadorNome = validarNome(Infor_receita.nome_receita);
} while(validadorNome == 0);

printf("DIGITE O TEMPO DE PREPARO DA RECEITA:                        \n");
fgets(Infor_receita.tempo_preparo,10,stdin);
printf("DIGITE O NIVEL DE DIFICULDADE DA RECEITA :                   \n");
fgets(Infor_receita.nivel_dif,25,stdin);
printf("DIGITE A QUANTIDADE DE PORCOES DO PRATO:                     \n");
fgets(Infor_receita.porcoes,4,stdin);
printf("AGORA DIGITE OS INGREDIENTES PRESENTES NA RECEITA:           \n");
fgets(Ingredientes.ingredientes,300,stdin);
getchar();
printf( " \t\t\t >>> INGREDIENTES CADASTRADOS COM SUCESSO!!!         \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO READ
void verificar_alimento(void){
char id_receita[4];
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE INGREDIENTE        -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO ALIMENTO DESEJADO E VEJA SE O MESMO ESTA     |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE DESEJA VERIFICAR:               |\n");
scanf("%s", id_receita);
validadorID_receita = validarID(id_receita);
} while(validadorID_receita == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO UPDATE
void editar_alimento(void){
char id_receita[4];
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=-              EDITAR INGREDIENTE           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR INGREDIENTES        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE SERA MODIFICADO:                |\n");
scanf("%s", id_receita);
validadorID_receita = validarID(id_receita);
} while(validadorID_receita == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}   

// AREA DO DELETE
void excluir_alimento(void){
char id_receita[4];
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR INGREDIENTE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DA RECEITA QUE SERA EXCLUIDO:                  |\n");
scanf("%s", id_receita);
validadorID_receita = validarID(id_receita);
} while(validadorID_receita == 0); 
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
  }    