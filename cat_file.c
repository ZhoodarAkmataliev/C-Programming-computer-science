#include <stdio.h>
#include <unistd.h>

int		main( int argc, char **argv)
{
	FILE* fp;
	fp = fopen(*(++argv), "r");
	char c;
	while ((c = getc(fp)) > 0)
		putc(c, stdout);
	fclose(fp);
	return (0);
}
