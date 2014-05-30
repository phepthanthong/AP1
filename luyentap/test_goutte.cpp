#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std ;

int main () 
{ int n ; 
  cin>>n;
  for (int a=1; a<n-1; a++)
    {
      for (int b=1; b<n-1; b++)
	{
	  for (int i=0; i<n; i++)
	    {
	      for (int j=0; j<n; j++)
		{
		  if (i==0 || i==n-1)
		    cout << "#";
		  else if (j==0 || j==n-1)
		    cout << "#";
		  else cout << " ";
		  if (a==j && b==i)
		    cout << "0";
		  else cout << " ";
		}
	      cout << endl;
	    }
	  usleep (40000);
	  system ("clear");
	  if(a==n-2 && b==n-2)
	    a=b=1;
	}
    }
}

