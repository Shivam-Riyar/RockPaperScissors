#include<iostream>
#include<process.h>

using namespace std;

void decidewin(char p1, char p2)
{
 if(p1==p2)
 {
  cout<<"\n DRAW " ;
 }
 else
 {
  switch(p1)
  {
   case 'r' :
   case 'R' : if(p2=='s' || p2=='S')
	      cout<<"\n PLAYER 1 WINS ";
	      if(p2=='p' || p2=='P')
	      cout<<"\n PLAYER 2 WINS ";

	      break;
   case 'p' :
   case 'P' : if(p2=='r' || p2=='R')
	      cout<<"\n PLAYER 1 WINS ";
	      if(p2=='s' || p2=='S')
	      cout<<"\n PLAYER 2 WINS ";

	      break;
   case 's' :
   case 'S' : if(p2=='p' || p2=='P')
	      cout<<"\n PLAYER 1 WINS ";
	      if(p2=='r' || p2=='R')
	      cout<<"\n PLAYER 2 WINS ";

	      break;
   case 'n' :
   case 'N' : exit(0);
	      break;
   default : cout<<"\n WRONG CHOICE !!!!";
   }
  }
}
int main()
{
 char pc1,pc2;
 
 while(1)
 {
  cout<<"\n ENTER PLAYER 1 CHOICE : ";
  cin>>pc1;
  cout<<"\n ENTER PLAYER 2 CHOICE : ";
  cin>>pc2;
  decidewin(pc1,pc2);
  
 }
 return 0;
}
