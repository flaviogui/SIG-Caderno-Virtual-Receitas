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

// VALIDAR EMAIL
int validarEmail(char* email){
  // Função criada por Anderson Azevedo da Silva
  // Instagram: @anderson.azvd
  // GitHub: @andersonazeved

  // Verifica a quantidade de @
  int qunt_aroba = 0;
  for(int i = 0; email[i] == '@'; i++){
      qunt_aroba++;
  }
  if(qunt_aroba > 1){
      return 0;
  }
  // Tamanho do email e verifica se as primeiras e últimas posições, começam com @, pontos ou espaços
  int tamanho = strlen(email);
  if(email[0] == '@' || email[tamanho-1] == '@' || email[0] == '.' || email[tamanho-1] == '.' || email[0] == ' ' || email[tamanho-1] == ' '){
      return 0;
  }
  // No email são aceitos apenas pontos, @, letras e números
  for(int i = 0; i < tamanho; i++){
      if(!((email[i] >= 'A' && email[i] <= 'Z') || (email[i] >= 'a' && email[i] <= 'z') 
          || (email[i] >= '0' && email[i] <= '9') || (email[i] == '.') || (email[i] == '@')))
          return 0;
  }
  // Verifica se a posição atual e a próxima, são pontos
  for(int i = 0; i < tamanho; i++){
      if(email[i] == '.' && email[i+1] == '.'){
          return 0;
      }
  }
  // Verifica a posição do @
  int aroba = 0;
  for(int i = 0; email[i] != '@'; i++){
      aroba++;
  }
  // Verifica a quantidade de caracteres do usuário
  int num_usuario = 0;
  for(int i = 0; i < aroba; i++){
      num_usuario++;
  }
  if(num_usuario < 1){
      return 0;
  }
  // Verifica a quantidade de caracteres do domínio
  int num_dominio = 0;
  int pontos = 0;
  for(int i = aroba+1; i < tamanho; i++){
      if(email[i] >= '0' && email[i] <= '9'){
          return 0;
      }else if(email[i] == '.'){
          pontos++;
      }
      num_dominio++;
  }
  if(num_dominio < 3 || pontos < 1){
      return 0;
  }
  // Verifica se o email possue espaço
  for(int i = 0; i < tamanho; i++){
      if(email[i] == ' '){
          return 0;
      }
  }
  // Verifica se na posição inicial, final, antes e depois do @, é letra
  if(!(((email[0] >= 'A' && email[0] <= 'Z') || (email[0] >= 'a' && email[0] <= 'z'))
      || ((email[tamanho] >= 'A' && email[tamanho] <= 'Z') || (email[tamanho] >= 'a' && email[tamanho] <= 'z'))
          || ((email[aroba-1] >= 'A' && email[aroba-1] <= 'Z') || (email[aroba-1] >= 'a' && email[aroba-1] <= 'z'))
              || ((email[aroba+1] >= 'A' && email[aroba+1] <= 'Z') || (email[aroba+1] >= 'a' && email[aroba+1] <= 'z')))){
    return 0;
 }
 return 1;
}