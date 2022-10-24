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
