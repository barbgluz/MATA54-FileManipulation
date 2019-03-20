typedef struct person {
	unsigned int key;
	char name[21];
	unsigned int age;
} Person;

/*
 * Função save:
 * Salva um registro na chave indicada 
 *
 * */

void save();

/*
 * Função remove:
 * Remove um registro na chave indicada 
 *
 * */
void remove();

/*
 * Função get:
 * Retorna um registro na chave indicada
 *
 * */
Person get();

/*
 * Função getAll:
 * Retorna todos os registro salvos no arquivo
 *
 * */
void getAll();