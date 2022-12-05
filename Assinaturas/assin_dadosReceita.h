void moduloDados(void);


struct dados
{
   char id_chefe[4];
   char id_receita[4];
   char nome_receita[50];
   char tempo_preparo[10];
   char nivel_dif[25];
   char porcoes[4];
   char opcao;
   char status;
};

typedef struct dados Dados;

Dados* preencheDados(void);
void gravaDados(Dados*);
void exibeDados (Dados*);
Dados* buscaDados (void);
void editarDados(void);
void removerDados(void);