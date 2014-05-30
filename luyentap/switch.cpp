#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int main () 
{ while(1)
    {
      system("stty raw");
      char c = getchar();
      system("stty cooked");
      
      switch (c)
	{
	case 'a':
	cout << "AVANCE" << endl;
	break;
	case 'r':
	cout << "RECULE";
	break;
	case 13:
	  cout << "au revoir" << endl;
	  exit(0);
	default: cout << "touche inconnue: " << c << endl;
	break;
	}
    }
}
