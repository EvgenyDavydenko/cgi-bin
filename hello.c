#include <stdlib.h>
#include <stdio.h>
void main(argc,argv,env)
int *argc;
char *argv[];
char *env[];
{
	int i = 0;
	while(env[i])
	{
		printf("%d:%s\n",i,env[i]);
		i++;
	}

	printf("Content-type: text/plain\n\n");
	printf("hello from C");

}
