#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
execv("/bin/ps", (char *[]){"ps", "-l", NULL });
printf("\n after execution ....\n");
return 0;
}
