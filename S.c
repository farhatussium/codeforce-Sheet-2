#include <stdio.h>

int main() {
   int a,b,N;
   scanf("%d",&N);
   for(int i=1;i<=N;i++){
       scanf("%d %d",&a,&b);
       int S=(a<b?a:b);
       int E=(a>b?a:b);
       int sum=0;
       for(int j=S+1;j<=E-1;j++){
         if(j%2!=0){
           sum+=j;  
         }  
       }
       printf("%d\n",sum);
   }
   
    return 0;
}