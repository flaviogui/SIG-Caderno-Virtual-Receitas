#include <stdio.h>
#include  <stdlib.h>
#include "../Assinaturas/assin_ingredientes.h"
#include "../Assinaturas/assin_modopreparo.h"
#include "../Assinaturas/menus.h"

void moduloReceita(void){
    char escolha;

    do {
        escolha = tela_receitas();
        switch(escolha) {
            case '1':   moduloIngredientes();
                        break;
            case '2':   modoPreparo();
                        break;
            
        } 	
    } while (escolha != '0');


}

char tela_receitas(void){
char opcao;
system ("clear||cls ");
printf("|-=-=-=-           BEM VINDO A TELA RECEITA        -=-=-=-=-|\n");
printf("|-=-=-=-=-=-(1) ADICIONE DADOS DA RECEITA E INGREDIENTES-=-=|\n");
printf("|-=-=-=-=-=-(2) ADICIONE O MODO DE PREPARO-=-==-=-=--==--=-=|\n");
printf("|                                                           |\n");
printf("|-=-=-=-=-=-=-=-=(0) VOLTA AO MENU INICIAL -=-=-=-=-=-=-=-=-|\n");
printf("|___________________________________________________________|\n");
printf("|Escolha uma opcao:                                         |\n");
scanf ("%c", &opcao); 
getchar();
printf( " \t\t\t >>> Tecle <ENTER> para continuar...                 \n");
getchar();
return opcao; 
}