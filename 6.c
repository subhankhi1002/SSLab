#include <unistd.h>
#include <stdio.h>
//#include <conio.h>

int main(){
	char* c = (char*)calloc(10, sizeof(char)); // calloc parameter (no. of elememts, char size) --> Creating buffer
	
	int s = read(0,c,10);
	//printf("%d",s);
	if (s<0){perror("Cant Read\n");}
	else {printf("Read Successfully\n");}
	
	int y = write(1,c,s*sizeof(char));
	//printf("%d",y);
	if(y==0){perror("End of the File!\n");}
	else if (y<-1){perror("Can't write\n");}
	else{printf("\nWrote Successfully!\n");}
	return 0;

}
