#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void  distribution();
void option();
float y=0,x=0,f=1.55,n=640,poi1=0,poi2=0;
void celebration()
{if(poi1>poi2)
{outtextxy(200,200,"P1 Wins");
delay(2000);
}
else{outtextxy(200,200,"P2 Wins");
delay(2000);
}  }

 char warning[]="weapon already used choose another";

char lim1[]="0000000000";
char lim2[]="0000000000";
void credit()
 {int d=0,g=0;
initgraph(&d,&g," ");
 char m[]="MADHUKAR GUPTA";
 char n[]="NAMAN OMAR";
 while(!kbhit())
 {setbkcolor(random(15));                            //credit
 settextstyle(0,0,5);
 outtextxy(60,120,m);
 outtextxy(120,280,n);
 delay(100);
 }
 closegraph();
restorecrtmode();
  }

void lr(int finalx,int finaly)
{
 int poly[14];
 poly[0]=finalx;
 poly[1]=10;                                //lightningbolt
 poly[2]=finalx-25;
 poly[3]=(finaly/2)+20;
 poly[4]=finalx-4;
 poly[5]=(finaly/2)+10;
 poly[6]=finalx;
 poly[7]=finaly;
 poly[8]=finalx+25;
 poly[9]=(finaly/2)-20;
 poly[10]=finalx+4;
 poly[11]=(finaly/2)-10;
 poly[12]=finalx;
 poly[13]=10;
 setfillstyle(0,14);
 fillpoly(7,poly);
 delay(200);
  setfillstyle(0,0);
  setcolor(0);
 drawpoly(7,poly);
 }

void bigshot(int finalx,int finaly)
{int x=random(100);
 int z=random(100);
 int a=random(50);
 int p=0;
 while(p<=7)
 {setcolor(RED);
  for(int i=0;i<=a;i++)
   {circle(finalx,finaly,i);delay(5);
   }
  setcolor(getbkcolor());
  for( i=0;i<=a;i++)
   { circle(finalx,finaly,i);delay(5);
   }
  p++;
 }
}



void nuke(int finalx,int finaly)
{ for(int i=0;i<50;i++)
 {setcolor(random(15));
  circle(finalx,finaly,i);
  delay(20);
 }                                                     //nuke
 for(int j=50;j>=0;j--)
 {circle(finalx,finaly,j);
  delay(20);
  setcolor(getbkcolor());
 }
}



void spacelaser(int finalx,int finaly)
{
  for(int i=0;i<=finaly;i++)
   {setcolor(3);
    line(finalx-10,0,finalx-10,i);
    line(finalx+10,0,finalx+10,i);
    delay(10);
    }
 for(int j=finaly;j>=0;j--)
 { setcolor(3);
  line(finalx-10,0,finalx-10,i);
  line(finalx+10,0,finalx+10,i);
  setcolor(15);
  circle(finalx,j,10);delay(10);
  setcolor(getbkcolor());                                  //space laser
  circle(finalx,j,10);
 }
 delay(2000);
 if(j<10)
 {for(int k=0;k<=finaly;k++)
  {setcolor(3);
   line(finalx-10,0,finalx-10,i);
   line(finalx+10,0,finalx+10,i);
   setcolor(15);
   circle(finalx,k,10);delay(5);
   setcolor(getbkcolor());
   circle(finalx,k,10);
 }}
  line(finalx-10,finaly,finalx-10,0);
  line(finalx+10,finaly,finalx+10,0);
}
void  chainreaction(int finalx, int finaly)
{
 int p=0;
 while(p<=7)
 {
 int x=random(10);                               //chain reaction
 int z=random(10);
 int a=random(50);
 setcolor(RED);
  for(int i=0;i<=a;i++)
   {circle(finalx+x,finaly-z,i);delay(5);
   }
  setcolor(getbkcolor());
  for( i=0;i<a;i++)
   { circle(finalx+x,finaly-z,i);delay(5);
   }
  p++;
 }
}
void creeper(int finalx)
{   for(int m=finalx;m<=finalx+120;m++)
	{setcolor(WHITE);
	circle(m,275,3);
	delay(8);                                       //creeper
	setcolor(getbkcolor());
	circle(m,275,3);
	}
  }
void creeper1(int finalx)
{   for(int m=finalx;m>=finalx-120;m--)
	{setcolor(WHITE);
	circle(m,275,3);
	delay(8);                                       //creeper
	setcolor(getbkcolor());
	circle(m,275,3);
	}
  }
