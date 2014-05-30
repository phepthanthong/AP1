#include <iostream>
#include <math.h>
using namespace std;
/*
int main () {
  double Ax,Ay,Bx=1.0,By=0.0,Hx,Hy,h, AB, aireOAB,pi;
  int N=6;
  Ax=0.5;
  Ay=sqrt(3.0)/2;
  int nb;
  cout << "combien de tour ?"; cin >> nb;
  for (int i=0; i<=nb ; i++)
    { Hx=1.0/2.0*(Ax+1);
      Hy=1.0/2.0*Ay;
      h=sqrt((Hx*Hx)+(Hy*Hy));
      AB=sqrt((Ax-1)*(Ax-1) + (Ay*Ay));
      aireOAB=(h*AB)/2.0;
      pi=N*(aireOAB);
      cout << "Hx= " << Hx << "Hy= " << Hy << "AB= " << AB << "Aire de OAB est "<< aireOAB <<  endl;}
  cout << "nombre pi ~ " << pi  << endl ;
      Ax=Hx/h;
      Ay=Hy/h;
      N *= 2; 
      
}

/*
int main () {
  int nb; cin >> nb ;
  string str1;
  cout << "message1 "; cin >> str;
  string str2;
  cout << "message2 "; cin >> str2;
  for (int i=0; i<nb; i++)
    { 
      if (i==nb/2)
	{ 
	  cout << "#";
	  int nb_espace=(nb-str.length() -2)/2;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  cout<<str;
	  for (int k=0;k<nb_espace;k++)
	    cout << " ";
	  if ((nb-str.length()-2) % 2==1)
	      cout << " ";
	  cout << "#";
	}
	
      for ( int h=0;h<nb; h++)
	{ 
	  if (i==0 || i==nb-1)
	    cout << "#";
	  else  if ( h==0 || h==nb-1)
	    cout << "#";
	  else 
	    cout << " " ;
   	}
      cout << endl ;
    }
  
}
/*      
// corrige

int main () {
int N;
cout << "N= ";
cin >> N;

for ( int i=0;i<N; i++)
{ for (int j=0;j<N;j++) {
if (i==0 || i==N-1 || j==0 || j==N-1)
cout << "#";
else 
cout << " " ;
}
cout << endl;
}
}

*/ 
