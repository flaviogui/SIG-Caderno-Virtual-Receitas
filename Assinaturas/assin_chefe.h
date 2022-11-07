void moduloChefe(void);
void cadastrar_chefe(void);
void verificar_chefe(void);
void editar_chefe(void);
void excluir_chefe(void);

struct chefe
{
   long int id_chefe;
   char nome[50];
   char email[40];
   char cel[12];
   char status;
};

typedef struct chefe Chefe;

int menuPrincipal(void);
Chefe* preencheChefe(void);
void gravaChefe(Chefe*);
void exibeChefe (Chefe*);
Chefe* buscaChefe(void);
