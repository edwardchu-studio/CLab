#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "struct.c"
int main(void){
  char* s="hello world";
  printf("the input is %s, with address:%#08x",s,&s);
  return 0;
}
