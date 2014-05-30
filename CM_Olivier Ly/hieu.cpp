#include <iostream>
#include <cstdlib>
#include <math.h>
#include "fichier.h"
using namespace std;
/*
int fact(int m)
{
  int prod=1;
  for (int i=1;i<=m;i++)
    prod*=i;
  return prod;

}
*/
int main () 
{
  int N;
  cout << "entrez N= ";
  cin >> N;
  for (int n=1;n<=10; n++)
    cout << "fact(" << n << ")=" << fact(n) << endl;
}
void test_fact();
