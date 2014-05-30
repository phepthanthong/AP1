#include<iostream>
#include<cstdlib>
using namespace std;

/*
//la forme initiale du fichier

void saisirTableau(int tab[], int taille)
{
  int i;
  for( i = 0 ; i < taille ; i++ )
    cin >> tab[i];
}

void afficherTableau(int tab[], int taille)
{
  int i;
  for( i = 0 ; i < taille ; i++)
    cout << tab[i] << " ";
  cout << endl;
}


int main()
{
  const int TAILLE = 5;
  int tabl[TAILLE];

  saisirTableau(tabl, TAILLE);
  afficherTableau(tabl, TAILLE);

  return EXIT_SUCCESS;
}
*/

void saisirTableau(int tab[], int TAILLE)
{
    for(int i = 0 ; i < TAILLE ; i++ )
    cin >> tab[i];
}

void afficherTableau(int tab[], int TAILLE)
{
  int i;
  for( i = 0 ; i < TAILLE ; i++)
    cout << tab[i] << " ";
  cout << endl;
}

void indiceMax(int tabl[], int TAILLE, int & max)
{
  int a;
  for (int k=0; k<TAILLE; k++)
    {
      if (tabl[k]>max)
	{max=tabl[k];
	  a=k;
	}
    }
  cout << "l'entier le plus grand saisi: " << max << endl;
  cout << "son indice dans le tableau est: " << a+1 << endl;
}

void compte(int tabl[], int TAILLE, int compteur[], int max)
{
  for (int i = 0; i<max+1; i++)
    compteur[i]=0;
  for (int j=0; j<TAILLE; j++)
    compteur[tabl[j]]++;
  for (int i=0; i<max+1; i++)
    cout << compteur[i] <<  endl;
}

/* //cach2 cua ex5(compte)
  void Compte (int tab[], int taille, int compteur[]) {
  int j = 0;
  bool a = true;
  int valeur [taille];
  for (int i = 0; i < taille ; i++)
    {
      for(int k=0; k<=j; k++)
	{
	  if (tab[i] == compteur[k])
	    {
	      valeur[k]++;
	      a=false;
	    }      
	}
      if
 	{      
	  compteur[j] = tab[i];
	  valeur [j] = 1;
	  j++;
	}
      else
	a=true;      
    }
  for (int i = 0; i <j; i++)
    cout << "compteur[" << i << "] = " << compteur[i] << " " << valeur[i] << endl;
}

//cach3 cua ex5(compte)
void Compte1 (int tab[], int taille){
  char vitri[taille];
  int dem=0;
  for (int i=0; i<taille; i++){
    if (vitri[i]!= 'a'){
      cout << "Nombre " << tab [i] << ": ";
      for (int j=0; j<=taille; j++)
    if (tab[j] == tab [i]){
      vitri[j] = 'a';
      dem++;
    }
      cout << dem << " element" << endl;
      dem = 0;
      }
  }}

//Cach 4: dung sort sap xep mang lai, sau do dung for kiem tra tab[i]=tab[i+1] khong * neu = thi dem++, != thi in ra tab[i] va dem **

//exercice6:Median
void median(int tab[], int taille) {
    for(int i=0; i<taille; i++) {
        int left = 0, right = 0;
        for(int j=0; j<taille; j++) {
            if(tab[i] > tab[j] || (tab[i] == tab[j] && j>i))
                left++;
    }
        cout << tab [i] << ": " <<left <<endl;
        if(taille%2==1 && left == taille /2 ) {
            cout << "mediane " <<tab[i]<<endl;
        }
        else if (taille%2 == 0 && (left ==taille/2 || left ==taille/2 -1 ))
      cout << "mediane " <<tab[i]<<endl;
    }
    cout << taille/2 <<endl;}
*/

int main()
{
  int TAILLE;
  int k;
  cout << "entrer le nombre de TAILLE: ";
  cin >> TAILLE;
  int tabl[TAILLE];
   
  saisirTableau(tabl,TAILLE);
  afficherTableau(tabl,TAILLE);

  int max = -100000, a;
  //int compteur[max+1];
  /*for (int k=0; k<TAILLE; k++)
    {
      if (tabl[k]>max)
	{max=tabl[k];
	  a=k;
	}
    }
  cout << "l'entier le plus grand saisi: " << max << endl;
  cout << "son indice dans le tableau est: " << a+1 << endl;
  */
  //cout << max ;
  indiceMax(tabl,TAILLE,max);
  int compteur[max+1];
  compte(tabl,TAILLE,compteur,max);
}      

