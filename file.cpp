#include <stdio.h>
#include "file.h"
using namespace std;

void save() {
	bool keyAlreadyExists = false;
	Person oldPerson;
	Person newPerson;
	FILE *file;

	scanf("%i %20s %i", &newPerson.key, newPerson.name, &newPerson.age);

	file = fopen("file.txt", "a+b");
	fseek(file, 0 * sizeof(Person), SEEK_SET);

	while(fread(&oldPerson, sizeof(Person), 1, file)) {
		if(oldPerson.key == newPerson.key) {
			keyAlreadyExists = true;
			break;
		}
	}

	if(keyAlreadyExists) {
		printf("registro com chave existente");
	} else {
		fwrite(&newPerson, sizeof(Person), 1, file); 
	}

	fclose(file);
}

void remove() {

}

Person get() {
	int key;
	Person person;
	FILE *file;
	scanf("%i", &key);

	file = fopen("file.txt", "rb");
	
	fseek(file, 0 * sizeof(Person), SEEK_SET);
	fread(&person, sizeof(Person), 1, file);
	fclose(file);

	return person;
}

void getAll() {
	
}