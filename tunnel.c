#include <stdio.h>
#include <math.h> 
#include <time.h>         

           int main()          {int i,j,t,
         x,y,z,tb[80*25];     int milisec=100; 
        struct timespec req={0};;req.tv_sec=0;
        req.tv_nsec=milisec*1000000L;z=0;for(
         j=0;j<100;j++){for(y=32;y<34;y++){for    // lov'ya all
         (x=0;x<10;x++){z++;tb[z]=y;}}}while(
          1){z=0;for(y=0;y<25;y++){for(x=0;x           // nikon'dkd
           <80;x++){i=x-40;j=y-12;putchar(
              tb[((((int)(atan2(i,j)*32/
                3.14159265))&15)<<4|((                 int)    (256/
                   sqrt(i*i+j*j)))&15                )]);;};putc('\n',
                      stdout);}for(z=                0;z<2;z++){t=tb
                         [0];for(i=0;                  i<2000-1;i++
                            )tb[i]=tb                   [i+1];;tb[ 
                              i]=t;}                     ;usleep( 
                                90000);                  printf( 
                                  "\033s"                 );}}
                                       ;;;                ;;
                                          ;;             ;;      
                                              ;         ; 
                                         
                                    
