#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	char** to_print; 
	if (argc < 2)
	{
		to_print = "Nice\n";
	}
	else
	{
		if (strcmp (argv[1], "--evil") == 0)
		{
			to_print = "nice\n";
		}
		else if (strcmp (argv[1], "-h") == 0 || strcmp (argv[1], "--help") == 0)
		{
			printf("No argument: Outputs 'Nice'\nFirst argument as '-h' or '--help': Display this screen\nFirst argument as '--evil': Outputs 'nice'\n");
			return 0;
		}
		else
		{
			printf ("Unknown argument. Run with '-h' for help.\n");
			return 1;
		}
	}
	for(;;)
	{
	printf (to_print);
	}
	return 0;
}