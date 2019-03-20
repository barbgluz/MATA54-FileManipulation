#include <stdio.h>
#include "file.h"

void insert() {
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
		printf("registro com chave existente\n");
	} else {
		fwrite(&newPerson, sizeof(Person), 1, file); 
	}

	fclose(file);
}

void remove() {

}

void consult() {
	bool keyAlreadyExists = false;
	Person person;
	unsigned int key;
	FILE *file;

	scanf("%i", &key);

	file = fopen("file.txt", "rb");
	fseek(file, 0 * sizeof(Person), SEEK_SET);

	while(fread(&person, sizeof(Person), 1, file)) {
		if(person.key == key) {
			keyAlreadyExists = true;
			break;
		}
	}

	if(keyAlreadyExists) {
		printf("chave: %i %s %i\n", person.key, person.name, person.age);
	} else {
		printf("nao ha registro com chave: %i\n", key);
	}
	
	fclose(file);	
}

void printAll() {
	Person person;
	FILE *file;

	file = fopen("file.txt", "rb");
	fseek(file, 0 * sizeof(Person), SEEK_SET);

	while(fread(&person, sizeof(Person), 1, file)) {
		printf("chave: %i | nome: %s | idade: %i\n", person.key, person.name, person.age);
	}

	fclose(file);
}