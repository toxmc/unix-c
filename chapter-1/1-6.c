//#include "../include/apue.h"
#include <stdio.h>

int main()
{
	printf("ok from process id %ld\n",(long)getpid());//getpid()获取当前正在执行程序的pid
	return 0;
}