void lightning(int finalx,int finaly)
{ int z,j,k,m,x;


for(int l=0;l<=10;l++)
{setcolor(BLUE);
m=random(2);
 switch(m)
 {case 0:x=finalx+20;break;
  case 1:x=finalx-20;break;
  default:x=finalx;}
 for(int i=0;i<finaly-30;  )
 {j=i+15;                           //lightning rod
  k=random(5);
  switch(k)
  {case 0:z=x+5;break;
   case 1:z=x-5;break;
   case 2:z=x+10;break;
   case 3:z=x-10;break;
   case 4:z=x;break;
   }
   line(x,i,z,j);
   i=j;
   x=z;
  }line(x,i,finalx,finaly); delay(500);

   for(int n=0;n<=finaly;n++)
   {setcolor(getbkcolor());
   line(x-100,n,x+100,n);
   }}
    }

void jackhammer(int finalx,int finaly)
{ int j=0,a=6,b,c;
  for( c=finaly;c>=finaly-60;c--)
  { setcolor(WHITE);                         //jackhammer
    circle(finalx,c,6);delay(5);
    setcolor(getbkcolor());
    circle(finalx,c,6);delay(5);
  }
  x:
  for(int i=finaly-60;i<=finaly;i++)
   {
    setcolor(WHITE);
    circle(finalx,i,a);delay(5);
    setcolor(getbkcolor());
    circle(finalx,i,a);delay(5);
    }
     b=--a;
     for(int f=finaly;f>=finaly-60;f--)
   {
    setcolor(WHITE);
    circle(finalx,f,b);delay(5);
    setcolor(getbkcolor());
    circle(finalx,f,b);delay(5);
    }
    a=a-1;
    if(j<=5)
     {j++;
      goto x;
     }

}
void meteors(int finalx,int finaly)
{for(int i=1;i<=15;i++)
{int x=random(100);
for(int r=0;r<=finaly;r++)
{ setcolor(BROWN);
circle(finalx+x-50,r,3);                            //meteor shower
delay(1);
setcolor(getbkcolor());
circle(finalx+x-50,r,3);
}}}


void point1(int finalx,int i)
{if(finalx>(n-::y-45)&&finalx<(n-::y-5))
{ ::poi1=::poi1 +i;
 gotoxy(19,25);
 cout<<::poi1;}}              //points for player1



 void point2(int finalx,int i)
 {if(finalx>(::x-5)&&finalx<(::x+45))
 {::poi2=::poi2 +i;
 gotoxy(59,25);
 cout<<::poi2;}}                   //points for player 2


int projectile2(char h,float e,float u)
{ float a,b;
int finalx,finaly;
if(lim1[h-48]=='1')
{setcolor(WHITE);
outtextxy(200,200,warning);
delay(1000);
setcolor(BLACK);
outtextxy(200,200,warning);
return(1);}
else
{for(a=0;a<=n&&b>=-22;a++)
     {
       setbkcolor(0);
       b=(a*tan(0.0174*e))-((a*a*f)/(u*(cos(0.0174*e)*cos(0.0174*e))));
       circle(n-(a+::y+25),480-b-222,3);
       delay(5);                                                                //projectile of player 2
       setcolor(getbkcolor());
       circle(n-(a+::y+25),480-b-222,3);
       setcolor(WHITE);
	finalx=n-(a+::y+25);
	finaly=480-b-222;

 }b=0;
  switch(h)
  {case '1':meteors(finalx,finaly);point2(finalx,50); break;
  case '2':creeper1(finalx);point2(finalx,20);break;
  case '3':spacelaser(finalx,finaly);point2(finalx,60);break;
  case '4':nuke(finalx,finaly);point2(finalx,25);break;
  case '5':bigshot(finalx,finaly);point2(finalx,15);break;
  case '6':lr(finalx,finaly);point2(finalx,60);break;
  case '7':chainreaction(finalx,finaly);point2(finalx,55);break;
  case '8':jackhammer(finalx,finaly);point2(finalx,50);break;
  case '9':lightning(finalx,finaly);point2(finalx,70);
  }lim2[h-48]='1';
  return(0);}
 }



int projectile1(char h,float e,float u)
{ float a,b;
int finalx,finaly;
if(lim1[h-48]=='1')
{setcolor(WHITE);
outtextxy(200,200,warning);
delay(1000);
setcolor(BLACK);
outtextxy(200,200,warning);
return(1); }
 else
{for(a=0;a<=n&&b>=-22;a++)
     {
       setbkcolor(0);
       b=(a*tan(0.0174*e))-((a*a*f)/(u*(cos(0.0174*e)*cos(0.0174*e))));
       circle(a+::x+25,480-b-222,3);
       delay(5);
       setcolor(getbkcolor());
       circle(a+::x+25,480-b-222,3);                                                 //player 1 projectile
       setcolor(WHITE);
	finalx=a+::x+25;
	finaly=480-b-222;

 }b=0;
  switch(h)
  {case '1':meteors(finalx,finaly);point1(finalx,50);break;
  case '2':creeper(finalx);point1(finalx,20);break;
  case '3':spacelaser(finalx,finaly);point1(finalx,60);break;
  case '4':nuke(finalx,finaly);point1(finalx,25);break;
  case '5':bigshot(finalx,finaly);point1(finalx,15); break;
  case '6':lr(finalx,finaly);point1(finalx,60); break;
  case '7':chainreaction(finalx,finaly);point1(finalx,55);break;
  case '8':jackhammer(finalx,finaly);point1(finalx,50);break;
  case '9':lightning(finalx,finaly); point1(finalx,70);}
  lim1[h-48]='1';
  return(0);}
  }



