#include <stdio.h>

int main() {
  int N,Num;
  int even=0,odd=0,pos=0,neg=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
      scanf("%d",&Num);
      if(Num%2==0){
          even++;
      }
      else{
          odd++;
      }
    if(Num>0){
        pos++;
    }
    else if(Num<0){
        neg++;
    }
  }
  printf("Even: %d\n",even);
  printf("Odd: %d\n",odd);
  printf("Positive: %d\n",pos);
  printf("Negative: %d\n",neg);

    return 0;
}