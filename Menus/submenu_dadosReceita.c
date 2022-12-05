// MENU INGREDIENTES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Assinaturas/assin_dadosReceita.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"

void moduloDados(void){
    char escolha;
    Dados* fulano;

    do {
        escolha = tela_submenu_dados();
        switch(escolha) {
            case '1':   fulano = preencheDados();
                        gravaDados(fulano);
                        free(fulano);
                        break;
            case '2':   fulano = buscaDados();
                        exibeDados(fulano);
                        free(fulano);
                        break;
            case '3':   editarDados();
                        break;
            case '4':   removerDados();
                        break;
            
        } 	
    } while (escolha != '0');
}


char tela_submenu_dados(void){
char opcao;
system("clear||cls ");
printf("|-=-=-=-        MENU DE INFORMACOES DA RECEITA     -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) ADICIONAR DADOS DA RECEITA-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(2) VERIFICAR DADOS DA RECEITA-=-=-=-==-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR DADOS DA RECEITA-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR DADOS DA RECEITA -=-=-=-==-=-=-|\n");
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
Dados* preencheDados(void){
Dados* aln;
aln =(Dados*)malloc(sizeof(Dados));
int validadorNome;
int validadorID_chefe;
int validadorID_receita;
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR DADOS DA RECEITA      -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS DADOS NECESSARIOS PARA ELABORAR SUA RECEITA    |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU DADOS-=-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
do{
printf("DIGITE O ID DO CHEFE:                                        \n");
scanf(" %3[^\n]", aln->id_chefe);
getchar();
validadorID_chefe = validarID(aln->id_chefe);
} while(validadorID_chefe == 0);

do{
printf("DIGITE O ID DA RECEITA:                                        \n");
scanf(" %3[^\n]", aln->id_receita);
getchar();
validadorID_receita = validarID(aln->id_receita);
} while(validadorID_receita == 0);

do{
printf("DIGITE O NOME DA RECEITA:                                      \n");
scanf("%49[^\n]", aln->nome_receita);
getchar();
validadorNome = validarNome(aln->nome_receita); 
} while(validadorNome == 0);

printf("QUAL SERA O TEMPO DE PREPARO DA RECEITA:                       \n");
scanf(" %9[^\n]", aln->tempo_preparo);
getchar();

printf("DIGITE O NIVEL DE DIFICULDADE DA RECEITA :                    \n");
scanf(" %24[^\n]", aln->nivel_dif);
getchar();

printf("DIGITE A QUANTIDADE DE PORCOES DO PRATO:                      \n");
scanf(" %3[^\n]", aln->porcoes);
getchar();

printf("DIGITE C(CAFE DA MANHA, A(ALMOCO) S(SOBREMESA) OU J(JANTA):   \n");
scanf("%c", &aln->opcao);
getchar();
printf( " \t\t\t >>> INGREDIENTES CADASTRADOS COM SUCESSO!!!         \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
aln->status = 'C';
return aln;
getchar();
}

void gravaDados(Dados* aln){
  FILE* fp;
  fp = fopen("dados.dat", "ab");
  if(fp == NULL){
    printf("OPS! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possivel continuar este programa...\n");
    exit(1);
  }
  fwrite(aln, sizeof(Dados), 1, fp);
  fclose(fp);
}


// AREA DO READ
Dados* buscaDados(void){
  FILE* fp;
  Dados* aln;
  char id[4];
  int retorno;
  int validadorID_receita;
  system ("clear||cls ");
  printf("|-=-=-=          VERIFICACAO DE DADOS DA RECEITA   -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|PESQUISE PELOS DADOS DESEJADO E VEJA SE OS MESMOS ESTAO    |\n");
  printf("|DISPONIVEL!                                                |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU DADOS-=-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  printf("Informe o ID da Receita: ");
  do{
  scanf("%3[^\n]",id);
  validadorID_receita = validarID(id);
} while(validadorID_receita == 0);

  aln = (Dados*) malloc(sizeof(Dados));
  fp = fopen("dados.dat", "rb");
  if (fp == NULL){
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  while(!feof(fp)) {
    fread(aln, sizeof(Dados), 1, fp);
    retorno = strcmp(id,aln->id_receita);
    if ((retorno == 0) && (aln->status != 'x')) {
      fclose(fp);
      return aln;
    }
}
  fclose(fp);
  return NULL;
  }

void exibeDados(Dados* al) {
  if ((al == NULL) || (al->status == 'x')) {
    printf("\n= = = Receita Inexistente = = =\n");
    getchar();
  } else {
    printf("\n= = = Receita Verificada = = =\n");
    printf("ID da receita: %s\n", al->id_receita);
    printf("ID do Chefe: %s\n", al->id_chefe);
    printf("Nome da Receita: %s\n", al->nome_receita);
    printf("Tempo de Preparo da Receita:  %s\n", al->tempo_preparo);
    printf("Nivel de Dificuldade da Receita:  %s\n", al->nivel_dif);
    printf("Quantas Porcoes a Receita Possui:  %s\n", al->porcoes);
    printf("C(CAFE DA MANHA, A(ALMOCO) S(SOBREMESA) OU J(JANTA):  %c\n", al->opcao);
    getchar();
  }
  getchar();
}


// AREA DO UPDATE
void editarDados(void) {
  FILE* fp;
  Dados* aln;
  int achou;
  char resp;
  char pesquisa[4];
  int validadorID;
  int validadorNome;
  fp = fopen("dados.dat", "r+b");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar o programa...\n");
    exit(1);
  }
  system ("clear||cls ");
  printf("|-=-=-=-             EDITAR DADOS DA RECEITA       -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR DADOS DA RECEITA    |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-=(0) VOLTAR AO MENU DADOS-=-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  do{
  printf("|DIGITE O ID DA RECEITA QUE SERA EDITADO:                     |\n");
  scanf(" %3[^\n]", pesquisa);
  validadorID = validarID(pesquisa);
  } while(validadorID == 0);
  aln = (Dados*) malloc(sizeof(Dados));
  achou = 0;
  while((!achou) && (fread(aln, sizeof(Dados), 1, fp))) {
   if ((strcmp(aln->id_receita, pesquisa) == 0) && (aln->status == 'C')) {
     achou = 1;
   }
  }
  if (achou) {
    exibeDados(aln);
    printf("Deseja realmente editar esta receita(S/N)? ");
    scanf("%c", &resp);
    getchar();
    if (resp == 's' || resp == 'S') {      
      do{
      printf("Informe o nome da receita: ");
      scanf("%49[^\n]", aln->nome_receita);
      getchar();
      validadorNome = validarNome(aln->nome_receita); 
      } while(validadorNome == 0);

      printf("Informe o tempo de preparo da receita: ");
      scanf(" %9[^\n]", aln->tempo_preparo);
      getchar(); 
      
      printf("Informe o nivel de dificuldade da receita: ");
      scanf(" %24[^\n]", aln->nivel_dif);
      getchar();

      printf("Informe a quantidade de porcoes no prato: ");
      scanf(" %3[^\n]", aln->porcoes);
      getchar();

      printf("Informe C(cafe da manha), A(almoco) S(sobremesa) OU J(janta): ");
      scanf("%c", &aln->opcao);
      getchar();
      aln->status = 'C';
      fseek(fp, (-1)*sizeof(Dados), SEEK_CUR);
      fwrite(aln, sizeof(Dados), 1, fp);
      printf( " \t\t\t >>> RECEITA EDITADA COM SUCESSO!!!                  \n");
      printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
      getchar();
    } else {
      printf("\nOk, os dados não foram alterados\n");
      getchar();
    }
  } else {
    printf("O ID da receita: %s não foi encontrado...\n", pesquisa);
  }
  free(aln);
  fclose(fp);
}


// AREA DO DELETE
void removerDados(void){
  FILE* fp;
  Dados* aln;
  int validadorID;
  int achou;
  char resposta;
  char pesquisa[4];
  fp = fopen("dados.dat","r+b");
  if (fp==NULL){
    printf("\nOps!Ocorreu um erro ao tentar abrir o arquivo!\nTente rodar o programa novamente...\n");
    exit(1);
  }
  system ("clear||cls ");
  printf("|-=-=-=-           EXCLUIR DADOS DA RECEITA        -=-=-=-=-|\n");
  printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
  printf("|EXCLUA OS DADOS DESNECESSARIOS DA RECEITA.                 |\n");
  printf("|                                                           |\n");
  printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU DADOS-=-=-=-=-=-=-=-=-|\n");
  printf("|                                                           |\n");
  do{
  printf("|DIGITE O ID DA RECEITA QUE SERA EXCLUIDO:                    |\n");
  scanf("%3[^\n]",pesquisa);
  validadorID = validarID(pesquisa);
  } while(validadorID == 0);
  aln = (Dados*) malloc(sizeof(Dados));
  achou = 0;
  while ((!achou)&&(fread(aln,sizeof(Dados),1,fp))){
    if((strcmp(aln->id_receita,pesquisa)==0)&&(aln->status=='C')){
      achou = 1;
    }
  }
  if (achou){
    exibeDados(aln);
    printf("Quer realmente deletar essa receita (S/N)? ");
    scanf("%c",&resposta);
    getchar();
    if(resposta == 's' || resposta == 'S'){
      aln -> status = 'x';
      fseek(fp,(-1)*sizeof(Dados),SEEK_CUR);
      fwrite(aln,sizeof(Dados),1,fp);
      printf( " \t\t\t >>> RECEITA DELETADA COM SUCESSO!!!                  \n");
      printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
      getchar();
    }else{
      printf( " \t\t\t >>> RECEITA PERMANECE CADASTRADA!!!                  \n");
      printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
      getchar();
    }
  }else{
    printf("\nO Receita %s encontra-se inexistente...",pesquisa);
  }
  free(aln);
  fclose(fp);
}
