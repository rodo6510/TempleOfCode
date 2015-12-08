#include <stdio.h>
#include <stdlib.h>
                         int tohell; int with
		   ;int flanders;void print(int *arr, 
	      int n ) { int i=0 ;;; printf("\n");; while
	    ( i < n ) {        ;printf	        ("%c ",arr
	  [i]);;i++	       ;; }  }              int jos ( 
	 int   n, 	       int k )               {int i=0;
	int died 	       = 0;; ;		      int *arr= 
       malloc( 		       n*sizeof		      (int));if( 
       NULL== 		       arr ) {		        printf (
      "Fail\n"		    ); return -1;	         }while(i
      < n ) {		  arr[i]='.';printf( 	         "%d ",i);
      i++ ; }		printf( "\n" ) ;print(		 arr, n);
      while ( 	      died < 	n )  {  int steps 	 =0;while
      ( steps 	    < k) {     steps++    ;do {i++;      i = i %n
       ;}while	  (arr[i]      =='*');      ;}print (    arr,n);
         died++	;arr[i]=       '*' ; }         return i ;;} int 
           main(int argc       ,  char 		*argv[]){int n
	     ,k;if(argc <3     )return      -1;n=atoi(argv[1] 
                ); k = atoi ( argv[2] ); printf ( "\n\n");
                     printf("\n\nuebrig bleibt: %d\n\n", 
 		         jos( n, k ));;} //nikon'14
