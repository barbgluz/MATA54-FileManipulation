#include <stdio.h>
#include "file.h"
using namespace std;

void save() { // faltando verificar "registro com chaveexistente"
	int key;
	char name[21];
	int age;
	Person person;
	FILE *file;

	scanf("%i", &key);
	scanf("%20s", name);
	scanf("%i", &age);

	person.key = key;
	person.name = name;
	person.age = age;

	file = fopen("file.txt", "ab");
	fwrite(&person, sizeof(Person), 1, file); 
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
	//fseek(file, 1 * sizeof(Person), SEEK_SET);
	fread(&person, sizeof(Person), 1, file);
	fclose(file);

	return person;
}

vector<Person> getAll() {
	vector<Person> people;
	Person person;
	person.key = 1;
	person.name = "Mateus";
	person.age = 21;

	people.push_back(person);

	return people;
}