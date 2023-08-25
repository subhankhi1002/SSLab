#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int i, fd;
	struct{
		int train_num;
		int ticket_no;
	} db[3];
	for(i=0;i<3;i++){
		db[i].train_num=i+1;
		db[i].ticket_no=0;
	}
	
	fd=open("record.txt",O_RDWR | O_CREAT,0744);
	write(fd,db,sizeof(db));
	close(fd);
}
