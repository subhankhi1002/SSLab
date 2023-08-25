#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
//#include <conio.h>
int main(){
	int fd=open("10.txt",O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	char buf[1024];
	//int s = read(fd,buf,sizeof(buf));
	write(fd,"abcdefghij",10);
	
	long int z =lseek(fd, 10L, SEEK_CUR);
	printf("%ld",z);  // -->a) returning number of bytes written
	write(fd,"1234567890",10);  // --->b)
	//printf("%ld",z);
}
