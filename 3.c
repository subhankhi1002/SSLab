#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
	int d=creat("3.txt",S_IRWXU | S_IRWXG);
	printf("File Descriptive Value: %d\n",d);
	return 0;
}
