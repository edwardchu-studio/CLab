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
# include "Sales_item.h"
using namespace std;
int main(void)
{
  clock_t start = clock();

  int ci=1024;
  // const int &r1=ci;
  // const int *q=&ci;
  int * const p= &ci;

  double duration = 1000*( clock() - start ) / (double) CLOCKS_PER_SEC;
  cout << "Total duration: "<<duration <<"ms."<< endl;
  return 0;
}

