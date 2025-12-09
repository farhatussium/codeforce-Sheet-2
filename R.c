#include <stdio.h>

int main() {
   int N,M;
   while(1){
   scanf("%d %d",&N,&M);
   if(N<=0 || M<=0){
       break;
   }
  int S=(N < M ? N : M);
  int E=(N > M ? N : M);
  int sum=0;
  for(int i=S;i<=E;i++){
      printf("%d ",i);
      sum+=i;
  }
  printf("sum =%d\n",sum);
   }
    return 0;
}