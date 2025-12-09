#include <stdio.h>

int main() {
  int N,num,max=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      scanf("%d",&num);
      if(i==0 || num>max){
         max=num; 
      }
  }
    printf("%d\n",max);
    return 0;
}