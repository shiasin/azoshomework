#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char* argv[])
{

	pid_t newchild = fork();
	if(newchild != 0 ){
		execv("/bin/ps", (char *[]){argv[1], argv[2], NULL });
		wait(NULL);
	}
	else{
		if(newchild == -1){
			printf("error");
		}
		printf("\n after execution ....\n");
	}
	return 0;
}
