#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int Num=1;
    for(int i=1;i<=N;i++){
        printf("%d %d %d PUM\n",Num,Num+1,Num+2);
       Num+=4; 
    }
    return 0;
}