//#include "../include/apue.h"
//将标准输入复制到标准输出
#include <stdio.h>	//printf
#include <stdlib.h>	//exit(0)
#include <unistd.h>	//read


#define BUFFSIZE 4096

int main(void)
{
	int n;
	char buf[BUFFSIZE];

	while((n = read(STDIN_FILENO,buf,BUFFSIZE))>0)//STDIN_FILENO标准文件输入  值0
	{
		if(write(STDOUT_FILENO, buf, n) != n)//STDOUT_FILENO标准文件输出 值1
		{
			printf("write error");
			exit(0);
		}
	}

	if(n<=0){
		printf("read error");
		exit(0);
	}
	exit(0);
}
