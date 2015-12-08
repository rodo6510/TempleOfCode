#include <stdio.h>   // ------------------------------ gcc -o donut donut.c -lm 
#include <stdlib.h>  //   |     ./donut number_of_rings number_of_segments time
#include <string.h>  //   |  _  |   _    |  _   _   _  _
#include <time.h>    // (_| (-' |< (_| (_| (-' | ) (_ (-'    ./donut 16 20 1000 
#include <math.h>    // -------------------------------------------------------
#include <sys/time.h>
int a0=40,a1=80,cx=0,cy=0,               cz=10,mx=40,my=20,scale=1;float ax   =
10,ay=20,az=10             ;int change,        i=10,t,j,x,y,z,n,xd,yd,zd,zx   ,
zy,yx,yz,        xy,xz,xro,yro,zro;double px,        py;char o[8000];typedef   
struct{     int x,y,z;} p3d;p3d myp_temp;p3d*myp3d;       p3d *myp_zt;void     
pp(int    x,int y,int tex){o[x+(y*a1)]=tex;}float cosaz;                      
float     saz;float cay;float sine_ay;float               cax;float sine_ax   ;
int      main(int argc,char *argv[]) {                        int nr, ns; if  (
argc     < 4)return -1;nr = atoi (                       argv     [1]);ns     = 
atoi      (argv[2]);int c3=atoi                          (argv[    3]);float pi
=3.1415f;         float r1                                =14.0f ;   float   r2
=7.0f;myp3d=malloc                       ((             nr*ns ) *    sizeof( 
p3d));if(NULL == myp3d)                {printf          ("Bah\n")   ;return -1 
;}p3d *myp_zt = malloc((               nr*ns )*         sizeof(    p3d));if(
NULL == myp_zt ) { printf(            "Bahl\n");        return    -1;}for(i=0 ; 
i <= nr; i++){for (j= 0; j            <=ns;j++){float            u=((float) 
i) / nr;;float v=((float)j+          (float)u)/ns;float         ua =u*2*pi   
;float va = v * 2 * pi;float        x= cos(ua)* (r1 + cos(va) *r2);float y
 = sin(ua)*(r1 +cos( va) * r2);  float z=sin(va)* r2; myp3d[ (i* ns ) +j
].x = x;myp3d[(i*ns)+j].y =       y; myp3d[ (i * ns)+ j]. z=z ; }}struct      
timeval t1,t2;gettimeofday (     &t1, NULL );;; while ( 1) { if( c3 < 0       ) 
break;c3--;  memset(o,' ',8000      ); cosaz = cos (az); saz = sin (az       );
cay=cos(ay     ); sine_ay = sin      (ay);cax=cos(ax);sine_ax = sin (        ax
);for (n=0      ;n<( nr *   ns );    n++){xd=myp3d[n].x                     ;yd
=myp3d[n         ].       y; ;;zd      = myp3d[n                           ] .z
;                      zx=xd*cosaz                     -yd*saz-xd;zy=       xd*
saz+                yd*cosaz-yd;yx            =(xd+zx)*cay-zd*sine_ay      -(xd
+zx);yz=            (xd+zx)*sine_ay      +zd*cay-zd;xy=(      yd+zy)*       cax
-(zd+yz      )*      sine_ax-(yd+zy)     ;xz=(yd+zy)*    sine_ax+( zd+      yz)
*cax-      (zd+yz)    ;xro=yx+zx;yro      =(zy+xy);zro=xz+yz;myp_zt[n]     .z= 
 (      myp3d[n].z+    zro+cz);myp_zt      [n].x=((myp3d[n].x+xro))+mx;      ;;
;   myp_zt[n].y=(myp3d  [n].y+yro)+my      ;}for(i=0;i<n-1;i++){change      =0;
;;for (j=0; j<n-1;j++){if (myp_zt[j].z>     myp_zt [ j+1] .z                 ){
 myp_temp= myp_zt [j];myp_zt[j]=myp_zt[      j+1 ] ;                     myp_zt
[j+1]= myp_temp;change++;}}if(change ==0)                    break;}for(n=0;n<(
nr*ns);n++){z=myp_zt[n].z;x= myp_zt[n].x;y=            myp_zt[n].y;if(x>0&& y>0
&&z >-4&& z<35)pp(x,y,"  ..,,--~:;=!!**((##$$@@@@@@@@@@@@@@"[z+4]);}ax=ax+0.05;
ay=ay + 0.05;az = az + 0.05 ; printf("\x1b[H");for(j =0;j <a0;j++) {for (i = 0;
i < a1; i++) { putchar(o[i+(j* a1)]);}putchar('\n'); }usleep(25000);}return 0;}
// nikon'dkd - we luv ya !!
