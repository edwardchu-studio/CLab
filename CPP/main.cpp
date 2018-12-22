#include <iostream>
#include <cmath>
#include <string>
#include <climits>
# include <fstream>
# include <vector>
# include <ctime>
# include <stdio.h>
# include <unistd.h>
# include "section_1.h"
using namespace std;
int main(void)
{
  // clock_t start = clock();
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


  // double duration = 1000*( clock() - start ) / (double) CLOCKS_PER_SEC;
  // cout << "Total duration: "<<duration <<"ms."<< endl;
  return 0;
}

