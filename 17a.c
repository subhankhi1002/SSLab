#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

struct{
	int ticket_no;
	}db;

int main() {

struct flock fl;

int fd=open("tic.txt",O_RDWR | O_CREAT, 0664);


//write(fd,&db,sizeof(db));

fl.l_type   = F_WRLCK;  
fl.l_whence = SEEK_SET; 
fl.l_start  = 0;        
fl.l_len    = 0;        
fl.l_pid    = getpid(); 
printf("Before entering the critical section\n");
fcntl(fd, F_SETLKW, &fl);
read(fd,&db,sizeof(db));
printf("Current ticket number: %d\n",db.ticket_no);
db.ticket_no++;
//printf("%d",)
lseek(fd,0L,SEEK_SET);
printf("Inside the Critical Section...\nPress Enter to Unlock...\n");
write(fd,&db,sizeof(db));
getchar();
fl.l_type=F_UNLCK;
printf("Unlocked\n");
fcntl(fd,F_SETLK,&fl);
printf("Unlocked");
}

