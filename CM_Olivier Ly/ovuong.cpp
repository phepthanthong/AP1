#include <iostream>
#include <math.h>
using namespace std ;

//viet chuong trinh xuat ra man hinh o vuong

int main () {
  int nb ;
  cin >> nb;
  string mess ; cout << "quel message ? "; cin >> mess ;
  string mess1; cout << "quel message ? "; cin >> mess1 ;
  for (int i=0;i<nb;i++)
    { 
      if (i==nb/2)
	{ 
	  cout << "#" ;
	  int nb_espace=(nb-mess.length()-2)/2;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  cout << mess;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  if ((nb-mess.length() -2) % 2 == 1)
	    cout << " #";
	  else 
	    cout << "#" ;
	} 
      if (i==(nb/2)+1)
	{
	  cout << "#" ;
	  int nb_espace=(nb-mess1.length()-2)/2;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  cout << mess1;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  if ((nb-mess1.length() -2) % 2 ==1)
	    cout << " #";
	  else 
	    cout << "#" ;
	}
      for (int j=0;j<nb;j++)
	{ 
	  if (i==0 || i==nb-1)
	    cout << "#" ;
	  else if (j==0 || j==nb-1)
	    cout << "#";
	  else cout << " ";
	}
      cout << endl;
    }
}

