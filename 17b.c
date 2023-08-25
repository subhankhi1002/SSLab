#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){

	struct{
		
		int ticket_no;
	} db;
	db.ticket_no=56;
	
	int fd=open("tic.txt",O_RDWR | O_CREAT,0744);
	write(fd,&db,sizeof(db));
	close(fd);
}
