// SUB MENU MODO PREPARO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Assinaturas/assin_modopreparo.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"

void modoPreparo(void){
    char escolha;
    Ingremodo* receita;

    do {
        escolha = tela_submenu_modopreparo();
        switch(escolha) {
            case '1':   receita = preencheReceita();
                        gravaReceita(receita);
                        free(receita);
                        break;
            case '2':   receita = buscaReceita();
                        exibeReceita(receita);
                        free(receita);
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
printf("|-=-=-=-=(2) VERIFICAR INGREDIENTE E MODO DE PRAPARO-=-=-=-=|\n");
printf("|-=-=-=-=(3) EDITAR INGREDIENTE E MODO DE PREPARO-=-=-=-=-=-|\n");
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
Ingremodo* preencheReceita(void){
Ingremodo* aln;
aln =(Ingremodo*)malloc(sizeof(Ingremodo));
int validadorID;
system ("clear||cls ");
printf("|-=-=-=-  CADASTRAR INGREDIENTE E MODO DE PREPARO  -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE AQUI OS INGREDIENTES E MODO DE PREPARO DA RECEITA |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("DIGITE O ID DA RECEITA:                                       \n");
scanf(" %3[^\n]", aln->id_receita);
getchar();
validadorID = validarID(aln->id_receita);
} while(validadorID == 0);
printf("DIGITE OS INGREDIENTES QUE A RECEITA VAI POSSUIR:             \n");
scanf(" %399[^.]", aln->ingrediente);
getchar();
printf("AGORA DIGITE O MODO DE PREPARO DA RECEITA:                    \n");
scanf(" %999[^.]", aln->modo);
getchar();
printf( " \t\t\t >>> MODO DE PREPARO CADASTRADO COM SUCESSO!!!       \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
return aln;
getchar();
}

void gravaReceita(Ingremodo* aln){
  FILE* fp;
  fp = fopen("receita.txt", "at");
  if(fp == NULL){
    printf("OPS! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possivel continuar este programa...\n");
    exit(1);
  }
  fprintf(fp,"ID da Receita: %s\n",aln->id_receita);
  fprintf(fp,"Ingredientes: %s\n",aln->ingrediente);
  fprintf(fp,"Modo de Preparo: %s\n",aln->modo);
  fclose(fp);
}


// AREA DO READ
Ingremodo* buscaReceita(void){
  FILE* fp;
  Ingremodo* aln;
  char id[4];
  int retorno;
  int validadorID;
  char lixo[20];
  system ("clear||cls ");
  printf("|-=-=-=    VERIFICAR INGREDIENTES DE MODO DE PREPARO    -=-=|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|PESQUISE PELOS INGREDIENTES E MODO DE PREPARO DESEJADO E   |\n");
  printf("|VEJA SE OS MESMOS ESTAO DISPONIVEIS!                       |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
  printf("|                                                           |\n");
do{
printf("DIGITE O ID DA RECEITA QUE DESEJA VERIFICAR:                   \n");
scanf("%3[^\n]", id);
validadorID = validarID(id);
} while(validadorID == 0);

aln = (Ingremodo*) malloc(sizeof(Ingremodo));
fp = fopen("receita.txt", "ra");
if (fp == NULL){
  printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
  printf("Não é possível continuar este programa...\n");
  exit(1);
  }

while(!feof(fp)) {
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->id_receita);
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->ingrediente);
    fscanf(fp,"%[^:] %c %s",lixo,lixo, aln->modo);
    retorno = strcmp(id,aln->id_receita);
    if (retorno == 0) {
      fclose(fp);
      return aln;
    }
  }
  fclose(fp);
  return NULL;
}

void exibeReceita(Ingremodo* al) {
  if (al == NULL) {
    printf("\n= = = Receita Inexistente = = =\n");
    getchar();
  } else {
    printf("\n= = = Receita Cadastrada = = =\n");
    printf("ID da receita: %s\n", al->id_receita);
    printf("Ingredientes: %s\n", al->ingrediente);
    printf("Modo de preparo: %s\n", al->modo);
    getchar();
  }
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



