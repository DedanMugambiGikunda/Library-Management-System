
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<time.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#define RETURNTIME 15






    /*********************************************FUNCTIONS FOR AESTHETIC PURPOSES***************************************************/
void printBoxSlowly(void);
void printBox(void);
void clearArea(int,int,int,int);
void gotoxy(short x, short y);
void goodbye(int,int);
int t(void);
void delay (unsigned int mseconds);
/********************************************* FUNCTIONS *********************************************************/
char catagories[][20]={"Engineering","Health Science","Humanities","Theology","Mathematics","Electronics"};
void mainmenu();




/******************************************* GLOBAL VARIABLES ****************************************************/
int s;
char findbook;
char password[10]={"fcit"};
struct date
{
	int dd,mm,yy;
};
struct books
{
 int id;
 char name[30];
 char bookname[30];
 char author[30];
 char *cat;
 int quantity;
 float price;
 int count;
 int rackno;
 struct date issuedate;
 struct date duedate;
};
struct books x;

FILE *fp,*ft,*fs;

/******************************************* MAIN FUNCTION *******************************************************/
void main(){
 system("mode con: cols=200 lines=80");
 HWND hWnd = GetConsoleWindow();
 ShowWindow(hWnd,SW_SHOWMAXIMIZED);
 mainmenu();

}

/***************************************** FUNCTION DEFINITION ***************************************************/
void mainmenu();{
	printBoxSlowly();
    gotoxy(75,31);
    t();
    gotoxy(75,10);
    printf("WELCOME TO COUNTY LIBRARY MANAGEMNET");
    gotoxy(55,12);
    printf("1.STUDENTS USE");
    gotoxy(55,13);
    printf("2.OFFICE USE");
    gotoxy(55,14);
    printf("3.EXIT");
    gotoxy(55,16);
    printf("CHOOSE ONE: ");
    char ch;
    ch = getch();
    	switch(ch){
    		case '1':
    		 students();
    		 break;
    		case '2':
    		 office();
    		 break;
		    case '3':
             goodbye(13,4);
             break;
		}

}
  int t(void){
	time_t t;
	time(&t);
	printf("%s",ctime(&t));
	return 0;
}
