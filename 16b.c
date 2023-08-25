#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main() {

struct flock fl;


fl.l_type   = F_WRLCK;  
fl.l_whence = SEEK_SET; 
fl.l_start  = 0;        
fl.l_len    = 0;        
fl.l_pid    = getpid(); 

int fd = open("11.txt", O_RDWR | O_CREAT);
printf("before entering into critical section\n");
fcntl(fd, F_SETLKW, &fl);
printf("Inside the Critical Section...\nPress Enter to Unlock..\n");
getchar();
printf("unlocked\n");
fl.l_type   = F_UNLCK;
fcntl(fd, F_SETLK, &fl);
return 0;
}
