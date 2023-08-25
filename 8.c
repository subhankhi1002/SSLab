#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include<unistd.h>


int main(){
	

	int fd_read = open( "8.txt", O_RDONLY);
	//int fd_write = open(argv[2], O_WRONLY|O_CREAT,0766);
	if(fd_read==-1){
		printf("Can't process");
	}
	while(1){
		
		
		char buf[1024];
		char rd;
		int j=0;
		int char_read=1;
		while(buf[j]!='\n' && char_read!=0){
			char_read = read(fd_read,&rd,1);
			buf[j]=rd;
			j++;
			
		}
		int m = write(1,buf,j);
		if(char_read==0){break;}
		
	
	}
	close(fd_read);
	return 0;
}
