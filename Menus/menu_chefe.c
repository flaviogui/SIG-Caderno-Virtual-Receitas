// MENU CHEFE
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_chefe.h"
#include "../Assinaturas/menus.h"
#include "../validacao.h"


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
           
        } 	
    } while (escolha != '0');


}
struct tipo_chefe
{
   char id[4];
   char nome[50];
   char email[40];
   char cel[12];
};
struct tipo_chefe Tipo_chefe;


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
void cadastrar_chefe(void){

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
printf("DIGITE O NOME DO CHEFE:                                      \n");
fgets(Tipo_chefe.nome,50,stdin);
validadorNome = validarNome(Tipo_chefe.nome); 
} while(validadorNome == 0);

do{
printf("DIGITE O EMAIL DO CHEFE:                                     \n");
fgets(Tipo_chefe.email,40,stdin);
validadorEmail = validarEmail(Tipo_chefe.email);
} while(validadorEmail == 0);

do{
printf("DIGITE O TELEFONE DO CHEFE:                                  \n");
fgets(Tipo_chefe.cel,12,stdin);
validadorTelefone = validarCel(Tipo_chefe.cel);
} while(validadorTelefone == 0);

do{
printf("DIGITE O ID DO CHEFE:                                        \n");
fgets(Tipo_chefe.id,12,stdin);
validadorID = validarID(Tipo_chefe.id);
} while(validadorID == 0);
getchar();
printf( " \t\t\t >>> CHEFE CADASTRADO COM SUCESSO!!!                \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
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
