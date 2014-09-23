/*
 * see every argv file type
 */
#include "../include/apue.h"

int main(int argc, char *argv[])
{
	int i;
	struct stat buf;
	char *ptr;

	for(i=1;i<argc;i++)
	{
		printf("%s: ",argv[i]);
		if(lstat(argv[i],&buf) < 0)
		{
			err_ret("lstat error");
			continue;
		}
		//普通文件
		else if(S_ISREG(buf.st_mode))
			ptr = "regular";
		//目录文件
		else if(S_ISDIR(buf.st_mode))
			ptr = "directory";
		//字符特殊文件
		else if(S_ISCHR(buf.st_mode))
			ptr = "character special";
		//块特殊文件
		else if(S_ISBLK(buf.st_mode))
			ptr = "block special";
		//管道或fifo
		else if(S_ISFIFO(buf.st_mode))
			ptr = "FIFO";
		//符号连接
		else if(S_ISLNK(buf.st_mode))
			ptr = "symbolic link";
		//套接字
		else if(S_ISSOCK(buf.st_mode))
			ptr = "socket";

		else
			ptr = "** unknown mode **";

		printf("%s\n",ptr);
	}
	exit(0);
}
