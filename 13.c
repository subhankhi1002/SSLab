#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	struct timeval tmo;
    	fd_set readfds;
	FD_SET(0, &readfds);
	tmo.tv_sec = 10;
	int z= select(1, &readfds, NULL,NULL,&tmo);
	if(z==0) printf("Timeout before data available\n");
	else if(z==-1) perror("Error\n");
	else printf("Processing...\n");
	return 0;
	
}
