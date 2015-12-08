#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

         		         	 int t1 ;    
                                  int c1=0, c2=0, c3=
                            16; int m1 = 20 , m2 =12, s1 =4;    
                      int px = 0, py =0,pz =0;int c,  ck , x, y, z
                  ,t, n;int i=5,j ; int sx[40]; int ex [40];float ax =0, 
                  /*  */ay=0, az=0 ; float xd, yd, zd,  zx, zy, yx, yz, xy,
                  /*        */xz, xr, yr,zr; typedef  struct { int x, y ; } pt;
                  /*              */typedef struct{int x,y,z;}p3d ;typedef/* */ 
                  /*                     */struct { p3d p0; p3d p1;p3d/*   : */ 
                  /*                            */p2; p3d p3; int/*    ::::: */
		  /* 				       */maxz/*   :::::::::: */
		  /*					    * :::::::::::::: */
		  /*					    * :::::::::::::: */
;}poa;p3d mp3d[8];/*					    * :::::::::::::: */
p3d t0[8] ;pt pob0/*					    * :::::::::::::: */
[4], pob1[4], pob2/*					    * :::::::::::::: */
[4], pob3[4], pob4/*					    * :::::::::::::: */
[4], pob5[4]; poa /*					    * :::::::::::::: */
P[6] ; poa tP [6];poa/*					    * :::::::::::::: */
wk;int sx[40]; int ex[40] ;/*                               * :::::::::::::  */
pt mypts[10]; char o[8000];int scw/*                  */=80; 
int sch=24;void pp(int x,int y,int t1)          {o[x+(y* scw)]= t1;       }void 
line(int x1,int y1,int x2,int y2         , int t1){int dx=abs(x2 - x1) ; 
int dy = abs (y2 - y1 ) ;  int    x_add,  y_add, maxd; if (x1 > x2) x_add = -1;
else x_add = 1 ; if (y1 > y2 )    /*   */y_add=-1;else y_add=1;int x=x1;/*   */
int y=y1; if (dy > dx)maxd=dy;    /*          */else maxd = dx ;int/*    ::: */
act_dx =0, act_dy =0;int c;for    /*                  */(c=0;/*     :::::::: */
c < maxd; c++) {act_dy+= dy;if    /*                     *//* :::::::::::::: */
( act_dy >= maxd  ) { act_dy-=    /*                     *//* :::::::::::::: */
maxd;y+=y_add;}act_dx += dx;if    /*                     *//* :::::::::::::: */
(  act_dx  >=               maxd) /*                     *//* :::::::::::::: */
{act_dx -=           maxd;x+=x_add;}pp (/*               *//* :::::::::::::: */
x,y,t1)       ;}}void pobline(int x1,int y1 ,/*          *//* :::::::::::::: */ 
int      x2,int y2){int tmp, y;long x , m;if(y2!=y1)/*   *//* :::::::::::::: */
{if      /* */(y2 < y1 ) { tmp=y1;y1=y2;y2=tmp;tmp = x1;/*  *         :::::: */
x1=      /*        */x2;x2=tmp;}x=(long) x1 << 8 ; m=((long)(x2/*            */
-x1      /*               */) << 8 ) / (( long ) (y2 - y1) );x+=m; y1++/*    */
;        /*        */for (y=y1; y <= y2; y++) {if ((y >=0)&(y </*     *//*   */  
25       /*  */))if (sx[y] == -16000)sx[y] = x >> 8; else/*     ::::: *//**/
ex[      /**/y]=x >> 8;x += m;}}} void fillpob ( pt/*     ::::::::::: */
 *       vert1list,  int numvert1,  int t1 )/*      ::::::::::::::::: */
{int     /*  */i;pt *curpt ,  *nextpt/*      :::::::::::::::::::::::: */   
;;;      /*       */curpt   =/*       ::::::::::::::::::::::::::::::: */
vert1list/*            *//*   ::::::::::::::::::::::::::::::::::::::: */
;nextpt=vert1list/*    *//*   ::::::::::::::::::::::::::::::::::::::: */
+ 1;for (i=0; i < 25; i++)/*             :::::::::::::::::::::::::::: */
{sx[i]=-16000;ex[i]=-16000;}for (i=1;/*                    :::::::::: */ 
i < numvert1; i++) {pobline( curpt->x, curpt->y,/*                    */ 
nextpt->x, nextpt->y);curpt+=1;nextpt+=1;}nextpt=vert1list;/*         */
pobline(curpt->x, curpt->y, nextpt->x, nextpt->y);for (i=0; i < 25 ; i++) 
/*     */if (sx [i] != -16000) {if (ex[i] == -16000)ex[i]=sx[i];line(sx[i],i,ex
/*             */[i], i, t1);} } int gett1 ( int maxz ) { int t ;;;t = maxz+ 50
/*                      */; return t ; } int main (){mp3d[0].x =i;mp3d [0].y =i
/*        |                        */ ;mp3d[0].z=-i;mp3d[1].x=i; mp3d[1].y =i ;
/*        |                                   */mp3d[1].z=i;mp3d[2].x=i;mp3d[2]
/*        |                                              */.y=-i;mp3d[2].z= -i;
/*        |                                                           */mp3d[3]
/*        |     |                                                            */
/*       _|  _  |/  _   _|  _   _   _  _         _      _                    */
/*      (_| (-' |\ (-| (_| (-' | ) (_ (-' 6 4 . (_) |' (_|                   */
/*                                                       |                   */
/*                    . . . r o t a t i n g   c u b e s  |  s u c k !        */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                       |                   */
/*                                                      _|                   */
/*                                                                    */.x =i ;
/*                                                             */mp3d[3].y = -i;
/*                                                   */mp3d[3].z=i;mp3d[4].x=-i
/*                                   */;mp3d[4].y = i; mp3d[4].z = -i ; mp3d[5]
/*                       */.x = - i ;mp3d [5].y=i;mp3d[5].z =i;mp3d[ 6].x = -i;
/*          */mp3d[6].y = -i; mp3d[6].z = -i ;mp3d[7].x=-i;mp3d[7].y =-i;mp3d[7
].z=i;while(1){memset(o,' ',8000);for(n=0;n<8;n++){xd=mp3d[n].x-px;yd=mp3d[n].y 
-py;zd=mp3d[n].z-pz;           zx=xd*cos(az)-yd*sin(az)-xd;zy=xd*sin(az)+yd*cos
(az) - yd;yx=(     xd+zx) * cos(    ay)-zd * sin(ay)-(xd+zx);yz=(xd+zx)*sin(ay)
+zd*cos(ay    )-zd;xy=(yd+zy)*cos(ax     )-(zd+yz) * sin(ax)-(yd+zy);xz=(yd+zy)
*sin     (ax)+(zd+yz)*cos(ax)-(zd+yz);xr=    yx+ zx; yr = zy + xy ; zr = xz+yz;
     z=(mp3d[n].z+zr+c3);if(z >0){x=((( (mp3d     [n].x + xr)*64)/z) / s1) +m1;
y=((((mp3d[n].y+yr)*64)/z)/s1)+m2;}else{x=((mp3d[n].x +xr) * 64) + m1; y=((mp3d
/**/[n].y+yr)*64) + m2;} t0[n].z=z; t0[n].x=x;/**/t0[n].y=y;}P[0].p0=t0[0];P[0]
/*   */.p1=t0[1]; P[0].p2 =t0[3]; P[0].p3 =/*   */t0[2];P[0].maxz=(t0[0].z + t0
/*        */[1].z+t0[2].z+t0[3].z)/4;/*      :: */P[1].p0 =t0[4];P[1].p1=t0[5];
/*             */P[1].p2=t0[7] ;/*     :::::::: */P[1].p3=t0[6];P[1] .maxz= (t0
/*                   */[4]./*     ::::::::::::: */z + t0 [ 5 ].z + t0 [ 6 ].z +
/*                     *//*  :::::::::::::::::: */t0 [7 ].z )/4; P[2].p0=t0[0];
/*                     *//* ::::::::::::::::::: */P[2]. p1 = t0 [1];P[2].p2=t0[
/*                     *//* ::::::::::::::::::: */5 ] ; P[2].p3=t0[4];P[2].maxz
/*                     *//* ::::::::::::::::::: */     = ( t0 [ 0 ] .z +t0[1].z 
/*                     *//* ::::::::::::::::::: */           + t0 [4].z + t0[5]
/*                     *//* ::::::::::::::::::: */                .z)/4;P[3].p0
/*                     *//* ::::::::::::::::::: */             = t0[2];P[3].p1=
/*                     *//* ::::::::::::::::::: */          t0[3];P[3].p2=t0[7]
/*                     *//* ::::::::::::::::::: */       ;;;;;P [ 3 ] . p3 =t0[
/*                     *//* ::::::::::::::::::: */    6] ; P[3] .maxz = ( t0[2]
/*                     *//* :::::::::::::::     */ .z + t0 [3].z+ t0 [ 6]. z + 
t0[7]/*                *//* :::::::::      */.z ) /4; P[4].p0 = t0[4]; P[4].p1=
t0[0];P[4]/*           *//* ::::     */.p2=t0[2] ; P[4].p3 =t0[6];P[4].maxz=(t0
[3].z +t0[0].z /*      *//*     */+ t0[2].z+t0[6].z)/4;P[5].p0=t0[1];P[5].p1=t0
[5]; P[5].p2 = t0[7];/**//**/P[5].p3=t0[3];P[5].maxz=(t0[5].z+t0[1].z + t0[7].z 
+ t0[3].z) / 4; for (c = 1; c <= 5; c++) { wk=P[c]; for (ck=c; P[ck - 1].maxz > 
wk.maxz && ck > 0; ck--) P[ck]=P[ck - 1];P[ck]=wk;}for (n=3; n >= 0; n--) {pob0
[0].x =P[n].p0.x; pob0[0].y=P[n].p0.y; pob0[1].x=P[n].p1.x;pob0[1].y=P[n].p1.y;
pob0[2].x=P[n].p2.x;pob0[2].y=P[n].p2.y;pob0[3].x=P[n].p3.x;pob0[3].y=P[n].p3.y
;if(z >= 0)fillpob(pob0, 4,gett1(P[n].maxz));}ax=ax+0.01;ay=ay+0.01;az=az+0.01;
printf("\x1b[H"); for (j=0; j < sch; j++) {for (i=0; i < scw; i++) {putchar(o[i
+ (j * scw) ]) ; }putchar('\n');}usleep(10000);}return (0);}// nikon^dkd - 2014
