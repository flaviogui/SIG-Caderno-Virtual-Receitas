// VERSÃO 4 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>


int main(void){
    tela_principal();
    
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
    
    tela_menu_cardapio();
    cafe();
    almoco();
    sobremesa();
    janta();

    tela_menu_relatorios();
    relatorio_ingredientes();
    relatorio_receitas();
    relatorio_chefe();

    tela_informacoes();
    tela_sobre();
    tela_equipe();
    tela_infor();
    

    return 0;    
}

void tela_principal(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-BEM VINDO AO CADERNO ELETRONICO DE RECEITAS-=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) MENU INGREDIENTES-=-=-==-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(2) MENU RECEITAS-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(3) MENU CHEFE-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(4) MENU CARDAPIO DIGITAL-=--=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(5) MENU RELATORIOS-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(6) INFORMACOES GERAIS-=-==-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(0) SAIR-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha a opcao desejada:                                  |\n");
scanf (" %c", &opcao);
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
printf("|Escolha uma opcao:                                         |\n");
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
printf("|Escolha uma opcao:                                         |\n");
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

// MENU CARDAPIO DIGITAL
void tela_menu_cardapio(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU CARDAPIO DIGITAL         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) CAFE DA MANHA-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(2) ALMOCO-=-=-=-=-=-=-=--=-=-=-==-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=(3) SOBREMESA-=-=-=-=--=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(4) JANTA-=-=-=-=-=-=-=--=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cafe(void){
system ("clear||cls ");
printf("|-=-=-=            HORA DO CAFE DA MANHA           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM LANCHE PARA O SEU |\n");
printf("|CAFE DA MANHA!                                             |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}


void almoco(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DO ALMOCO               -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
printf("|ALMOCO!                                                    |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void sobremesa(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DA SOBREMESA            -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM SOBREMESA!        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void janta(void){
system ("clear||cls ");
printf("|-=-=-=               HORA DA JANTA                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|VEJA AQUI NO CARDAPIO TODAS AS OPCOES EM COMIDA PARA O SEU |\n");
printf("|JANTA!                                                     |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// MENU RELATORIO
void tela_menu_relatorios(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-             MENU RELATORIO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) RELATORIO DE TODOS OS INGREDIENTES-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(2) RELATORIO DE TODAS AS RECEITAS-=-=-=-==|\n");
printf("|-=-=-=-=-=-=-=-=(3) RELATORIO DE TODOS OS CHEFES=-=-=-=-==-|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_ingredientes(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS INGREDIENTES   -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_receitas(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODAS AS RECEITAS       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_chefe(void){
system ("clear||cls ");
printf("|-=-=-=       RELATORIO DE TODOS OS CHEFES         -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-(5) VOLTAR AO MENU CARDAPIO-=-=-=-=-=-=-=-|\n");
printf("|                                                           |\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

// INFORMAÇÕES GERAIS
void tela_informacoes(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-      INFORMACOES GERAIS SOBRE O PROJETO   -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-(1) INFORMACOES DO PROJETO-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=(2) INFORMACOES DA EQUIPE-=-=-=-=--=-=-=-==|\n");
printf("|-=-=-=-=-=-=-=-=(3) INFORMACOES DE CADA MENU-=-==-=-=-=-==-|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(5) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         | \n");
scanf ("%c", &opcao);
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
printf("| MENU INGREDIENTES - Onde podemos ver alimentos disponiveis |\n");
printf("| RECEITAS - Podemos ver ou cadastrar novas receitas         |\n");
printf("| CHEFE - Ambiente destinado apenas ao chefe de cozinha      |\n");
printf("| CARDAPIO - Aqui voce fica sabendo de todos os pratos       |\n");
printf("| RELATORIO - Aqui fica tudo registradinho                   |\n");
printf("| SAIR - Hum, cheirinho de comida pronta                     |\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
getchar(); 
}


