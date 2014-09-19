//#include "../include/apue.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;

	while((c=getc(stdin))!=EOF)//stdin标准输入
	{
		if(putc(c,stdout)==EOF)//stdout标准输出
		{
			printf("output error");
			exit(0);
		}
	}
	if(ferror(stdin))
	{
		printf("input error");
		exit(0);
	}
	exit(0);
}
