void moduloChefe(void);


struct chefe
{
   char id_chefe[4];
   char nome[50];
   char email[40];
   char cel[12];
   char status;
};

typedef struct chefe Chefe;

Chefe* preencheChefe(void);
void gravaChefe(Chefe*);
void exibeChefe (Chefe*);
Chefe* buscaChefe(void);
void removerChefe(void);
void editarChefe(void);
