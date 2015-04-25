/*************************************************************************
	> File Name: myls.c
	> Author: zhuming
	> Mail: zhumingasd@163.com 
	> Created Time: 2015年04月24日 星期五 21时39分06秒
 ************************************************************************/
#include <dirent.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	DIR *dp;
	struct dirent *dirp;

	if (argc != 2)
	{
		printf("usage: lsmy directory name\n");
		return 0;
	}
	
	if ((dp = opendir(argv[1])) == NULL)
	{
		printf("can't open %s\n", argv[1]);
	}
	while ((dirp = readdir(dp)) != NULL)
	{
        printf("%s\n", dirp->d_name);
	}
    closedir(dp);
	return 0;
}
