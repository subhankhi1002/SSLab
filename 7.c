#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
int main(){
	int fd=open("7.txt",O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	
	int e = open("7_writefile.txt",O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	printf("%d",e);
	struct stat buf;
	fstat(fd, &buf);
	off_t size = buf.st_size;
	char* c = (char*)calloc(size, sizeof(char));
	int s = read(fd,c,size);
	int y = write(e,c,size);
	//printf("File Descriptive Value: %d\n",f);
	return 0;
	
	
	// argc --> number of arguments
	// argv[] --> files
}
