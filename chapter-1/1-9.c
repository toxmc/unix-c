//#include "../include/apue.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	printf("uid=%d,gid=%d\n",getuid(),getgid());
	exit(0);
}
