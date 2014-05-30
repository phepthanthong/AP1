#include <iostream>
#include <cstdlib>
#include <math.h>
#define TAILLE 10
using namespace std;

/*void trouver_min(int & min1,int& min2, int* t)
{
  for (int i=0;i<TAILLE;i++)
    { 
      if (t[i]<min1)
	{
	  min2=min1;
	  min1=t[i];
	}
      else if (t[i]<min2)
	min2=t[i];	  
    }
  //cout << min1 << endl << min2 <<endl;
  }*/

void echanger_case(int t[],int i, int j)
{
  int x=t[i];
  t[i]=t[j];
  t[j]=x;
}

void trouver_min1()
{
  for (int i=0;i<TAILLE-1;i++)
    {
      for (int j=i+1;j<TAILLE;j++)
	{ if (T[i]>T[j])
	    echanger_case(T,i,j);
	}
    }
}

int main ()
{
  int t[TAILLE],min1,min2;
  //cout << min1 <<endl<< min2 <<endl;
  for (int i=0;i<TAILLE;i++)
    { cout << "t[" << i << "]=" ;
      cin >> t[i] ;
    }
  /*for (int i=0;i<TAILLE;i++)
    { 
      if (t[i]<min1)
	{
	  min2=min1;
	  min1=t[i];
	}
      else if (t[i]<min2)
	min2=t[i];
	  
	}
  trouver_min( min1, min2, t);
  cout << min1 <<endl<< min2 <<endl;
  */
  int k; cin >> k << endl;
  for (int i=0;i<=k;i++)
    { 
      trouver_min1();
         
}
