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
cout<<"~~>ajja bsdk";
}
int main ()
{
	int x=30,y=20;
	for (int i=0;i<15;i++)
	{

	system("Color A4");
	cout<<"\t\t\tMADE BY VIKAS";
	system("Color E4");
	
}
	
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
		case 27:
		exit(0);
		break;
		
		
		}
        system("cls");
	    gotoxy(x,y);
		cout<<" ~~->vikas~~->";
		if(x==29&&y==11)
		{
			
			cout<<"\nYou Lost asshole";
			sleep(2);
			exit(0);
		}
		

	
	}
	
}
