#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <unistd.h>
#include "struct.c"
int main(void){
  int forked;
  for(int i=0;i<=4;i++)
    {
      if(i%2==0)
        {
          printf("i:%d\n",i);
          forked=fork();
          printf("forked:%d\n",forked);
        }
      printf("foo(i:%d,id:%d)\n",i,forked);
    }

  return 0;
}
