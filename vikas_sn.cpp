#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
using namespace std;

char ch;
  
int gotoxy(int x,int y)
{
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
	return 0;
	
}


int enmy()
{
	
	int ex=29,ey=11;
	gotoxy(ex,ey);
cout<<"";
}
int main ()
{
	int x=30,y=20;
	
	while (1)
	{
	
	enmy();
	ch=getch();
	switch(ch)
	{
		
		
		case 'a':
		    x--;
		    break;
		    
		case 'd':
	     	x++;
		break;
		
		case  'w':
		   y--;
		 break;
		case  's': 
	    y++; 
		break;	
		case 32:
		cout<<" ";
		break;
		
		
		}
     	    gotoxy(x,y);
		cout<<"*";
		
		

	
	}
	
}
