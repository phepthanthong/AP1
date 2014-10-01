#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <termios.h>
using namespace std;

/******************************************************************************************************************/

//EXERCICE 1 : Calculer la puissance
/*
int Puissance1(int a, int n) {
  int resultat = 1;
  
  for (int i = 0 ; i < n ; i++)
    resultat *= a;
  
  return resultat;
}


int Puissance2(int a, int n) {
  if (n == 0)
    return 1;
  
  if (n % 2 == 0)
    return Puissance2(a,n/2) * Puissance2(a,n/2);

  if (n % 2 == 1)
    return a * Puissance2(a,(n - 1)/2) * Puissance2(a,(n - 1)/2);
}


int main () {
  int a, n;
  cout << "a = "; cin >> a;
  cout << "n = "; cin >> n;

  cout << "Le resultat 1 = " << Puissance1(a,n) << endl;
  cout << "Le resultat 2 = " << Puissance2(a,n) << endl;
}
*/

/******************************************************************************************************************/

//EXERCICE 2 : Suite de Fibonacci

/*
int Fib(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return Fib(n - 1) + Fib(n - 2);
}


int main() {
  int n;
  cout << "n = "; cin >> n;

  for (int i = 0 ; i < n ; i++) 
    cout << "Fibonacci(" << i << ") = " << Fib(i) << endl;
}
*/

/******************************************************************************************************************/

//EXERCICE 3 : Fonction d'Ackerman

/*
int Ackerman(int m, int n) {
  if (m == 0)
    return n + 1;
  else if (n == 0) 
    return Ackerman(m - 1, 1);
  else
    return Ackerman(m - 1, Ackerman(m, n - 1));
}

int main() {
  int m, n;
  cout << "m = "; cin >> m;
  cout << "n = "; cin >> n;

  if (m < 0 || n < 0)
    cout << "Erreur" << endl;
  else
    cout << "A(" << m << "," << n << ") = " << Ackerman(m,n) << endl;
}
*/

/******************************************************************************************************************/

//EXERCICE 4 : Horner & Polynome

/*
int Horner(int a, int x, int n) {
  if (n == 0)
    return a;
  else if (n == 1)
    return a*(1 + x);
  else
    return a + Horner(a, x, n - 1)*x;
}

int main() {
  int a, x, n;
  cout << "a = "; cin >> a;
  cout << "x = "; cin >> x;
  cout << "n = "; cin >> n;

  if (n < 0)
    cout << "Erreur" << endl;
  else
    cout << "Resultat = " << Horner(a, x, n) << endl;
}
*/

/******************************************************************************************************************/

//EXERCICE 5 : Ping Pong

/*
int Ping(int n);
int Pong(int n);

int main() {
  int n;
  cout << "n = " ;
  cin >> n;

  Ping(n);
  Pong(n);
}

int Ping(int n) {
  if (n == 0)
    cout << "Point Ping" << endl;
  else {
    Pong(n - 1);
    cout << "Ping" << endl;
  }
}

int Pong(int n) {
  if (n == 0)
    cout << "Point Pong" << endl;
  else {
    Ping(n - 1);
    cout << "Pong" << endl;
  }
}
*/

/******************************************************************************************************************/
  