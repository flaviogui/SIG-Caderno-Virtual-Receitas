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


