#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;
int fact(int m)
{
  int prod=1;
  for (int i=1;i<=m;i++)
    prod*=i;
  return prod;

}

void test_fact () 
{ bool test_ok=true;
  int result[6] = {1,2,6,24,120,720};
  for (int n=1;n<=6;n++)
    if (fact(n) != result[n-1]);
      test_ok=false;
}
