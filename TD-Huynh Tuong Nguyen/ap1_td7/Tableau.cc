// Tableau.cc

#include<iostream>
#include "Tableau.h"

using namespace std;


/**********************************************
 FONCTIONS DE SAISIES ET AFFICHAGES
 **********************************************/

// Fonction "locale" utilisée pour les saisies
// Force la saisie d'un entier entre 1 et n
int
nombreValide(int n)
{
  int i;

  do {
    cin >> i;
  }while (i < 1 || i > n);

  return i;
}

// Permet de saisir un tableau quelconque (taille et éléments)
void
saisirTableau(int tab[], int & taille, int max)
{
  int i;

  cout << "Entrez la taille (entre 1 et " << max << ") :" << endl;
  taille = nombreValide(max);

  cout << "Entrez les éléments :" << endl;
  for( i = 0 ; i < taille ; i++ )
    cin >> tab[i];
}

// Permet de saisir un tableau (taille et éléments) en le triant
void
saisirTableauTrie(int tab[], int & taille, int max)
{
  int i, val;

  cout << "Entrez la taille (entre 1 et " << max << ") :" << endl;
  taille = nombreValide(max);

  cout << "Entrez les éléments :" << endl;
  for( i = 0 ; i < taille ; i++ )
  {
    cin >> val;
    ajouterTrie(tab, i, val);
  }
}

// Permet d'afficher les éléments d'un tableau
void
afficherTableau(int tab[], int taille)
{
  int i;
  for( i = 0 ; i < taille ; i++)
    cout << tab[i] << " ";
  cout << endl;
}


/**********************************************
 FONCTIONS DE RECHERCHE (POSITION ELEM)
 **********************************************/

// NON TRIE
// Recherche séquentielle
// Retourne la position de elem dans tab, -1 si elem est absent
int
cherchePosSeq(int tab[], int taille, int elem)
{
  int pos = 0;
  bool trouve = false;
  
  while (!trouve && pos < taille)
    if (elem == tab[pos])
      trouve = true;
    else
      pos++;
  
  if (!trouve)
    pos = -1;
 
  return pos;
}

// TRIE
// Recherche dichotomique
// Retourne la position de elem dans tab, -1 si elem est absent
int
cherchePosDicho(int tab[], int taille, int elem)
{
  int gauche, droite, milieu;
  bool trouve;
  
  gauche = 0;
  droite = taille-1;
  trouve = false;

  while (!trouve && gauche <= droite)
    {
      milieu = (gauche + droite) / 2;
      if (elem == tab[milieu])
	trouve = true;
      else
       	if (elem < tab[milieu])
	  droite = milieu + 1;
	else
	  gauche = milieu - 1;
    }
    
  if (!trouve)
    milieu = -1;
  
  return milieu;
}


/**********************************************
 FONCTIONS DE SUPPRESSION
 **********************************************/



/**********************************************
 FONCTIONS D'AJOUT
 **********************************************/

// NON TRIE
// Ajout d'un élément dans un tableau non trié
// suppose que le tableau n'est pas plein
void
ajouterNonTrie(int tab[], int & taille, int elem)
{
  tab[taille] = elem;
  taille++;
}


// Fonction "locale" utilisée par ajouterTrie
// Retourne la position à laquelle Elem peut être ajouté dans tab
// (basée sur une recherche séquentielle)
int
cherchePosAjout(int tab[], int taille, int elem)
{
  int pos = 0;
  bool trouve = false;

  while (!trouve && pos < taille)
    if (elem <= tab[pos])
      trouve = true;
    else
      pos++;
  
  return pos;
}

// Fonction "locale" utilisée par ajouterTrie
// Décale vers la droite tous les éléments de tab à partir de la position indice
void
decalageDroite(int tab[], int & taille, int indice)
{
  int i;
  for (i = taille ; i >= indice ; i--)
    tab[i] = tab[i-1];
      
  //taille++;
}


// TRIE
// Ajout d'un élément dans un tableau trié
// suppose que le tableau n'est pas plein
void
ajouterTrie(int tab[], int & taille, int elem)
{
  int pos;
  pos = cherchePosAjout(tab, taille, elem);
  decalageDroite(tab, taille, pos);
  tab[pos] = elem;
}
