#include<iostream>
#include<math.h>
#define TAILLE 10
using namespace std ;
/*
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

int main () {
  double a ;
  cin >> a ;
if (a >= 10) 
  { cout << "Vous avez la moyenne" << endl ;
  }
 else if ((a<10) && (a>=8)) 
   { cout << "note non eliminatoire" << endl ;
      }
 else {
   cout << "note eliminatoire" << endl ;
       } 
}


int main () {
  int t[TAILLE] ;
  for (int i=0; i<TAILLE; i++)
    { cout << "t[" << i << "]=" ;
      cin >> t[i] ;}
  for (int i=0; i<TAILLE; i++)
    if (t[i]==50)
{
  cout << "j'ai trouve la valeur 50 " << endl; break ;}
    else if (i>=9) /* if (i==TAILLE) */
	cout << "je ne trouve pas la valeur 50 " << endl ;
}
 
*/
 
int main () {
  int N ;
  cin >> N ;
double somme = 0.0
  for (int n=0; n<N; n++) 
    {  somme += n ;
       cout << "la somme est " << somme << endl ;
    }
