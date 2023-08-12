#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
//#include <conio.h>
int main(){
	for(int i=0;i<5;i++){
	char c = (char) (i+65);
	char pop[]  ={c,'.','t','x','t'};
	//char[i]
	int e=creat(pop,S_IRWXU | S_IRWXG);
	
	}
	while(1);
	return 0;
}
