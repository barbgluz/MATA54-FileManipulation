#include "file.h"

void save() {

}

void remove() {

}

Person get() {
	person a;
	a.key = 1;
	a.name = "Mateus";

	return a;
}

std::vector<Person> getAll() {
	std::vector<Person> people;
	Person a;
	a.key = 1;
	a.name = "Mateus";

	people.push_back(a);

	return people;
}