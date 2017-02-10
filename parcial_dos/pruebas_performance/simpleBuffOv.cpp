#include <stdio.h>
#include <cstring>

int main(int argc, char** argv)
{

	char array1[9];
	char array2[9];
	int value = 20;
	
	printf("Array 1 is at %p with value %s\n", array1, array1);	
	printf("Array 2 is at %p with value %s\n", array2, array2);
	printf("Value is at %p with value %i\n", &value, value);

	strcpy(array1, "arrayOne");
	strcpy(array2, "arrayTwo");
	strcpy(array1, argv[1]);

	printf("Array 1 is at %p with value %s\n", array1, array1);	
	printf("Array 2 is at %p with value %s\n", array2, array2);
	printf("Value is at %p with value %i\n", &value, value);

	return 0;

}
