#include <stdio.h>
#include "file.h"

using namespace std;

int main(int argc, char const *argv[])
{
	char command;
	
	scanf("%c", &command);

  	switch(command) {
  		case 'i':
  			save();
  			break;
  		case 'c':
  			consult();
  			break;
  		case 'r':
  			remove();
  			break;
  		case 'p':
  			printAll();
  			break;
  		default:
  			return 0;
  	}

}