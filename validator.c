#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



const char * const allowedFlags[] = { "--size", "--sort", "--print" };

const int allowedFlagsLength = sizeof(allowedFlags) / sizeof (allowedFlags[0]);

void validateFlags(const char * const flags[], const int length)
{	
	bool flagExist = false;
	int incorrectFlagIndex = -1;
	for(int i = 1; i < length; i++)
	{
		flagExist = false;
		for (int j = 0; j < allowedFlagsLength; j++)
		{
			if(strcmp(flags[i], allowedFlags[j]) == 0) 
			{
				flagExist = true;
				incorrectFlagIndex = -1;
			} else {
				incorrectFlagIndex = i;
			       }
		}
		if (!flagExist) {
			printf("%s\n", "Error: Incorrect flag was given!");
			exit(EXIT_FAILURE);
		}

	}

	return;
}


int main(const int argc, const char * const argv[])
{
	if(argc > 1) validateFlags(argv, argc);
	return EXIT_SUCCESS;
}
