#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
//#include <conio.h>
int main(){
	int fd=open("9.txt",O_CREAT | O_RDWR, S_IRWXO | S_IRWXU);
	struct stat bf;
	fstat(fd, &bf);
	ino_t  in=  bf.st_ino; 
	off_t size = bf.st_size;
	nlink_t n_links= bf.st_nlink;
	uid_t uid= bf.st_uid;
	gid_t gid= bf.st_gid;
	blksize_t bls = bf.st_blksize;
	blkcnt_t nbs= bf.st_blocks;
	struct timespec t1= bf.st_atim;
	struct timespec t2= bf.st_mtim;
	struct timespec t3= bf.st_ctim;
	
	printf("Inode: %ld\n", in);
	printf("Offset Size: %ld\n", size);
	printf("Number of Hard Links: %ld\n",n_links);
	printf("User ID: %u\n",uid);
	printf("Group ID: %u\n",gid);
	printf("Block Size: %ld\n",bls);
	printf("No. of Blocks: %ld\n",nbs);
	printf("Last time accessed: %ld\n",t1.tv_sec);
	printf("Last time modified: %ld\n",t2.tv_sec);
	printf("Last time change: %ld\n",t3.tv_sec);
	
}
