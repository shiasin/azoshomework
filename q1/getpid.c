#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

        
int main() 
{ 
    
    pid_t pid;
    pid = getpid();  
    printf("The process id is : %d\n",pid);

    return 0; 
} 
