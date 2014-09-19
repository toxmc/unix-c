/*
 * printf dir
 */
//#include "../include/apue.h"
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc,char *argv[])
{
	DIR	*dp;
	struct dirent *dirp;

	//如果参数不等于2
	if(argc != 2){
		printf("usage:ls directory_name");
		exit(0);
	}
	//如果路径不存在
	if((dp = opendir(argv[1])) == NULL){
		printf("can't open %s",argv[1]);
		exit(0);
	}
	//循环便利文件夹的文件
	while((dirp = readdir(dp))!=NULL){
		printf("%s\n",dirp->d_name);
	}
	closedir(dp);
	exit(0);
}
