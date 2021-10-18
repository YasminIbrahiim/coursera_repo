#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

	
void main() {

 unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
								
unsigned char find_maximum(unsigned char *g){
unsigned char x;
x = *g;
char i = 0;
while (  i < SIZE ) {	
if (*g > x){
x = *g ;
g++;
i++;

} 
i++;
g++;
}
return x;
}
unsigned char find_minimum(unsigned char *m){
unsigned char x ;
char i = 0;
x = *m ; 
	while (  i < SIZE ) {
	if (*m < x){
	x = *m ;
	m++;
	i++;
	} 
	i++;
	m++;
}
return x;
}
 unsigned char find_mean( unsigned char *y){
	 char i = 0;
	 int sum = 0;
	 
   while (i < SIZE){ sum += *y;
     i++;
	 y++;
	   
   }	 
return sum;	 
 }
 unsigned char find_median( unsigned char *v){
	 unsigned char median = (*(v+19) + *(v+20))/2;
	 
	 
 }
 
unsigned char sort_array(unsigned char *s ){	 
	 unsigned char sorted[SIZE];
	 unsigned char array[SIZE];
		int a = 0;
		int i = 0;
		char tempo = 0;
	

 for (i = 0; i<SIZE; i++){
     for (a=i+1; a < SIZE; a++){
         if (*(s+i) < *(s+a))
         {
             tempo = *(s+i);
             *(s+i) = *(s+a);
             *(s+a)=tempo;
         }
     }
 }
 for (i=0; i<SIZE; i++)
 {
     printf(" %d ,", *(s+i));
 }
 }
 

int print_statistics(){		
		
	int	max = find_maximum(test);
		printf("maximum number = %d\n",max);
	int	min = find_minimum(test);
		printf("minimum number = %d\n",min);
		int sum = find_mean(test);
		printf("mean = %d\n", sum / SIZE);
		int median =find_median(test);
		printf("median = %d\n",median);
 } 
 print_statistics();
sort_array(test);
}
