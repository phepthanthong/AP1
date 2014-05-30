#include <iostream>
#include <math.h>
using namespace std;
int main () {
/*
int main () {
  cout <<"Quel est ton nom ?" ;
  string nom ; /* une variable 
  cin >> nom ;
  cout << "Bonjour " << nom << endl;
  cout << "Quel age as tu ? ";
  int age ;
  cin >> age ;
  cout << "dans 2 ans tu auras " << age+2 << " ans" << endl;
}
*/
/* exemple:
quelle est la premiere note de math ? 14.5
quelle est la seconde note de math ? 12.5
votre moyenne est de 13.5

int main () {
  float note1; 
  cout << "Quelle est la premiere note de math ? " ;
  cin >> note1;
  cout << "Quelle est la seconde note de math ? " ;
 float note2;
  cin >> note2 ;
  cout <<" Votre moyenne est de " << (note1 + note2)/2 << endl ;
  } 


int t[5];
 cout << t[0] << endl << t[4] << endl; /*cout "t[0] = " << t[0] << endl;                      
  cin >> t[0] ;
  cin >> t[4] ;
  cout << t[0] << endl << t[4] << endl;

}


  cout << "quel est votre nom ?";
  string nom ;
  cin >> nom ;
  
  cout <<"quel est votre age ?" ;
  int age ;
  cin >> age ;

  if (age <= 14) 
    { 
      cout << "que vous etes jeune"  << endl;
    }
  else 
    {
      cout <<" vous etes vieux" << endl;
*/

  int main () {
  cout << "entrez a,b et c" ;
  float a,b,c ;
  cin >> a ;
  cin >> b ;
  cin >> c ;
  float d= b*b - 4*a*c ;
  if (d < 0) 
    { 
      cout << "pas de solution" << endl ;
    }
  else {
  if (d == 0)
    {
      cout << "il y a une seule solution" << -b/(2*a) << endl ;
	 }
  else
    {
      cout << "Il y a deux solution" << "x1=" << (-b + sqrt(d))/(2*a) << endl<< "x2=" << (-b - sqrt(d))/(2*a) << endl ;
         }
  }
}
    }      





  
  

 

 