void distribution()
{int wx=0,wy=0;
 initgraph(&wx,&wy," ");
 char h;char h1;
 int i=0;
 float a,c,b,d,g=45,e=45,v=1200,u=1200;
 int finalx,finaly,finalx2,finaly2;
 char *p1="ANGLE";
 char *p2="SCORE";
 char *p3="POWER";
 char *w1="1.Meteor Shower";
 char *w2="2.Creeper";
 char *w3="3.Space Laser";
 char *w4="4.Nuke";
 char *w5="5.Big Shot";
 char *w6="6.Lightning Bolt";
 char *w7="7.Chain Reaction";
 char *w8="8.Jack Hammer";
 char *w9="9.Lightning Rod";
 char *w10="0.Single Shot";
 char *w="WEAPONS";
 rectangle(0,320,640,480);
 setfillstyle(SOLID_FILL,9);                                    //main game begins
 floodfill(320,360,getmaxcolor());
      rectangle(0,280,640,370);
      setfillstyle(SOLID_FILL,10);
 floodfill(320,300,getmaxcolor());
      rectangle(10,380,100,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(60,390,getmaxcolor());
      rectangle(110,380,200,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(120,390,getmaxcolor());
      rectangle(210,380,300,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(230,390,getmaxcolor());
      rectangle(330,380,420,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(350,390,getmaxcolor());
      rectangle(430,380,520,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(450,390,getmaxcolor());
      rectangle(530,380,620,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(550,390,getmaxcolor());
      rectangle(530,380,620,410);
      setfillstyle(SOLID_FILL,0);
 floodfill(580,390,getmaxcolor());
 line(320,370,320,480);
 outtextxy(5,332,w10);
 outtextxy(5,346,w1);
 outtextxy(5,360,w2);
 outtextxy(155,332,w3);
 outtextxy(155,346,w4);
 outtextxy(155,360,w5);
 outtextxy(305,332,w6);
 outtextxy(305,346,w7);
 outtextxy(305,360,w8);
 outtextxy(455,346,w9);
 outtextxy(30,420,p1);
 outtextxy(135,420,p2);
 outtextxy(235,420,p3);
 outtextxy(350,420,p1);
 outtextxy(450,420,p2);
 outtextxy(550,420,p3);
 char* r="PLAYER1";
 char* p="PLAYER2";
 char z;char z1;
 outtextxy(130,460,r);
 outtextxy(450,460,p);
 gotoxy(7,25);
 cout<<e;
 gotoxy(47,25);
 cout<<g;
 gotoxy(31,25);cout<<u;
 gotoxy(71,25);cout<<v;
 gotoxy(19,25);cout<<::poi1;
 gotoxy(59,25);cout<<::poi2;
 int kl=0;
 while(kl!=3)
   {
    while(z!=' ')
      {z=getch();
	 if(z==27)break;
	 if(z==77) {::x=::x+1;}
	 if(z==75) {::x=::x-1;}
	 if(z==72) {u=u+100;gotoxy(31,25);cout<<u;}
	 if(z==80) {u=u-100;gotoxy(31,25);cout<<u;}
	 if(z=='z') {e--;gotoxy(7,25);cout<<e;}
	 if(z=='c') {e++;gotoxy(7,25);cout<<e;}
	 if(z==27) break;
	 if(z>='1'&&z<='9')
	    { h=z;}
	 if(z==' ')
	    {if(projectile1(h,e,u)==1)
	      z='o';}
setcolor(15);
 circle(::x+25,270,10);
 rectangle(::x,265,::x+50,279);
    setcolor(getbkcolor());
 rectangle(::x-2,260,::x,279);
 rectangle(::x+50,260,::x+2,279);
 setbkcolor(0);
   }
   while(z1!=' ')
 {z1=getch();

  if(z1==77) {::y=::y-1;}
  if(z1==75) {::y=::y+1;}
  if(z1==72) {v=v+100;gotoxy(71,25);cout<<v;}
  if(z1==80) {v=v-100;gotoxy(71,25);cout<<v;}
  if(z1=='z') {g--;gotoxy(47,25);cout<<g;}
  if(z1=='c') {g++;gotoxy(47,25);cout<<g;}
  if(z1==27) break;
  if(z1>='1'&&z1<='9')
  {h1=z1;
  }

    if(z1==' ')
   { if(projectile2(h1,g,v)==1)
      z1='o';
	      }
setcolor(15);
 circle(n-(y+25),270,10);
 rectangle(n-::y,265,n-(::y+50),279);
    setcolor(getbkcolor());
 rectangle(n-(::y-2),260,n-::y,279);
 rectangle(n-(::y+50),260,n-(::y+2),279);
 setbkcolor(0);
 }kl++;
 z='o';
 z1='o';  }
closegraph();
restorecrtmode();
}



void instruction()
{int z=0,y=0;                                                          //how to play
initgraph(&z,&y," ");
 char a[]= "Welcome to Battle tanks!!" ;
 char b[]="Your Country is in trouble and you are the only hope of the country. U have a";
 char p[]=" tank Equipped with Advanced weapons.Show your bravery and fighting skills.";
 char c[]="Controls:"  ;
 char d[]="@ Tank Movement:" ;
 char e[]="Use right arrow for front movement and left arrow for back movement.";
 char f[]="@ Angle of Projection:";
 char g[]="To increase angle of launch press :c";
 char h[]="To Decrease angle of launch press :z";
 char i[]="@ Press 'space' to fire.";
 char j[]="@ Power of projectile:";
 char k[]="use up & down cursor keys to increase or decrease power.";
 char l[]="ENJOY";
 settextstyle(0,0,2);
 outtextxy(120,10,a);
 settextstyle(0,0,1);
 outtextxy(2,40,b);
 outtextxy(2,55,p);
 settextstyle(3,0,1);
 outtextxy(300,80,c);
 settextstyle(0,0,1);
 outtextxy(2,110,d);
 outtextxy(2,125,e);
 outtextxy(2,155,f);
 outtextxy(2,170,g);
 outtextxy(2,185,h);
 outtextxy(2,215,j);
 outtextxy(2,230,k);
 outtextxy(2,260,i);
 settextstyle(0,0,2);
 outtextxy(280,320,l);
 char w;
 while(w!=27)
  {w=getch();
 if(w==27)
 option(); }
 closegraph();
restorecrtmode();
}




void quit()
{int d=0,g=0;
initgraph(&d,&g," ");
char q[]="DO YOU REALLY WANT TO QUIT ??";
char w;
char r[]="yes"  ;
char s[]="no";
settextstyle(0,0,1);
setbkcolor(18);                                      //quit option

while(w!='n'||w!='y')
{w=getch();
 rectangle(150,150,500,300);
rectangle(200,250,230,265);
rectangle(420,250,450,265);

outtextxy(200,200,q);
outtextxy(205,255,r);
outtextxy(425,255,s);
if(w=='n')
option();
if(w=='y')
break;  }
closegraph();
restorecrtmode();
}




void tank1(int x,int y,char z[],int l,int m,char r[])
{setcolor(1);
outtextxy(80,100,z);
outtextxy(120,200,r);
rectangle(x-25,y,x,y+20);
rectangle(x,y+8,x+10,y+12);
setcolor(9);
rectangle(l-x-25,y+40,l-x,y+60);
rectangle(l-x-25,y+48,l-x-35,y+52);
setcolor(getbkcolor());
rectangle(x-25,y,x,y+20);                                   //startup tank1
rectangle(x,y+8,x+10,y+12);
rectangle(l,y+40,l-x,y+60);

setcolor(RED);
line(x-25,y+20,x,y+20);
line(l,y+60,l-x,y+60);
}




void display()
{int d=0,g=0;
initgraph(&d,&g," ");
int a=getmaxx() ,b=getmaxy(),i;
setbkcolor(15);
setcolor(2);
char q[]="BATTLE";char r[]="TANKS";
settextstyle(0,0,10);
						     //battle tanks
for(i=0;i<=a;i++)
{
 tank1(i,340,q,a,b,r);
}
closegraph();
restorecrtmode();
}





void option()
{int d=0,g=0;
initgraph(&d,&g," ");
char w;
 setbkcolor(0);
  char l[]="1.PLAYER VS PLAYER";
  char h[]="2.HELP";
  char k[]="3.QUIT";
   char p[]="4.CREDIT";
  settextstyle(0,0,3);
 outtextxy(100,100,l);
 outtextxy(100,150,h);                                //options menu
 outtextxy(100,200,k);
 outtextxy(100,250,p);
 w=getch();
  switch(w)
  {case '1':distribution();break;
  case '2':instruction();break;
  case '3':quit();break;
  case '4':credit();
	       }
closegraph();
restorecrtmode();
 }



 void main()
 {display();
  option();  }                                      //the compulsion


