// VERSÃO 2 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_infor(void);

void tela_menu_alimento(void);
void verificar_alimento(void);
void cadastrar_alimento(void);
void excluir_alimento(void);
void relatorio_alimentos(void);


int main(void){
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_infor();
    
    tela_menu_alimento();
    verificar_alimento();
    cadastrar_alimento();
    excluir_alimento();
    relatorio_alimentos();
    
    return 0;    
}

void tela_principal(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-BEM VINDO AO CADERNO ELETRONICO DE RECEITAS-=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) MENU ALIMENTOS-=-=-=-=-=-=-=-=-=-=-=-|\n");
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
printf("|assim, o presente projeto propõe um sistema capaz de gerencia|\n"); 
printf("|um conjunto de receitas culinarias, permitindo a busca por   |\n");
printf("|pratos que contenham determinados ingredientes e a respectiva|\n");
printf("|otimização dos estoques.                                     |\n");
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
printf("| =-= Somos alunos do curso de Sistema de Informação - UFRN  |\n");
printf("| -=- DATA DO INICIO DO PROJETO: 29/08/2022 -=-              |\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
getchar(); 

}

void tela_infor(void) {
system ("clear||cls ");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("| -=- -=- -=-     INFORMAÇÕES SOBRE CADA MENU     -=- -=- -=-|\n");
printf("| MENU ALIMENTOS - Onde podemos ver alimentos disponiveis    |\n");
printf("| RECEITAS - Podemos ver ou cadastrar novas receitas         |\n");
printf("| CHEFE - Ambiente destinado apenas ao chefe de cozinha      |\n");
printf("| ESTOQUE - Sempre bom verificar o que ainda tem né          |\n");
printf("| RELATORIO - Aqui fica tudo registradinho                   |\n");
printf("| SAIR - Hum, cheirinho de comida pronta                     |\n");
printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                  \n");
getchar(); 
}

void tela_menu_alimento(void){
system ("clear||cls ");
printf("|-=-=-=-             MENU ALIMENTO                 -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) VERIFICAR ALIMENTOS-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(2) ADICIONAR ALIMENTO-=-=-=-=-=-=-=-==-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(3) EXCLUIR ALIMENTO-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(4) LISTA DE ALIMENTOS-=-=-=-==-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU INICIAL -=-=-=-=-=-=-=|\n");
printf("|___________________________________________________________|\n");
printf("Escolha uma opção: \n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void verificar_alimento(void){
system ("clear||cls ");
printf("|-=-=-=          VERIFICAÇÃO DE ALIMENTO           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELO ALIMENTO DESEJADO E VEJA SE O MESMO ESTA     |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|DIGITE O NOME DO ALIMENTO:                                 |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void cadastrar_alimento(void){
system ("clear||cls ");
printf("|-=-=-=-           CADASTRAR ALIMENTO              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|ADICIONE OS ALIMENTOS NECESSARIOS PARA ELABORAR SUA RECEITA|\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA ADICIONADO:             |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_alimento(void){
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR ALIMENTO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA EXCLUIDO:               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void relatorio_alimentos(void){
system ("clear||cls ");
printf("|-=-=-=-     RELATORIO DE TODOS OS ALIMENTOS       -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA MOSTRADO TODOS OS ALIMENTOS CADASTRADOS COM O    |\n");
printf("|OBJETIVO DE FACILITAR A SUA VIDA.                          |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
