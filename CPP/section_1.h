#include <iostream>
using namespace std;
void iotest(void);
template <typename T>
void myswap(T&, T&);
template <> void myswap <int> (int &, int &);

void flow_test(void);
