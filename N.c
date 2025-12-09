#include <stdio.h>

int main() {
    int N,X,i=1;
    char S;
    scanf("%c",&S);
    scanf("%d",&N);
    while(i<=N){
        scanf("%d",&X);
        for(int j=1;j<=X;j++){
            printf("%c",S);
        }
        printf("\n");
        i++;
    }

    return 0;
}