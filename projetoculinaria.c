// VERSÃO 2 DO PROJETO
#include <stdio.h>
#include  <stdlib.h>

void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_infor(void);

void tela_menu_ingredientes(void);
void verificar_alimento(void);
void cadastrar_alimento(void);
void editar_alimentos(void);
void excluir_alimento(void);

void tela_menu_receitas(void);
void verificar_receita(void);



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
char nome_alimento4[20];
system ("clear||cls ");
printf("|-=-=-=-              EDITAR ALIMENTO              -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|AQUI SERA POSSIVEL EDITAR OU MODIFICAR INGREDIENTES        |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO INGREDIENTE QUE SERA MODIFICADO:          |\n");
scanf("%s", &nome_alimento4);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}

void excluir_alimento(void){
char nome_alimento3[20];
system ("clear||cls ");
printf("|-=-=-=-           EXCLUIR ALIMENTO                -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|EXCLUA OS ALIMENTOS DESNECESSARIOS DA LISTA.               |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O NOME DO ALIMENTO QUE SERA EXCLUIDO:               |\n");
scanf("%s", &nome_alimento3);
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
char nome_receitas1[20];
system ("clear||cls ");
printf("|-=-=-=          VERIFICACAO DE RECEITAS           -=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|PESQUISE PELA RECEITA DESEJADA E VEJA SE O MESMO ESTA      |\n");
printf("|DISPONIVEL!                                                |\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=-=(5) VOLTAR AO MENU ALIMENTO-=-=-=-=-=-=-=|\n");
printf("|                                                           |\n");
printf("|DIGITE O CODIGO DA RECEITA QUE DESEJA VERIFICAR:           |\n");
scanf("%s", &nome_receitas1);
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar(); 
}
