#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
	int d=open("3.txt",O_CREAT,O_RDWR);  //filename,flags,mode
	int f=open("4_i.txt",O_EXCL|O_CREAT|O_RDWR, S_IRWXO | S_IRWXU);
	printf("File Descriptive Value: %d\n",f);
	return 0;
}

// O_EXCL comes with O_CREAT, if file already exists, O_EXCL gives error, otherwise it creates a file, it also fails with symbolic link
// O_CREAT if filename doesn't exist creates the file, else no effect
