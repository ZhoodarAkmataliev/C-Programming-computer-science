#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	FILE *fp;
	char c;
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("can't open file\n");
		exit (0);
	}
	while ((c = getc(fp)) != EOF)
		putc(c, stdout);
	fclose(fp);
	
	return (0);
}
