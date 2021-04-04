#include <iostream>
#include <cstdlib>

using namespace std;

char matrix[3][3];//={0};
void DrawBox(void);
int main()
{

int m,n;
char ch='y';
while(ch=='Y'||ch=='y'){
for (m=0;m<3;m++)for (n=0;n<3;n++)matrix[m][n]= '\0';
int i,j,sum=0;
while ( sum < 10){
if (sum == 0) DrawBox();
cout<<"Player 1 is 'X': choose the row and column"<<endl;
cout<<"Row : ";
cin>>i;
cout<<"Column : ";
cin>>j;
for (;i>3 || i<1 || j>3 || j<1 ||('X'==matrix[i-1][j-1]||'O'==matrix[i-1][j-1]);) {cout<<"Sorry boy, but you gotta choose another place.\n";cout<<"row : ";cin>>i;cout<<"column : ";cin>>j;}
matrix[i-1][j-1]='X';
sum++;
DrawBox();

//check if wins
if (matrix[0][0]=='X' && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[2][0]=='X' && matrix[2][0]==matrix[1][1] && matrix[1][1]==matrix[0][2]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[0][0]=='X' && matrix[0][0]==matrix[1][0] && matrix[1][0]==matrix[2][0]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[0][1]=='X' && matrix[0][1]==matrix[1][1] && matrix[1][1]==matrix[2][1]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[0][2]=='X' && matrix[0][2]==matrix[1][2] && matrix[1][2]==matrix[2][2]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[0][0]=='X' && matrix[0][0]==matrix[0][1] && matrix[0][1]==matrix[0][2]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[1][0]=='X' && matrix[1][0]==matrix[1][1] && matrix[1][1]==matrix[1][2]) {cout<<"Player 1 wins"<<endl;break;}
if (matrix[2][0]=='X' && matrix[2][0]==matrix[2][1] && matrix[2][1]==matrix[2][2]) {cout<<"Player 1 wins"<<endl;break;}

if (sum == 9){cout<<"The game is over and no one wins, hahaha, you both stink!!!"<<endl; break;} //sum=9 because there are only 9 boxes in the game
//player 2's turn

cout<<"Player 2 is 'O': choose the row and column"<<endl;
cout<<"Row : ";
cin>>i;
cout<<"Column : ";
cin>>j;
for (;i>3 || i<1 || j>3 || j<1 ||('X'==matrix[i-1][j-1]||'O'==matrix[i-1][j-1]);) {cout<<"Sorry boy, but you gotta choose another place.\n";cout<<"row : ";cin>>i;cout<<"column : ";cin>>j;}
matrix[i-1][j-1]='O';
sum++;
//the play box
DrawBox();
//check if wins
if (matrix[0][0]=='O' && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[2][0]=='O' && matrix[2][0]==matrix[1][1] && matrix[1][1]==matrix[0][2]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[0][0]=='O' && matrix[0][0]==matrix[1][0] && matrix[1][0]==matrix[2][0]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[0][1]=='O' && matrix[0][1]==matrix[1][1] && matrix[1][1]==matrix[2][1]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[0][2]=='O' && matrix[0][2]==matrix[1][2] && matrix[1][2]==matrix[2][2]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[0][0]=='O' && matrix[0][0]==matrix[0][1] && matrix[0][1]==matrix[0][2]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[1][0]=='O' && matrix[1][0]==matrix[1][1] && matrix[1][1]==matrix[1][2]) {cout<<"Player 2 wins"<<endl;break;}
if (matrix[2][0]=='O' && matrix[2][0]==matrix[2][1] && matrix[2][1]==matrix[2][2]) {cout<<"Player 2 wins"<<endl;break;}

}
cout<<"\nWould you like to play again??? (Y - N)\n";
cin>>ch;
}
      system("PAUSE");
      return 0;
}




void DrawBox(void)
{
//the play box
cout << "\n\n\t\t\t Tic Tac Toe in C++";
// cout << "\n\t   Created By: Mr. Jake Rodriguez Pomperada, MAED-IT";
cout << "\n\n";
cout<<"\n\t\t                1   2   3\n"<<endl;
cout<<"\t\t             1  "<<matrix[0][0]<<" | "<<matrix[0][1]<<" | "<<matrix[0][2]<<endl;
cout<<"\t\t               ---|---|---\n";
cout<<"\t\t             2  "<<matrix[1][0]<<" | "<<matrix[1][1]<<" | "<<matrix[1][2]<<endl;
cout<<"\t\t               ---|---|---\n";
cout<<"\t\t             3  "<<matrix[2][0]<<" | "<<matrix[2][1]<<" | "<<matrix[2][2]<<"\n\n\n";
}
