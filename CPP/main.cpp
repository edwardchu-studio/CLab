#include <iostream>
#include <cmath>
// #include <string>

float mysqrt(int n)
{
  return sqrt(n);
}
int main(void)
{
  using namespace std;
  int input;
  cin>>input;
  cout<<"The sqrt of "<<input<<" is "<<mysqrt(input)<<endl;
  return 0;
}
