#include <stdio.h>
#include <unistd.h>
int main(void)
{
pid_t pid, ppid;
/* Get the current process 10
*/
 pid = getpid();
 ppid = getppid();

 printf("Pocess ID is:%d\n", pid);
 printf("Parent Process ID is: %d\n", ppid);

 return (0);
 }
