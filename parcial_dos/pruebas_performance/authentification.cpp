#include <cstring>
#include <stdio.h>

int fun(char* pass);

int main(int argc, char** argv)
{

	if(fun(argv[1]))
	{

		printf("Accepted\n");

	}else{

		printf("Denied\n");

	}

}

int fun(char* pass)
{

	int result = 0;	
	char p[9];
	strcpy(p,pass);
	
	if(!strcmp(p,"123456789"))
		result = 1;

	return result;
	
}
