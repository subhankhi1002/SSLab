#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[] ){
	struct stat bf;
	int fd=open(argv[1],O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	fstat(fd, &bf);
	long int x = bf.st_mode;
	
	if ((x & S_IFMT) == S_IFREG) printf("Regular File Type\n");
	else if ((x & S_IFMT) == S_IFSOCK) printf("Socket File Type\n");
	else if ((x & S_IFMT) == S_IFLNK) printf("Symbolic Link\n");
	else if ((x & S_IFMT) == S_IFBLK) printf("Block Device\n");
	else if ((x & S_IFMT) == S_IFDIR) printf("Directory\n");
	else if ((x & S_IFMT) == S_IFCHR) printf("Chracter Device\n");
	else if ((x & S_IFMT) == S_IFIFO) printf("FIFO\n");
	


return 0;
}
