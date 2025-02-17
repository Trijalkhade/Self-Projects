#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
#include<dos.h>
int main()
{
     int gd=DETECT,gm,s;
     initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
     //Draw Hut
     setcolor(WHITE);
     rectangle(150,180,250,300);
     rectangle(250,180,420,300);
     rectangle(180,250,220,300);
     line(200,100,150,180);
     line(200,100,250,180);
     line(200,100,370,100);
     line(370,100,420,180);
     delay(500);
     cout<<"\n 1.Tranlation \n 2.Scaling \n 3.Rotation";
     cout<<"\n Select Transformation :";
     cin>>s;
     switch(s)
     {
	  case 1: cout<<"\n Tranlation";
		   delay(1000);
		   cleardevice();
		   int tx=100,ty=100;
		   rectangle(150+tx,180+ty,250+tx,300+ty);
		   rectangle(250+tx,180+ty,420+tx,300+ty);
		   rectangle(180+tx,250+ty,220+tx,300+ty);
		   line(200+tx,100+ty,150+tx,180+ty);
		   line(200+tx,100+ty,250+tx,180+ty);
		   line(200+tx,100+ty,370+tx,100+ty);
		   line(370+tx,100+ty,420+tx,180+ty);
		  break;
	  case 2: cout<<"\n Scaling";
		  delay(1000);
		   cleardevice();
		   float sx=0.5,sy=0.5;
		   rectangle(150*sx,180*sy,250*sx,300*sy);
		   rectangle(250*sx,180*sy,420*sx,300*sy);
		   rectangle(180*sx,250*sy,220*sx,300*sy);
		   line(200*sx,100*sy,150*sx,180*sy);
		   line(200*sx,100*sy,250*sx,180*sy);
		   line(200*sx,100*sy,370*sx,100*sy);
		   line(370*sx,100*sy,420*sx,180*sy);
		  break;

	  case 3: cout<<"\n Rotation";
	  delay(1000);
	   cleardevice();

		  break;
	  default : cout<<"\n Wrong Transformation is selected";
		  break;
     }
     getch();
     closegraph();
     return 0;
}