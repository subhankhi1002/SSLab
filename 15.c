#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
int main(){
	extern char **environ;
	int i=0;
	while(environ[i]){
	printf("%s\n",environ[i++]);
	
	}
}
