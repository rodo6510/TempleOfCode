#include <stdio.h>
#include <string.h>
#include <time.h>
                              struct structStar{
                          int x;int y;int t;};struct
                       structStar a[30];;void putpixel(
                     int x,int y,int t){printf("%c[%d;%df"
                    ,0x1B,y,x);if(t==1)t=46;;if(t==2)t=111;
                   if(t==3)t=37;if(t==4)t=32;putchar(t);}int
                   main(){int i=0;;memset(a,0,sizeof(a));for
                  (i=0;i<30;i++){a[i].x=rand()%80;a[i].y=rand
                  (i)%25;;a[i].t=rand()%3;}printf("\033c");;;
                  while(1){for(i=0;i<30;i++){putpixel(a[i].x,
                  a[i].y,4);;switch(a[i].t){case 0:a[i].x-=1;
                   break;case 1:a[i].x-=2;break;case 2:a[i].
                   x-=3;;;break;}if(a[i].x<=0){a[i].x=80;a[i
                    ].y=rand()%25;a[i].t=rand()%3;}putpixel
                     (a[i].x,a[i].y,a[i].t+1);}usleep(50000
                       );}};;//*GREETINGS FROM PLANET*//;
                          eternal(void){//*DEKADENCE*//
                              }//*WE LUV YOU ALL*//
                              
