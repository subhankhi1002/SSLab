#include <fcntl.h>             
#include <unistd.h>
#include <sys/types.h>
#include<stdio.h>
int main(){
	long int fd=open("11.txt",O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	int z = fcntl(fd, F_GETFL);
	//printf("%d\n",z);
	switch(z){
    case 32768 : printf("read\n"); break;
    case 32769 : printf("write"); break;
    case 33793 : printf("a\n"); break;
    case 32770 : printf("read+ or write+\n"); break;
    case 32794 : printf("a+\n"); break;
}
return 0;
} 
