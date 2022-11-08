// MENU CHEFE
#include <stdio.h>
#include  <stdlib.h>
#include <string.h>
#include "../Assinaturas/assin_chefe.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"


void moduloChefe(void){
    char escolha;
    Chefe* fulano;

    do {
        escolha = tela_menu_chefe();
        switch(escolha) {
            case '1':   fulano = preencheChefe();
                        gravaChefe(fulano);
                        free(fulano);
                        break;
            case '2':   fulano = buscaChefe();
                        exibeChefe(fulano);
                        free(fulano);
                        break;
            case '3':   editar_chefe();
                        break;
            case '4':   excluir_chefe();
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

// AREA DE CREATE 
Chefe* preencheChefe(void){
Chefe* aln;
aln =(Chefe*)malloc(sizeof(Chefe));

int validadorNome;
int validadorEmail;
int validadorTelefone;
int validadorID;
system ("clear||cls ");
printf("|-=-=-=-               CADASTRAR CHEFE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE AQUI O CHEFE(USUARIO) RESPONSAVEL PELA ELABORACAO |\n");
printf("|DA(S) RECEITA(S) CULINARIAS.                               |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");

do{
printf("DIGITE O ID DO CHEFE:                                        \n");
scanf(" %3[^\n]", aln->id_chefe);
getchar();
validadorID = validarID(aln->id_chefe);
} while(validadorID == 0);

do{
printf("DIGITE O NOME DO CHEFE:                                      \n");
scanf("%49[^\n]", aln->nome);
getchar();
validadorNome = validarNome(aln->nome); 
} while(validadorNome == 0);

do{
printf("DIGITE O EMAIL DO CHEFE:                                     \n");
scanf(" %39[^\n]", aln->email);
getchar(); 
validadorEmail = validarEmail(aln->email);
} while(validadorEmail == 0);

do{
printf("DIGITE O TELEFONE DO CHEFE:                                  \n");
scanf(" %11[^\n]", aln->cel);
getchar();
validadorTelefone = validarCel(aln->cel);
} while(validadorTelefone == 0);


getchar();
printf( " \t\t\t >>> CHEFE CADASTRADO COM SUCESSO!!!                \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
aln->status = 'm';
return aln;
getchar(); 
}

void gravaChefe(Chefe* aln){
  FILE* fp;
  fp = fopen("chefe.dat", "ab");
  if(fp == NULL){
    printf("OPS! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possivel continuar este programa...\n");
    exit(1);
  }
  fwrite(aln, sizeof(Chefe), 1, fp);
  fclose(fp);
}

Chefe* buscaChefe(void){
  FILE* fp;
  Chefe* aln;
  char id[4];
  int retorno;
  printf("\n = Bascar Chefe = \n");
  printf("Informe o ID do Chefe: ");
  scanf("%s",id);
  aln = (Chefe*) malloc(sizeof(Chefe));
  fp = fopen("chefe.dat", "rb");
  if (fp == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  retorno = strcmp(id,aln->id_chefe);
  while(!feof(fp)) {
    fread(aln, sizeof(Chefe), 1, fp);

    if ((retorno == 0) && (aln->status != 'x')) {
      fclose(fp);
      return aln;
    }
}
  fclose(fp);
  return NULL;
  }

void exibeChefe(Chefe* al) {
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n= = = Chefe Inexistente = = =\n");
  } else {
    printf("\n= = = Chefe Cadastrado = = =\n");
    printf("ID: %s\n", al->id_chefe);
    printf("Nome do Chefe: %s\n", al->nome);
    printf("Endereço eletrônico: %s\n", al->email);
    printf("Telefone: %s\n", al->cel);
  }
}


// AREA DO READ
void verificar_chefe(void){
char id_chefe[4];
int validadorID;
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE CHEFE              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO CHEFE DESEJADA E VEJA SE O MESMO ESTA        |\n");
printf("|CADASTRADO!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");

do{
printf("|DIGITE O ID DO CHEFE QUE DESEJA VERIFICAR:                 |\n");
scanf("%s", id_chefe);
validadorID = validarID(id_chefe);
} while(validadorID == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO UPDATE
void editar_chefe(void){
char id_chefe[4];
int validadorID;
system ("clear||cls ");
printf("|-=-=-=-           EDITAR INFORMACOES DO CHEFE     -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR INFORMACOES DO CHEFE             |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");

do{
printf("|DIGITE O ID DO CHEFE QUE SERA EDITADO:                     |\n");
scanf("%s", id_chefe);
validadorID = validarID(id_chefe);
} while(validadorID == 0);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// AREA DO DELETE
void excluir_chefe(void){
char id_chefe[4];
int validadorID;
system ("clear||cls ");
printf("|-=-=-=-              EXCLUIR CHEFE                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI TODAS AS INFORMACOES DO CHEFE QUE DESEJAR      |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
do{
printf("|DIGITE O ID DO CHEFE QUE SERA EXCLUIDO:                    |\n");
scanf("%s", id_chefe);
validadorID = validarID(id_chefe);
} while(validadorID == 0);
getchar();
printf( " \t\t\t >>> CHEFE EXCLUIDO COM SUCESSO!!!                \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
