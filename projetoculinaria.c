// VERSÃO 4 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_infor(void);

void tela_menu_ingredientes(void);
void verificar_alimento(void);
void cadastrar_alimento(void);
void editar_alimento(void);
void excluir_alimento(void);

void tela_menu_receitas(void);
void verificar_receitas(void);
void cadastrar_receitas(void);
void editar_receitas(void);
void excluir_receitas(void);

void tela_menu_chefe(void);
void cadastrar_chefe(void);
void verificar_chefe(void);
void editar_chefe(void);
void excluir_chefe(void);



int main(void){
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_infor();
    
    tela_menu_ingredientes();
    verificar_alimento();
    cadastrar_alimento();
    editar_alimento();
    excluir_alimento();

    tela_menu_receitas();
    verificar_receitas();
    cadastrar_receitas();
    editar_receitas();
    excluir_receitas();

    tela_menu_chefe();
    cadastrar_chefe();
    verificar_chefe();
    editar_chefe();
    excluir_chefe();
    
    return 0;    
}

void tela_principal(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-BEM VINDO AO CADERNO ELETRONICO DE RECEITAS-=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) MENU INGREDIENTES-=-=-==-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(2) MENU RECEITAS-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(3) MENU CHEFE-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(4) MENU ESTOQUE-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(5) MENU RELATORIOS-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(6) SAIR -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha a opcao desejada:                                  |\n");
scanf (" %c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
}


void tela_sobre(void) {
system ("clear||cls ");
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("| -=- -=- =-= -=-   INFORMACAO DO PROJETO   -=- -=- -=- -=-   |\n");
printf("|-------- CADERNO VIRTUAL DE RECEITAS CULINARIAS -----------  |\n");
printf("|                                                             |\n");
printf("|   Este e um programa desenvolvido para fabricas de produtos |\n");
printf("|restaurantes, lanchonetes, padarias, ou ate mesmo usuarios   |\n");
printf("|domesticos necessitam de receitas para conduzir a preparacao |\n");
printf("|assim, o presente projeto propoe um sistema capaz de gerencia|\n"); 
printf("|um conjunto de receitas culinarias, permitindo a busca por   |\n");
printf("|pratos que contenham determinados ingredientes e a respectiva|\n");
printf("|otimizacao dos estoques.                                     |\n");
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                   \n");
getchar();                       
}

void tela_equipe(void) {
system ("clear||cls ");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n"); 
printf("| -=- -=- =-=    INFORMACOES SOBRE A EQUIPE     -=- -=- -=-  |\n"); 
printf("| -=- FLAVIO GLAYDSON G. LOPES  ----- MATRICULA: 20220046917 |\n");
printf("| -=- MATHEUS QUIRINO F. FIQUEIREDO - MATRICULA: 20220061520 |\n");
printf("| =-= Somos alunos do curso de Sistema de Informacao - UFRN  |\n");
printf("| -=- DATA DO INICIO DO PROJETO: 29/08/2022 -=-              |\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
getchar(); 

}

void tela_infor(void) {
system ("clear||cls ");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("| -=- -=- -=-     INFORMACOES SOBRE CADA MENU     -=- -=- -=-|\n");
printf("| MENU ALIMENTOS - Onde podemos ver alimentos disponiveis    |\n");
printf("| RECEITAS - Podemos ver ou cadastrar novas receitas         |\n");
printf("| CHEFE - Ambiente destinado apenas ao chefe de cozinha      |\n");
printf("| ESTOQUE - Sempre bom verificar o que ainda tem ne          |\n");
printf("| RELATORIO - Aqui fica tudo registradinho                   |\n");
printf("| SAIR - Hum, cheirinho de comida pronta                     |\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
getchar(); 
}

// MENU INGREDIENTES
void tela_menu_ingredientes(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU INGREDIENTES             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) VERIFICAR INGREDIENTE-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ADICIONAR INGREDIENTE-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR INGREDIENTE-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR INGREDIENTE -=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("Escolha uma opcao:                                           \n");
scanf ("%c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_alimento(void){
char nome_alimento1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE ALIMENTO           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO ALIMENTO DESEJADO E VEJA SE O MESMO ESTA     |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE DESEJA VERIFICAR:            |\n");
scanf("%s", &nome_alimento1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cadastrar_alimento(void){
char nome_alimento2[20];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR ALIMENTO              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS ALIMENTOS NECESSARIOS PARA ELABORAR SUA RECEITA|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA ADICIONADO:             |\n");
scanf("%s", &nome_alimento2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_alimento(void){
char nome_alimento3[20];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR ALIMENTO              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR INGREDIENTES        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO INGREDIENTE QUE SERA MODIFICADO:          |\n");
scanf("%s", &nome_alimento3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_alimento(void){
char nome_alimento4[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR ALIMENTO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA EXCLUIDO:               |\n");
scanf("%s", &nome_alimento4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// MENU RECEITAS
void tela_menu_receitas(void){
char opcao2;
system ("clear||cls ");
printf("|-=-=-=-        MENU DE RECEITAS CULINARIAS        -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) VERIFICAR RECEITA-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ADICIONAR RECEITA-=-=-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR RECEITA-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR RECEITA-=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("Escolha uma opcao:                                           \n");
scanf ("%c", &opcao2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_receitas(void){
char codigo_receitas1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE RECEITAS           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELA RECEITA DESEJADA E VEJA SE O MESMO ESTA      |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE DESEJA VERIFICAR:           |\n");
scanf("%s", &codigo_receitas1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cadastrar_receitas(void){
char codigo_receitas2[60];
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR DE RECEITAS           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE A SUA NOVA RECEITA AQUI                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA NOVA RECEITA:                           |\n");
scanf("%s", &codigo_receitas2);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void editar_receitas(void){
char codigo_receitas3[60];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR RECEITA               -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR RECEITAS            |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EDITADA:               |\n");
scanf("%s", &codigo_receitas3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_receitas(void){
char codigo_receita4[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR RECEITAS                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA AQUI AS RECEITAS POR COMPLETO.                      |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU RECEITAS-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE SERA EXCLUIDA:              |\n");
scanf("%s", &codigo_receita4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// MENU CHEFE
void tela_menu_chefe(void){
char opcao3;
system ("clear||cls ");
printf("|-=-=-=-         MENU CHEFE DE COZINHA             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) CADASTRAR CHEFE  -=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) VERIFICAR CHEFE  -=-=-=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) EDITAR CHEFE  -=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) EXCLUIR CHEFE  -=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("Escolha uma opcao:                                           \n");
scanf ("%c", &opcao3);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cadastrar_chefe(void){
char nome_chefe[20];
system ("clear||cls ");
printf("|-=-=-=-               CADASTRAR CHEFE             -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|CADASTRE AQUI O CHEFE(USUARIO) RESPONSAVEL PELA ELABORACAO |\n");
printf("|DA(S) RECEITA(S) CULINARIAS.                               |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
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
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
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
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
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
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU CHEFE   -=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O EMAIL DO CHEFE QUE SERA EXCLUIDO:                 |\n");
scanf("%s", &email_chefe);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}