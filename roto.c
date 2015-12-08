#include <stdio.h>
#include <math.h>
#include <time.h>
int h=0;
int t[256]; void               rotoZoom(float cx               ,float cy,float r
, float a){ int               Ax=(int)(4096.0f*               (cx+r*cos( a ))),
               Ay=(int)      (4096.0f*(cy + r*               sin(a))),Bx=(int) 
              (4096.0f*(cx+r*        cos( a +               2.02358))) , By = 
             (int)( 4096.0f*                (  cy +r       * sin (a+2.02358)
            )),Cx = (int)(                 4096.0f*(cx + r*        cos( a -  
           1.11701 ) ) ),                 Cy=(int)(4096.0f               *(cy+r*
sin       (a-1.11701)));                 int dxdx =(Bx-Ax                ) /80 ,
dydx=(By -       Ay)/80                 , dxdy = (Cx-Ax)                /23,dydy
=(Cy-Ay)/              23; long        offs = 0;int j,i                ;for (j=0
; j<23 ;              j++){Cx= Ax; Cy=        Ay;for(i                =0; i<80 ;
i++ ) {              putchar(t[ (( Cy                 >>14)&0xf      ) +((Cx>>10
)&0xf0              )]); Cx+= dxdx ;                 Cy+=dydx;offs++;       } ;;
printf             ("\n");Ax+=dxdy;                 Ay += dydy;}}int            
main              (){int i,j,g,h=0                 ,path=0;for(j=0;  
j<8;j++          ){for(i=0 ;i< 8;                 i++){t[h++]=32;}
   ;for(i=0;i<8;        i++) { t                 [h++]=43;}}for(j 
  =0;j<8;j++ ){                 for(i=0;i       <8;i++){t[h++ ]=              43
 ;};for(i=0;i<                 8;i++){t[h++]=32;        }}while              (1)
{rotoZoom ( (                 float)80/2+(80/2*                sin((float  )path
/50)),(float                 )23+(23* cos ( (                 float)path/50)   
), ( float)                 128.0+96.0*cos((                 float)path/10) 
, ( float)                 path/50); path =                 (path+1);usleep
(90000);                  printf("\33c") ;                 }return 0;} //nikon'13
