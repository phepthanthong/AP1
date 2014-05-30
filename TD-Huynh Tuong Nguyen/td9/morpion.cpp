#include <iostream>
#include <cstdlib>
using namespace std;

#define col_num 13
#define line_num 13

void hienhinh (int grille[][3], int & line_grille, int & col_grille);
void playing (int grille[][3], bool & player);
void kiemtra (int grille[][3], bool player);
void chidan();

/*************************************************************************/

int main ()
{
  int grille[3][3];
  bool player = true;
  int line_grille=0, col_grille=0, replay=0;
 
  for (int i=0; i<3;i++)
    for (int j=0;j<3;j++)
      grille[i][j]=0;
     
  while (replay!=10)
  {
  system("clear");
  if (replay==9)  // choi het van ma khong co thang thua thi reset, replay
    for (int i=0; i<3;i++)
      for (int j=0;j<3;j++)
      {grille[i][j]=0; replay=0;}
  kiemtra (grille, player);
  chidan();
  hienhinh (grille, line_grille, col_grille);
  playing (grille, player);
  replay++;
  }
}


/**********************************************************************/

void hienhinh (int grille[][3], int & line_grille, int & col_grille)
{
  for (int i=0; i<line_num; i++)
    {
      if (i % 4 == 0)
    {
      for (int j=0; j<col_num; j++)
        {
          if (j % 4 == 0)
        cout << "+ ";
          else
        cout << "- ";
        } 
    }
      else
    for (int j=0; j<col_num; j++)
        {
          if (j % 4 == 0)
        cout << "| ";
          else if ((i==2 || i==6 || i==10) && (j==2 || j==6 || j==10))
        {
          if (grille[line_grille][col_grille] == 1)
            cout << "X " ;
          else if(grille[line_grille][col_grille] == 2)
            cout << "O ";
          else
            cout << "  ";
          col_grille++;
          if (col_grille == 3)
            {
              col_grille =0 ;
              line_grille++;
            }
        }
          else
        cout << "  ";
        } 
      cout << endl;
    }
    line_grille=0;
}

void playing (int grille[][3], bool & player)
{
  int c=0;
  bool check =false;
  if (player)
  {
    cout << "player 1 chon position: ";
    while(!check)
    {
      cin >> c;
      c-=1;
   
      if (grille[c/3][c%3]==0)
    {
      grille[c/3][c%3]=1;
      check = true;
      player = false;
    }
    }
  }
  else
  {
    cout << "player 2 chon position: ";
    while(!check)
    {
      cin >> c;
      c-=1;   
      if (grille[c/3][c%3]==0)
    {
      grille[c/3][c%3]=2;
      check = true;
      player = true;
    }
    }
  }
}

void kiemtra(int grille[][3], bool player)
{
  for (int i=0; i<3; i++)
    {
      if ((grille[i][0] != 0 && grille[0][i] != 0) &&
      ((grille[i][0]==grille[i][1] && grille[i][1]==grille[i][2]) ||
        (grille[0][i]==grille[1][i] && grille[1][i]==grille[2][i])))
    {
      if (!player)
        cout << "Felicitation player 1. You are the winner !!!" << endl;
      else
        cout << "Felicitation player 2. You are the winner !!!" << endl;
      exit(0);
    }
    }
  if (grille[1][1] != 0  &&
((grille[0][0]==grille[1][1] && grille[1][1]==grille[2][2]) ||
       (grille[0][2]==grille[1][1] && grille[1][1]==grille[2][0])))
    {
      if (!player)
        cout << "Felicitation player 1. You are the winner !!!" << endl;
      else
        cout << "Felicitation player 2. You are the winner !!!" << endl;
     exit(0);
    }
}
void chidan()
{
  cout << "Chon 1 so theo so thu tu nhu trong khung hinh sau de choi\n";
  cout << "\t\t+ - - - + - - - + - - - +\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t|   1   |   2   |   3   |\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t+ - - - + - - - + - - - +\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t|   4   |   5   |   6   |\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t+ - - - + - - - + - - - +\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t|   7   |   8   |   9   |\n";
  cout << "\t\t|       |       |       |\n";
  cout << "\t\t+ - - - + - - - + - - - +\n\n";
  cout << "**************************************************************\n";
  cout << "**************************************************************\n\n";
}
