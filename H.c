#include <stdio.h>

int main() {
   int N,prime=1;
   scanf("%d",&N);
   for(int i=2;i<N;i++){
       if(N%i==0){
           prime=0;
           break;
       }
   }
   if(prime){
       printf("YES\n");
   }
   else{
       printf("NO\n");
   }
    return 0;
}