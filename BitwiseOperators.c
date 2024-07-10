#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int anding =0 , oring=0, xoring=0 , and=0 , or=0, xor=0;
 for(int i=1; i <=n-1; i++)
 {
     for (int j=i+1; j<=n;j++) 
     {  
            // n=i, k=ji
             and = i & j;
            //  printf("%d & %d = %d \n",i,j,and);
             or = i | j ; 
            //  printf("%d | %d = %d \n",i,j,or);
             xor = i ^ j; 
            //  printf("%d ^ %d = %d \n",i,j,xor);

            if(and > anding && and < k)
            {
                anding = and ; 
            }
            // printf("anding = %d \n",anding);
            if(or > oring  && or < k)
            {
                oring = or ; 
            }
            // printf("oring = %d \n",oring);

            if(xor > xoring  && xor < k)
            {
                xoring = xor ; 
            }
            // printf("xoring = %d \n",xoring);

     }
 }
 printf("%d\n",anding);
 printf("%d\n",oring);
 printf("%d\n",xoring);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
