#include <fcntl.h>             
#include <unistd.h>
#include <sys/types.h>
#include<stdio.h>
int main(){
	long int fd=open("11.txt",O_CREAT | O_RDWR , 0774);
	long int x = dup(fd);
	
	char buf[1024];
	char buf2[1024];
	int y = read(fd,&buf,sizeof(buf));
	
	lseek(fd,-y,SEEK_CUR);

	int a = read(x,&buf,sizeof(buf));
	
	long int z =lseek(fd,0L,SEEK_END);
	int c = write(x,&buf,a);
	close(fd); 
	
	/* for dup2
	int i = dup2(fd,5);
	*/
	/*for fcntl
	int k = F_DUPFD(fd);
	*/
}
