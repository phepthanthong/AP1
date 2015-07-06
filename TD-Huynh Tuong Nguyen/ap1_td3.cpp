#include <iostream>
#include <math.h>
using namespace std;

/* //exercice 1
int a;

int main ()
{
  cout << "Entrer un entier a" << endl;
  cin >> a ; 
  if (a==0)
  cout << "ni pair ni impair" << endl;
  else if (a % 2 == 1)
  cout << "a est un nombre impair" << endl;
  else
  cout << "a est un nombre pair" << endl;
}
  
//exercice2
double somme=0.0,moyenne,test=0.0;
int main ()
{
  int n;
  cout << "entrer les nombres" << endl;
  cin >> n ;
  while ( n !=0 )
    {
      somme += n;
      test += 1.0;
      cout << "entrer les nombres" << endl;
      cin >> n ;
    }
  cout << "la somme est " << somme << endl;
  moyenne=somme/test;
  cout << "la moyenne est " << moyenne << endl;
}

//exercice4

int a;
int max=1;
int main ()
{
  cout << "entrer un entier positif "; cin >> a;
  while (a != 0)
    {
      if (a>max)
	max=a;
      cout << "entrer un entier positif "; cin >> a;
    }
  if (max==1)
    cout << "error " << endl;
  else cout << "le maximum est " << max << endl;
}


//exercice9
int main () {
  cout << "entrez a,b et c" ;
  float a,b,c ;
  cin >> a ;
  cin >> b ;
  cin >> c ;
  float d= b*b - 4*a*c ;
  cout << "d= " << d << endl ;
  if (d < 0) 
    { 
      cout << "pas de solution" << endl ;
    }
  else {
  if (d == 0)
    {
      cout << "il y a une seule solution " << -b/(2*a) << endl ;
	 }
  else {
      cout << "Il y a deux solution " << endl ;
      cout << "x1=" << (-b + sqrt(d))/(2*a) << endl ;
      cout << "x2=" << (-b - sqrt(d))/(2*a) << endl ;
    }
  }
}

*/

//exercice5

int a=1,x,n;
int main ()
{
  cin >> n;
  for (int i=1; i<=n; i++)
    {
      a=a*x;
    }
  cout << "a est egal" << a << endl;
}
