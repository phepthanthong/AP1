#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

//int genoperande(int max)
/*{
  srand(time(NULL));
  int a;
  a=(int)rand() % max; //rand() % 9 + 10
  return a;
  }*/

int main ()
{
  
  int a, b, c;
  cin >> a;
  srand(time(NULL));
  for (int i=0; i<100;i++)
    {
    cout << rand()%100 << " " ;
    if (i%5==0)
      cout << endl;
    }
  cout << "Cho 2 so b va c " << endl;
  //b=genoperande(a);
  //c=genoperande(b);
  cout << b << endl << c << endl;
  cout << "1. exercice sur l'addition" << endl;
  cout << "2. exercice sur la soustraction" << endl;
  cout << "3. exercice sur la multiplication " << endl;
  cout << "             Votre choix: " ;
  cin >> a ;
  
  switch (a)
    {
      int resultat;
    case 1:
      cout << "Ket qua cua ban la: " << endl;
      cin >> resultat;
      if (resultat==c+b)
	cout << "Bravo" << endl;
      else 
	cout << "Desole!!!" << endl;
      break;
    case 2:
      cout << "Ket qua cua ban la: " << endl;
      cin >> resultat;
      if (resultat==c-b)
	cout << "Bravo" << endl;
      else 
	cout << "Desole!!!" << endl;	
      break;
    case 3:
      cout << "Ket qua cua ban la: " << endl;
      cin >> resultat;
      if (resultat==c*b)
	cout << "Bravo" << endl;
      else 
	cout << "Desole!!!" << endl;
      break;
    default:
      cout << "erreur" <<  endl;
    } 
}
      
    
