void modoPreparo(void);

struct ingremodo
{
   char id_receita[4];
   char ingrediente[400];
   char modo[1000];
   int status;
};

typedef struct ingremodo Ingremodo;
Ingremodo* preencheReceita(void);
void gravaReceita(Ingremodo*);
void exibeReceita (Ingremodo*);
Ingremodo* buscaReceita(void);

