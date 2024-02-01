#include <stdio.h>
#include "file_functions.h"

// #define _DEB
#ifdef _DEB
int main()
{
	int argc = 5;
	char const *argv[] = {"neogit", "config", "--global", "user.name", "AHMZ"};
}
#else
int main(int argc, char const *argv[])
{
	printf("Hello!\n");
	printf("The Number of arguments is : \"%d\" \n", argc);
	for (int i = 0; i < argc; i++)
		printf("The Argument[%d] is : \"%s\" \n", i, argv[i]);
	printf("\n\n\n");
	printf("Is Exist = %d\n", is_exist(NULL));

	// printf("Extra Print\n");
	return 0;
}
#endif
