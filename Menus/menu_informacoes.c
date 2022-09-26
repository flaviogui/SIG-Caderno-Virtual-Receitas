// INFORMAÇÕES GERAIS
#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_informacao.h"
#include "../Assinaturas/menus.h"

void moduloInformacao(void){
    char escolha;

    do {
        escolha = tela_informacoes();
        switch(escolha) {
            case '1':   tela_sobre();
                        break;
            case '2':   tela_equipe();
                        break;
            case '3':   tela_infor();
                        break;
            case '5':   tela_principal();
                        break;
        } 	
    } while (escolha != '0');


}

char tela_informacoes(void){
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
getchar(); 
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
return opcao; 
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


