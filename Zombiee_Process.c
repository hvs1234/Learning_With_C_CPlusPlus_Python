#include<stdio.h>
#include<unistd.h>
int main()
{
    pid_t p = fork();
    if(p==0)
    {
        printf("I am a child having pid is: %d\n",getpid());
        printf("My parent pid is: %d\n",getppid());
    }
    else
    {
        printf("I am a parent having pid is: %d\n",getpid());
        printf("My child pid is: %d\n",p);
    }
    return 0;
}
