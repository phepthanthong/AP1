#include <iostream>
#include <cstdlib>
#include <string>
#include <math.h>
using namespace std;
/*
//exercice1, question 1,2,3
void backToSchool(int tab1[], int tab2[], int tab3[], int taille)
{
  for (int i=0; i<taille; i++)
    tab3[i]=tab1[i]+tab2[i];
  for (int i = taille-1; i>0;i--)
    { 
      if (tab3[i]>9)
	{
	  tab3[i] -= 10;
	  tab3[i-1] += 1;
	}
    }
}

void afficher(int tab[], int taille)
{
  for (int i=0; i<taille; i++)
    {
      if (i != 0 && ((taille-i)%3 == 0))
	cout << ".";
      cout << tab[i];
    }
  cout << endl;
}

int main()
{
  const int TMAX=12;
  int tab1[TMAX]={0, 9, 8, 0, 5, 8, 3, 1, 7, 2, 9, 3};
  int tab2[TMAX]={3, 2, 0, 2, 3, 4, 7, 0, 5, 1, 0, 5};
  //int tab1[TMAX]={9, 9, 8, 0, 5, 8, 3, 1, 7, 2, 9, 3};
  //int tab2[TMAX]={3, 2, 0, 2, 3, 4, 7, 0, 5, 1, 0, 5};
  int tab3[TMAX];
  backToSchool(tab1, tab2, tab3, TMAX);
  afficher(tab3, TMAX);
  return EXIT_SUCCESS;
}


//exercice2, question2

float fonction1 (float x)
{
  float f1;
  f1=1/(1-x);
  return f1;
}
  
float fonction2 (float x)
{
  float f2;
  f2=1/(1+x);
  return f2;
}

int main ()
{
  float x=0.5;
  //fonction1(x);
  //fonction2(x);
  cout << fonction1(x) << endl;
  cout << fonction2(x) << endl;
  return EXIT_SUCCESS;
}
*/

//exercice2, question 3

float fonction1 (float x)
{
  float f1;
  f1=1/(1-x);
  return f1;
}
  
float fonction2 (float x)
{
  float f2;
  f2=1/(1+x);
  return f2;
}

float g1(float x, int ordre)
{
  float temp;
  for (int i=1; i<=ordre; i++)
    temp = temp*x + 1;
  return temp;
}
/*
float g1(float x, int ordre)
{
  float c;
  if (ordre !=-1)
    c=1+ x*g1(x, ordre-1);
  return c;
}
*/

float g2(float x, int ordre)
{
  float c=1 , d=1;
  for (int i =1; i<=ordre; i++)
    {
      d=d*x;
      if (i%2==1 || i==1)
	c= c-d;
      else
	c= c+d;
    }
  return c;
}

int petit_n(float x, float m)
{
  float a, b;
  int i=0;
  a=fonction1(x);
  for (;;i++)
    {
      b=g1(x,i);
      if (m>= a-b) 
	break;
    }
  return i;
}

int main ()
{  
  float x=0.5;
  int ordre=5;
  cout << fonction1(x) << "approx:" << g1(x,ordre) << endl;
  cout << fonction2(x) << "approx:" << g2(x,ordre) << endl;
  cout << "entrer le nom e" << endl;
  cin >> m;
  cout << petit_n (x,m) << endl;
  return EXIT_SUCCESS;
}
