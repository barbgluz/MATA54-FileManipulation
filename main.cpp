#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "file.h"

using namespace std;

int main(int argc, char const *argv[])
{
	Person person;
	vector<Person> people;
	char command;
	
	scanf("%c", &command);

  	switch(command) {
  		case 'i':
  			save();
  			break;
  		case 'c':
  			person = get();  			
  			printf("chave: %i %s %i", person.key, person.name.c_str(), person.age );
  			break;
  		case 'r':
  			remove();
  			break;
  		case 'p':
  			people = getAll();
  			break;
  		case 'e':
  			exit(EXIT_SUCCESS);
  			break;
  		default:
  			exit(EXIT_FAILURE);
  	}

}