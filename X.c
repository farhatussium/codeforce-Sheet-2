#include <stdio.h>
#include <math.h>

int main() {
   int T;
   scanf("%d",&T);
   while(T--){
       unsigned int N;
       scanf("%u",&N);
       int count=0;
       while(N>0){
           if(N%2==1)
           count++;
           N/=2;
       }
        unsigned int result=pow(2,count)-1;
          printf("%u\n",result);
   }

    return 0;
}