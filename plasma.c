#include <stdio.h>/*WW*/          /*WKko:'.  ,W*/             
#include <math.h>/*Wc..dN*/  /*WKko:'.        .K*/          // we love you all
#include <time.h>/*o     :K*//*X'..           .O*/                
     void main(){/*,       :K  XWc          'X*/int u,v,w,          //nikon'13 
tb[80*25],y,x,j,i/*W'     .K   ,        o*/;int index=0; for(u=0;              
  u<100;u++){for(y=/*d      d   ,       .X*/0; y<4;y++){/**/if(y==0)     
     w=32;if(y/*k'..':.     ,   ,       o*/==1)w=58;if/*k:,dW*/(y==2)w=33;
      if(y==3/*k            .K  c      .X*/)w=102;for/*k    .dW*/(x=0;x<5;x++)
    {index++;/*,      ck:    ,W k      , Kck*/tb[index/*,      .dW*/]=w;      
          }}}/*d      .O d    o K.     ::.:kkddddOX*//*,        .dW*/while(1)
      {for(y=0/*k.      :Kd   .K ,       ..        :X  :        .:X*/;y<25;y++)
       {for(x=0;/*Wd'      co   ,Wo     .o,          :  O       ,*/x<80;x++){
        w=(int)40+/*Ko'    ..   cK.   .X c          o XWc      ,*/(40*sin
            (x/32.0))/*XKd:'.  'cXc    OK.         .o: kX,     .X*/+40+(40      
               *sin((x+y+(/*WKOW**Wd. 'Kc            .:X K.     k*/index))/16.0
              ))+40+(40*sin(sqrt((/*WX  ,          ,::::cd:     :*/double)
                     (x*x+y*y))/16.0)/*O        .oKK.      .    .X*/);   
                              putchar/*Wkc'  .:OW  :      .o'    c*/(tb[w]);
                                   }putc(/*XOW     c       dW:    k*/'\n',
                          stdout);}index++;usleep/*Wc       cX:   .X*/(90000)  
                                 ;for(u=0;u<2;u++){/*K:      .d:   c*/int i,temp
                                    ;temp=tb[0];for(/*Xd:.    ,.   d*/i=0;i<
                                    2000-1;i++);tb[i]=/*WOd:.    .,X*/tb[i+1]; 
                              tb[i]=temp;}printf("\033s");/*WOd:..,X*/}}
