#include <iostream>
#include <cstdlib>
using namespace std;


int main ()
{
  int grille[3][3];
  for (int i=0; i<3;i++)
    for (int j=0;j<3;j++)
      grille[i][j]=0;
  int a=0,b=0;
 test:
  for (int i=0; i<13; i++)
    {
      if (i % 4 == 0)
	{
	  for (int j=0; j<13; j++)
	    {
	      if (j % 4 == 0)
		cout << "+";
	      else 
		cout << "-";
	    }  
	} 
      else 
	for (int j=0; j<13; j++)
	    {
	      if (j % 4 == 0)
		cout << "|";
	      else if ((i==2||i==6||i==10) && (j==2||j==6||j==10))
		{
		  cout << grille[a][b] ;
		  b++;
		  if (b==3)
		    {
		      b=0;
		      a++;
		    }
		}
	      else 
		cout << " ";
	    }  
      cout << endl;
    }
  
  a=0; 
  int c=0;
  cout << "player1 chon position: " << endl;
  cin >> c;
  c-=1;
  if (grille[c/3][c%3]==0)
    {
      cout << c << " " << c/3 << " " << c%3 << endl;
      grille[c/3][c%3]=1;
    }
  
  cout << "player2 chon position: " << endl;
  cin >> c;
  c-=1;
  if (grille[c/3][c%3]==0)
    {
      cout << c << " " << c/3 << " " << c%3 << endl;
      grille[c/3][c%3]=2;
    }
  
  for (int i=0; i<3; i++)
    {
      if ((grille[i][0] != 0 && grille[0][i] != 0) &&
	  ((grille[i][0]==grille[i][1] && grille[i][1]==grille[i][2]) ||
	    (grille[0][i]==grille[1][i] && grille[1][i]==grille[2][i])))
	{
	  cout << "Felicitation !!!" << endl;
	  //  exit(0);
	}
    }
  if ((grille[0][0] != 0 && grille[0][2] != 0) &&
((grille[0][0]==grille[1][1] && grille[1][1]==grille[2][2]) || 
       (grille[0][2]==grille[1][1] && grille[1][1]==grille[2][0])))
    {
      cout << "Felicitation !!!" << endl;
      //  exit(0);
    }
  goto test;
}

