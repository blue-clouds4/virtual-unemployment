#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>  // For delay()

void col(int color,int tc){

    //BLACK` =0
    //`BLUE` =1
    //`GREEN` = 2
    //`CYAN` = 3
    //`RED` = 4
    //`MAGENTA` = 5
    //`BROWN` = 6
    //`LIGHTGRAY` = 7
    //`DARKGRAY` = 8
    //`LIGHTBLUE` = 9
    //`LIGHTGREEN` = 10
    //`LIGHTCYAN` = 11
    //`LIGHTRED` = 12
    //`LIGHTMAGENTA` =13
    //`YELLOW` = 14
    // `WHITE` = 15
    if(color==0)
    textbackground(BLACK);
    if(color==1)
    textbackground(BLUE);
    if(color==2)
    textbackground(GREEN);
    if(color==3)
    textbackground(RED);
    if(color==4)
    textbackground(MAGENTA);
    if(color==5)
    textbackground(BROWN);
    if(color==6)
    textbackground(LIGHTGRAY);
    if(color==7)
    textbackground(DARKGRAY);
    if(color==8)
    textbackground(LIGHTBLUE);
    if(color==9)
    textbackground(LIGHTGREEN);
    if(color==10)
    textbackground(LIGHTCYAN);
    if(color==11)
    textbackground(LIGHTRED);
    if(color==12)
    textbackground(LIGHTMAGENTA);
    if(color==13)
    textbackground(YELLOW);
    if(color==14)
    textbackground(WHITE);

    if(tc==0)
    textcolor(BLACK);
    if(tc==1)
    textcolor(BLUE);
    if(tc==2)
    textcolor(GREEN);
    if(tc==3)
    textcolor(RED);
    if(tc==4)
    textcolor(MAGENTA);
    if(tc==5)
    textcolor(BROWN);
    if(tc==6)
    textcolor(LIGHTGRAY);
    if(tc==7)
    textbackground(DARKGRAY);
    if(tc==8)
    textcolor(LIGHTBLUE);
    if(tc==9)
    textcolor(LIGHTGREEN);
    if(tc==10)
    textcolor(LIGHTCYAN);
    if(tc==11)
    textcolor(LIGHTRED);
    if(tc==12)
    textcolor(LIGHTMAGENTA);
    if(tc==13)
    textcolor(YELLOW);
    if(tc==14)
    textcolor(WHITE);
    clrscr();
}

void intro() {
    randomize();
    system("mode 80,25");  // Set screen size (may not work in DOSBox)
    int bgcol=0,tcol=0;
    int screenWidth = 80, row = 12;

    clrscr();
    col(1,13);
    gotoxy((screenWidth - 14) / 2, row);  // centered text
    cprintf("Okay, here we go");
    delay(3000);

    col(12,9);
    clrscr();
    gotoxy((screenWidth - 5) / 2, row);  // centered "focus"
    cprintf("Focus");
    delay(2000);

    col(8,12);
    clrscr();
    gotoxy((screenWidth - 15) / 2, row);  // centered "I need this job"
    cprintf("I need this job");
    delay(2000);

    col(11,13);
    clrscr();
    gotoxy((screenWidth - 21) / 2, row);  // centered "Virtual Unemployment"
    cprintf("Virtual Unemployment");
    delay(3000);
    while(!kbhit()){
    bgcol=random(15);
    tcol=random(15);
    if(bgcol!=tcol)
    col(bgcol,tcol);
    else
    col((random(15)),(random(15)));
    gotoxy((screenWidth - 24) / 2, row + 2);  // centered "Press any key to continue"
    cprintf("Press any key to continue");
    delay(2500);
    }
    clrscr();
    cprintf("i gave up in the project because i lost interest in it when i learnt that i can't add proper music to this game :c");
    clrscr();
    }

    int main(){
    intro();
    getch();
    return 0;
    }
