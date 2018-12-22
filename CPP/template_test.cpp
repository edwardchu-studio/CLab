#include "section_1.h"
using namespace std;
template <typename T>
void myswap(T &a, T &b)
{
  cout<<"Swapping others!"<<endl;
  T tmp;
  tmp=a;
  a=b;
  b=tmp;
}

template <> void myswap<int>(int &a, int &b)
{
  cout<<"Swapping int!"<<endl;
  int tmp;
  tmp=a;
  a=b;
  b=tmp;
}

