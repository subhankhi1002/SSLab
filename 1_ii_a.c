#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include <sys/stat.h>


int main(){
   /*int v = symlink("abc1.txt", "abc_softlink");
   
   if(v<0){
   perror("Failed program");
   return 1;
   }
   
   int f=link("abc1.txt","abc_hard");
     if(f<0)
     {
        {perror("Failed program");
        return 1;}
     }
     if(f==0){printf("Hard link done succesfully\n");}*/
   int e = mknod("dest1FIFO", S_IFIFO,0);
     
   if(e<0){
      perror("Failed program");
     }
   return 0;
}
