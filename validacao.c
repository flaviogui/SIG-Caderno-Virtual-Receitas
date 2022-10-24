// BIBLIOTECA DE VALIDAÇÕES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacao.h"

// VALIDAR NÚMERO DE TELEFONE
// CÓDIGO MODIFICADO DO PROFESSOR FLAVIUS GORGONIO
int eiNumero(char n) {
    if (n >= '0' && n <= '9') {
        return 1;
    } else {
        return 0;
    }
}

int validarCel(char* cel) {
    int tamanho;
    tamanho = strlen(cel);
    if (tamanho != 11) {
        return 0;
    }
    for (int i = 0; i < tamanho; i++) {
        if (!eiNumero(cel[i])) {
            return 0;
        }
    }
    return 1;
}

// VALIDAR NOME
// CÓDIGO MODIFICADO DO COLEGA ISAYAN
int validarNome(char* name){
    char letras[] = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZÁÉÍÓÚÂÊÔÇÀÃÕ.záéíóúâêôçàãõ";
    int tam  = strlen(name);
    int l;
    int tamletras = strlen(letras);
    for(int x = 0;x < tam;x++){
        l = 0;
        for(int y = 0;y < tamletras;y++){
            if(name[x] == letras[y]){
                l++;
            }
        }
        if(l < 1){
                return 0;
        }
    }
    return 1;
}

// VALIDAR ID DO CHEFE
int validarID(char* ID) {
    int t;
    t = strlen(ID);
    if (t != 3) {
        return 0;
    }
    for (int i = 0; i < t; i++) {
        if (!eiNumero(ID[i])) {
            return 0;
        }
    }
    return 1;
}