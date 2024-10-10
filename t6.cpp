
#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void printplayer();
void printenemy1();
void printenemy2();
void printenemy3();
void printenemy4();
int ex=45,ey=30;
int px=60,py=45;
int ex2=50,ey2=4;
int ex3=45,ey3=15;
int ex4=75,ey4=15;
main()
{
system("cls");
printMaze();
printplayer();
printenemy1();
printenemy2();
printenemy3();
printenemy4();
}
void printMaze()
{                                         
cout<<"                                       +---------------------------------------------------------+"<<endl;
cout<<"                                       |#########################################################|"<<endl;
cout<<"                                       |#                                                       #|"<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#                                                       #| "<<endl;
cout<<"                                       |#########################################################| "<<endl;
cout<<"                                       +---------------------------------------------------------+ "<<endl;
}
void printplayer()
{
gotoxy(px,py);
cout<<"       ****    "<<endl;
gotoxy(px,py+1);
cout<<"       ****      "<<endl;
gotoxy(px,py+2);
cout<<"       ****  "<<endl;
gotoxy(px,py+3);
cout<<"       ****       "<<endl;
gotoxy(px,py+4);
cout<<"******************"<<endl;
gotoxy(px,py+5);
cout<<"*******PPPP*******     "<<endl;
gotoxy(px,py+6);
cout<<"*******PPPP*******      "<<endl;
gotoxy(px,py+7);
cout<<"******************     "<<endl;
gotoxy(px,py+8);
cout<<"******************         "<<endl;
gotoxy(px,py+9);
cout<<"******************         "<<endl;
}
void printenemy1()
{
gotoxy(ex,ey);
cout<<"       ****    "<<endl;
gotoxy(ex,ey+1);
cout<<"       ****      "<<endl;
gotoxy(ex,ey+2);
cout<<"       ****  "<<endl;
gotoxy(ex,ey+3);
cout<<"******************      "<<endl;
gotoxy(ex,ey+4);
cout<<"******************     "<<endl;
gotoxy(ex,ey+5);
cout<<"******************     "<<endl;
gotoxy(ex,ey+6);
cout<<"******************      "<<endl;
gotoxy(ex,ey+7);
cout<<"****          ****     "<<endl;
gotoxy(ex,ey+8);
cout<<"****          ****         "<<endl;
gotoxy(ex,ey+9);
cout<<"****          ****         "<<endl;
}
void printenemy2()
{
gotoxy(ex2,ey2);
cout<<"         ****          ****         "<<endl;
gotoxy(ex2,ey2+1);
cout<<"         ****          ****            "<<endl;
gotoxy(ex2,ey2+2);
cout<<"         ****          ****    "<<endl;
gotoxy(ex2,ey2+3);
cout<<"         ****          **** "<<endl;
gotoxy(ex2,ey2+4);
cout<<"         ******************      "<<endl;
gotoxy(ex2,ey2+5);
cout<<"         ******************     "<<endl;
gotoxy(ex2,ey2+6);
cout<<"         ******************     "<<endl;
gotoxy(ex2,ey2+7);
cout<<"                ****      "<<endl;
gotoxy(ex2,ey2+8);
cout<<"                ****     "<<endl;
gotoxy(ex2,ey2+9);
cout<<"                ****         "<<endl;
}
void printenemy3()
{
gotoxy(ex3,ey3);
cout<<"**************              "<<endl;
gotoxy(ex3,ey3+1);
cout<<"**************                "<<endl;
gotoxy(ex3,ey3+2);
cout<<"**************            "<<endl;
gotoxy(ex3,ey3+3);
cout<<"          ****      "<<endl;
gotoxy(ex3,ey3+4);
cout<<"          ********     "<<endl;
gotoxy(ex3,ey3+5);
cout<<"          ********    "<<endl;
gotoxy(ex3,ey3+6);
cout<<"          ********      "<<endl;
gotoxy(ex3,ey3+7);
cout<<"          ****     "<<endl;
gotoxy(ex3,ey3+8);
cout<<"          ****         "<<endl;
gotoxy(ex3,ey3+9);
cout<<"**************         "<<endl;
gotoxy(ex3,ey3+10);
cout<<"**************         "<<endl;
gotoxy(ex3,ey3+11);
cout<<"**************         "<<endl;
}
void printenemy4()
{
gotoxy(ex4,ey4);
cout<<"    **************  "<<endl;
gotoxy(ex4,ey4+1);
cout<<"    **************  "<<endl;
gotoxy(ex4,ey4+2);
cout<<"    **************  "<<endl;
gotoxy(ex4,ey4+3);
cout<<"    ****      "<<endl;
gotoxy(ex4,ey4+4);
cout<<"********     "<<endl;
gotoxy(ex4,ey4+5);
cout<<"********     "<<endl;
gotoxy(ex4,ey4+6);
cout<<"********      "<<endl;
gotoxy(ex4,ey4+7);
cout<<"    ****    "<<endl;
gotoxy(ex4,ey4+8);
cout<<"    ****         "<<endl;
gotoxy(ex4,ey4+9);
cout<<"    ************** "<<endl;
gotoxy(ex4,ey4+10);
cout<<"    ************** "<<endl;
gotoxy(ex4,ey4+11);
cout<<"    **************  "<<endl;
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}