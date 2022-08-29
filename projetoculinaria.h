#include <stdio.h>

void tela_principal(void);
void tela_sobre(void);


int main(void){
    tela_principal();
    tela_sobre();
    
    return 0;    
}

void tela_principal(void){
printf("|-=-=-=-BEM VINDO AO CADERNO ELETRONICO DE RECEITAS-=-=-=-=-|\n");
printf("|-=-=-=-=-=--=-=-=-(1) MENU ALIMENTOS-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(2) MENU RECEITAS-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(3) MENU SOBRE-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
printf("|-=-=-=-=-=-=-=-=-=(4) MENU EQUIPE-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(5) MENU RELATORIOS-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|-=-=-=-=-=-=-=-=-=(6) SAIR -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
printf("|___________________________________________________________|\n");
}




void tela_sobre(void) {
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("| -=- -=- =-= -=-   INFORMAÇÃO DO PROJETO   -=- -=- -=- -=-   |\n");
printf("|-------- CADERNO VIRTUAL DE RECEITAS CULINARIAS -----------  |\n");
printf("|                                                             |\n");
printf("|   Este é um programa desenvolvido para fábricas de produtos |\n");
printf("|restaurantes, lanchonetes, padarias, ou até mesmo usuários   |\n");
printf("|domésticos necessitam de receitas para conduzir a preparação |\n");
printf("|assim, o presente projeto propõe um sistema capaz de gerencia|\n"); 
printf("|um conjunto de receitas culinárias, permitindo a busca por   |\n");
printf("|pratos que contenham determinados ingredientes e a respectiva|\n");
printf("|otimização dos estoques.                                      |\n");                       

}
