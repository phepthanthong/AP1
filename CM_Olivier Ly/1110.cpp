#include <iostream>
#include <math.h>
using namespace std ;


int fib(int n);
int main () {
int N;
  cout << "entrez N= ";
  cin >> N;
  for (int n=1;n<=N; n++)
    cout << "fib(" << n << ")=" << fib(n) << endl;
}      
int fib(int n)
{   if (n==0 || n==1)
    return 1;
	 else 
	   return fib(n-1) +fib(n-2);
}

/*
#define TAILLE 8
void echanger_case(int t[],int i, int j)
{
  int x=t[i];
  t[i]=t[j];
  t[j]=x;
}
	
int main () 
{
  int T[TAILLE];
  for (int i=0;i<TAILLE;i++)
    { cout << "T[" << i << "]=";
      cin >> T[i];
    }
  cout << "T : { ";
  for (int i=0;i<TAILLE;i++)
    cout << T[i] << ", " ;
  cout << "}"  << endl;    

for (int i=0;i<TAILLE-1;i++)
  {
    for (int j=i+1;j<TAILLE;j++)
      { if (T[i]>T[j])
	  echanger_case(T,i,j);
      }
  }
 cout << "T : { ";
 for (int i=0;i<TAILLE;i++)
   cout << T[i] << ", ";
 cout << "}" << endl;
}
 */


	
	  
	  

	  
