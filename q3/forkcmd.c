#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main()
{
///making a new parallel process for problem and use wait, to prevent of finishing every thin

pid_t newchild = fork();
if(newchild != 0 ){
execv("/bin/ps", (char *[]){"ps", "-l", NULL });
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
